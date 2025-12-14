/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (((((-((192 ? -5255 : 86))))) ? 1185351194573776503 : var_5));
    var_15 = ((((((((var_6 ? var_0 : var_10))) ? (~2147483647) : var_1))) ? ((((((15360 ? var_8 : 65535))) ? -var_5 : -var_4))) : -622146658189283142));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_2] = ((var_12 ? -5038039741387755259 : (~-var_7)));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_2 - 1] [i_2] = (~3604747660482858298);
                        var_16 = (min(var_16, ((((5566555902838599416 ? var_5 : (arr_2 [i_3] [i_2] [i_0])))))));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_15 [i_1] [i_2] [2] [4] [i_1] [i_1] &= (((((-var_10 ? (arr_5 [i_2 - 1]) : -14989))) ? (((arr_13 [i_2 - 1] [i_4]) ? (arr_13 [15] [i_1]) : var_1)) : var_12));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_19 [i_2] [3] [i_0] [i_1] [i_2] = (((((~(!9223372036854775807)))) ? ((-(!var_9))) : ((1 ? (!1) : (!17261392879135775105)))));
                            var_17 = var_0;
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_18 = (-2147483647 - 1);
                            var_19 = (~((~(arr_13 [i_2 - 1] [i_2 - 1]))));
                        }
                        arr_23 [i_4] [i_2] [i_2] [8] = (((~var_3) ? (~var_11) : ((~(((arr_6 [1] [2] [2] [i_2]) ? 1 : (arr_10 [i_2])))))));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_26 [i_0] [i_1] [1] [i_2] [i_2] [i_7] [17] = ((-(arr_16 [i_2 - 1])));
                            arr_27 [2] [i_2] [i_2] [i_4] [i_7] = ((65535 ? 1 : (arr_18 [i_1] [i_2] [i_2])));
                            arr_28 [i_0] [i_1] [i_2 - 1] [i_4] [i_2] = -8786441841070992465;
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_20 |= (((~var_11) ? -96 : var_12));
                            var_21 = (~((~(arr_29 [i_0] [i_1] [i_2] [i_4] [i_8]))));
                            arr_31 [i_2] [i_4] [i_2 - 1] [i_1] [i_1] [i_2] = ((~(arr_17 [i_2] [1] [i_2 - 1] [1] [i_2 - 1])));
                        }
                        var_22 = (((((255 ? var_9 : (arr_14 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2])))) ? (((arr_7 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1]) ? 6 : (arr_14 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]))) : ((~(arr_14 [i_2 - 1] [i_2] [i_2 - 1] [i_2])))));
                    }
                    var_23 *= (!-14);
                    var_24 = ((~((~(arr_24 [i_2] [i_2 - 1] [i_2] [i_2] [i_2])))));
                }
            }
        }
    }
    #pragma endscop
}
