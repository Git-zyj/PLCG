/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                arr_13 [i_0] [i_0 - 4] [i_0 - 4] [i_0] [i_0] [i_0] [i_0 - 4] = (max((15 == -7), 12459));
                                var_18 *= (((((!((max(-15, (arr_10 [i_0] [i_0] [i_3] [i_4]))))))) << ((((var_12 ? (arr_11 [i_4] [i_3] [i_2] [i_1] [i_0 - 1]) : var_15)) - 1598413521))));
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_0] = ((53085 != (max(var_6, (~var_3)))));
                            }

                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_19 = (max(var_19, (var_16 > var_16)));
                                var_20 += ((((((arr_8 [i_0 - 1]) > 9))) << (var_1 + 358367240)));
                                var_21 = (max(var_21, (((-var_13 / (((-6 ? 53080 : 65522))))))));
                                var_22 += (((((-15 ? (-2147483647 - 1) : 0))) ? 3481260393 : ((0 ? (-9223372036854775807 - 1) : 18446744073709551598))));
                                arr_17 [i_2] = 1152921504606846975;
                            }
                            arr_18 [i_0] [i_0] [i_0] [i_3] = (((2147483647 ? ((127 ? 0 : 1) : 1))));
                        }
                    }
                }
                var_23 = -18446744073709551607;
                arr_19 [i_0] [i_0 + 1] = ((((max((arr_15 [i_0 + 1] [i_0 - 4] [i_0]), (arr_15 [i_0 + 1] [i_0 + 1] [i_0 - 4])))) >= var_1));
                var_24 = (((arr_3 [i_1]) ? 1897625168 : ((var_4 ? var_12 : 2147483645))));
            }
        }
    }
    var_25 = ((var_7 * ((var_2 << (((max(18446744073709551607, var_12)) - 18446744073709551579))))));
    #pragma endscop
}
