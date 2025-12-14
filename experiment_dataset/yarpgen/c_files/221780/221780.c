/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= ((var_11 << ((((((((8611 ? -2584 : 0)) | var_17)) + 2594)) - 11))));
    var_19 = var_11;
    var_20 = (4110906392749700395 - 21345);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, (((((((arr_1 [i_0] [i_0]) & var_1))) ? (((-6571 + 2147483647) << (((arr_1 [i_1] [i_2]) - 232)))) : ((3391460641 ? 114 : 71)))))));
                    var_22 = (arr_1 [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_23 -= (((arr_6 [i_0] [i_0] [i_0]) % var_13));
                                var_24 -= ((((((arr_10 [i_4] [i_4] [i_4] [i_4]) ? (arr_10 [i_4] [i_3 + 3] [i_4] [i_4]) : var_6))) ? (arr_13 [i_0] [i_0] [i_0]) : (((((var_10 ^ (arr_2 [i_0])))) ? (arr_13 [i_2] [i_2] [i_2]) : (arr_7 [i_0] [i_0] [i_0] [i_0])))));
                                arr_15 [i_0] [i_2] [i_0] [i_0] [i_2] = var_17;
                                arr_16 [i_2] = arr_12 [i_1] [i_1] [i_4 + 1] [i_1] [i_2];
                            }
                        }
                    }
                }
            }
        }
        var_25 = ((-106 + 22) == ((((12 ? var_14 : (arr_1 [i_0] [i_0]))) ^ (arr_2 [i_0]))));
        var_26 = (max(var_26, (arr_12 [i_0] [i_0] [i_0] [i_0] [12])));
        arr_17 [i_0] [i_0] = arr_13 [i_0] [i_0] [i_0];
    }
    var_27 = (min(var_27, ((((((((var_16 / var_14) < var_2)))) != var_6)))));
    #pragma endscop
}
