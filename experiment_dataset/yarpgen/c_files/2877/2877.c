/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_1] = 63;
                arr_7 [6] [6] [i_0 - 1] = (min(((215 ? (min(var_4, (arr_5 [i_0] [i_1 - 2] [i_0]))) : 63)), (arr_5 [i_0 + 2] [i_0 + 1] [i_0 + 2])));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_12 [9] = ((-64 ? ((var_10 ? (arr_3 [i_0] [i_2]) : (arr_3 [i_0 - 1] [i_0]))) : (arr_1 [i_1])));
                    arr_13 [10] = ((63 ? (~17592186044415) : -17592186044416));
                    arr_14 [i_0 - 1] [i_0] [1] = ((-9223372036854775807 - 1) ? (arr_5 [i_0] [13] [i_0 + 3]) : (arr_3 [i_0 - 2] [7]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_19 [5] [i_3] [i_0] [i_0] [i_0] = ((-(((arr_18 [i_0] [i_1 + 2] [i_2] [i_2] [i_4]) ? (arr_3 [i_0] [i_0]) : 2699812433))));
                                arr_20 [i_0] [i_0] [i_0] [i_3] [i_3] [i_4] = (((arr_17 [i_0] [10] [i_0 - 1] [i_0 - 1] [10]) ? 3894070271 : (arr_17 [i_0] [1] [i_0 - 1] [i_3] [i_4])));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    arr_23 [i_0] [i_0] [i_5] = (arr_15 [i_0] [i_1] [i_5] [i_0]);
                    arr_24 [i_1] [i_5] = arr_3 [i_0] [13];
                }
                arr_25 [i_0] = 4294967295;
                arr_26 [i_0] [i_0] [i_0] = (arr_11 [i_0] [i_0]);
            }
        }
    }
    var_12 = var_7;
    #pragma endscop
}
