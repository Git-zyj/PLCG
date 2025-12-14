/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = 4248288894;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_18 = (((~var_4) ? var_9 : ((var_7 ? 5183591149380023161 : -89))));
                        var_19 = ((-((var_6 << (18446744073709551615 - 18446744073709551614)))));
                        var_20 -= (!var_7);
                        var_21 = 3371651306;
                    }
                    for (int i_4 = 1; i_4 < 9;i_4 += 1)
                    {
                        var_22 = ((!(var_11 && 1879198029)));
                        var_23 = ((~(min((var_8 - var_0), (!-12)))));
                        var_24 = 114;
                        arr_12 [i_1] = ((8535 ? (max(255, 2218212951)) : -110));
                        var_25 = (max(((max(var_9, (-3878 & 1576692536)))), (~var_13)));
                    }
                    var_26 = var_4;
                    var_27 = ((((max(-var_14, (!-5819601958830998757)))) < ((var_4 ? ((var_5 % (-9223372036854775807 - 1))) : var_1))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_28 = (max((((-1 * 249) ? var_8 : 4094)), (!1)));
                                var_29 = (((((~((52 ? var_6 : 4118))))) ? (((max(1, (max((-32767 - 1), var_10)))))) : (min(18446744073709551613, 89))));
                                arr_17 [i_0 - 1] [i_1] [i_2] [i_1] [i_5] = ((-(((-1215542344 && (!-68))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_30 = var_14;
    #pragma endscop
}
