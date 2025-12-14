/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_12 += ((12674108636706531600 | (max(var_6, (arr_3 [i_0])))));
                var_13 = (arr_0 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_14 = ((((((var_8 ? (arr_1 [i_2]) : var_10)) ^ (arr_1 [i_0]))) + (((var_10 ? -var_5 : (((arr_3 [i_3]) ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]) : 0)))))));
                            var_15 = ((((max((((87 ? (arr_3 [i_3]) : var_9))), (~8831879892865405656)))) ? (max(var_10, (arr_6 [i_3] [i_3] [i_1] [i_3]))) : ((((arr_7 [i_1] [i_1]) ? (arr_0 [i_0] [i_0]) : ((2246495208 ? (arr_1 [i_0]) : var_2)))))));
                            var_16 = arr_6 [i_1] [i_1] [i_1] [i_1];
                        }
                    }
                }

                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    var_17 = ((arr_2 [10] [i_4 - 3]) ? (((arr_9 [i_0] [i_0] [i_0]) ? 65535 : var_4)) : (arr_0 [i_4 + 1] [i_4 + 1]));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_18 = (arr_16 [i_1] [i_1] [i_1] [i_1]);
                                var_19 += 65535;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 9;i_8 += 1)
                        {
                            {
                                var_20 = (arr_4 [i_0] [i_0]);
                                var_21 = ((min((var_0 * var_5), (arr_4 [i_0] [i_0]))));
                            }
                        }
                    }
                    var_22 += ((arr_7 [i_0] [i_0]) | (arr_12 [i_0] [i_0] [i_0] [i_0] [0] [i_4]));
                    var_23 = (arr_14 [i_0]);
                }
            }
        }
    }
    var_24 = (max(var_8, ((var_0 ? -var_9 : (var_0 | var_7)))));
    #pragma endscop
}
