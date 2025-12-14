/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-((min(-9689, var_4)))));
    var_20 *= max(9288, (min(var_16, 28971)));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_21 = (max(((min((arr_0 [i_0 + 1]), (arr_0 [i_0 - 1])))), (arr_1 [i_0 - 1])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_22 = (arr_1 [i_3]);
                                arr_15 [11] [i_0] = ((((((((((arr_12 [i_0] [6] [i_2] [8] [i_4]) + 2147483647)) >> (((arr_12 [i_0] [1] [i_4] [i_3] [19]) + 3655)))) | (arr_10 [i_1] [4] [20] [i_4])))) ? ((-(arr_12 [7] [i_3] [i_2] [i_1] [6]))) : ((((((arr_4 [i_2] [4]) ? (arr_1 [0]) : (arr_14 [8]))) <= (((arr_10 [i_0] [i_1] [i_2] [i_3]) ^ (arr_5 [i_0] [20] [17]))))))));
                                arr_16 [i_0] [11] [i_2] [i_3] [1] = (max(((~(arr_12 [i_0 + 1] [i_0 + 1] [i_0 + 1] [18] [i_0 - 1]))), ((((arr_6 [10] [i_1] [11] [i_0 - 1]) || (arr_6 [i_0] [3] [i_2] [i_0 + 1]))))));
                            }
                        }
                    }
                    arr_17 [i_0] = (arr_2 [i_0] [10] [15]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 20;i_6 += 1)
            {
                {
                    var_23 = (arr_12 [i_0 - 1] [i_5] [14] [i_6 - 1] [3]);
                    var_24 *= ((((-47002 ? (arr_10 [i_0] [10] [0] [11]) : ((min((arr_3 [i_0] [4] [i_0]), (arr_21 [0] [i_6])))))) & ((9688 ? 4165 : 47010))));
                }
            }
        }
    }
    #pragma endscop
}
