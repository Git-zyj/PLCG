/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((((((((min((arr_0 [i_0]), var_6))) ? ((~(arr_4 [i_0]))) : ((var_0 ? (arr_0 [i_0]) : (arr_2 [i_0]))))) + 2147483647)) << ((((((-(arr_2 [i_0]))) + 95)) - 5))));
                var_10 -= ((((((max(var_1, 238)))) > ((535822336 ? -545675830 : 857754998108148970)))));
                var_11 = (arr_3 [i_0] [i_1]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_12 = (((((var_5 ? 3453 : (arr_15 [i_2] [i_3] [i_3] [i_3])))) ? (((((arr_18 [i_6]) ? var_1 : var_8)) & ((~(arr_18 [i_6]))))) : var_9));
                                var_13 *= ((!((min((arr_8 [i_4 + 1] [i_3] [i_2 - 1]), (arr_8 [i_4 + 2] [i_3] [i_2 + 1]))))));
                                var_14 = (max(var_14, (((((((var_3 != ((((arr_11 [i_2] [i_3] [i_5] [i_6]) >= (arr_6 [10])))))))) < (((arr_17 [i_2] [i_2] [i_4] [i_6]) ? ((var_8 ? (arr_7 [16]) : var_2)) : ((((!(arr_19 [1] [i_3] [i_4] [i_5] [i_6]))))))))))));
                            }
                        }
                    }
                    arr_22 [i_3] [i_2] [3] = (arr_14 [i_2] [i_2] [i_4 + 1] [i_4 + 3] [i_3] [5]);
                    arr_23 [i_2] = (((((15579 ? 857754998108148966 : 16563))) ? (min(135, -1137636163)) : (arr_19 [i_2] [i_3] [i_4 + 2] [i_2 - 1] [i_3])));
                    var_15 = (min(var_15, (arr_10 [i_2] [i_2] [8] [i_4])));
                    var_16 = (max(13473544707559112233, 19510));
                }
            }
        }
    }
    var_17 = (max(var_17, ((((((-680961575 - (62083 <= 17588989075601402645)))) ? -41 : 69)))));
    var_18 = (((-((min(var_1, var_3))))));
    #pragma endscop
}
