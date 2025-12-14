/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_17 = (arr_11 [i_4 + 1] [i_3 - 1] [i_3] [i_3] [i_1] [i_0]);
                                var_18 = ((((((arr_15 [i_4 + 3] [i_3] [i_3 + 1] [i_2] [i_1] [i_3] [i_0]) ^ (((arr_14 [i_0] [i_0] [i_3] [i_0] [i_0]) | (arr_4 [i_4 - 4])))))) ? (((((var_9 ? (arr_14 [i_0] [i_1] [i_3] [i_3 - 1] [i_4 + 3]) : (arr_6 [i_1] [i_0])))) | (min((arr_4 [i_1]), var_3)))) : var_10));
                                arr_16 [i_0] [i_3] [i_3 - 3] = ((((min(((max(var_2, 50085))), ((var_3 ? var_10 : (arr_2 [i_3 - 1])))))) ? (arr_8 [i_0] [i_2]) : (((var_11 | (255 + var_7))))));
                                var_19 &= ((!(~50061)));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [i_2] = (((((((var_9 ? (arr_1 [i_2]) : var_9))) ? 15457 : 10651)) | (((var_0 && ((min(var_5, 2874603300))))))));
                }
            }
        }
    }
    var_20 = (max(var_20, ((min((((var_0 && 48) | (var_16 != var_14))), (min((((-32767 - 1) ? 1 : var_16)), ((min(var_0, var_6))))))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            {
                var_21 |= ((~((min((arr_18 [i_5]), (!var_7))))));
                var_22 ^= (((((~(~var_9)))) ? ((max((arr_18 [i_6]), (arr_18 [i_5])))) : ((-(arr_20 [i_5] [i_6])))));
            }
        }
    }
    #pragma endscop
}
