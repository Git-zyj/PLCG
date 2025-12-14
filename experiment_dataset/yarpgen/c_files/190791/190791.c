/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((40755 || (((10848709625558189027 ? 1 : var_14)))))) != ((var_12 ? 41622 : 231))));
    var_19 = (max((((((var_4 << (var_4 - 36279)))) ? var_6 : var_15)), (((24781 <= (((123 << (78 - 57)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] = ((+(((arr_3 [i_0] [i_3 + 1] [i_3 + 1]) ? (arr_9 [i_4 - 1]) : (arr_9 [i_4 + 1])))));
                                var_20 = (min((arr_10 [i_0] [i_0]), 20));
                                var_21 = ((arr_7 [i_4] [i_3] [i_2] [6] [20]) <= (((min(1, var_14)) << (((max(-1, (arr_8 [i_4] [i_0] [i_4] [i_3] [i_4]))) + 21)))));
                                arr_13 [i_0] [i_0] [10] [10] [i_3] [i_4] [i_4] = (max(((max(((9314 ? (arr_7 [i_0] [16] [i_2] [16] [i_4]) : 511)), 157))), ((((-(arr_8 [i_0] [i_0] [i_2] [i_3 - 1] [i_4]))) << (((((min(var_16, 1535655083)) + 1590012221)) - 8))))));
                                arr_14 [i_0] [21] [i_0] [i_3] [i_4] [i_0] = ((!(((511 ? (arr_2 [i_1] [i_0]) : 15220)))));
                            }
                        }
                    }
                    arr_15 [i_0] [19] [i_2] = (arr_6 [i_0] [i_1] [i_0] [i_0]);
                    var_22 = (((((max(3758096384, 23911)))) != ((max(4957166716141337235, 391638532)))));
                }
            }
        }
    }
    #pragma endscop
}
