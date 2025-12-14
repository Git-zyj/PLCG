/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    var_21 = (max(2155559899, 2139407397));
    var_22 = 32;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_9 [i_0] [i_1] [i_1] [i_1] [12] [i_3] = 183;
                        var_23 = (!912529162);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_24 += 17896;
                        arr_12 [i_4] [i_2] [i_4] = (~2155559887);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_25 = (max(var_25, ((((((var_17 ? -3940477531047401684 : 4026531840))) ? 734232205 : 48)))));
                        arr_17 [17] [13] [13] [16] = 485327100;
                    }
                    arr_18 [i_2] |= ((-(((var_16 + 2147483647) << (((var_13 + 77169360017096795) - 12))))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    var_26 = (!112);
                    arr_21 [i_0] [i_1] [12] [i_1] = (~17896);
                    var_27 = var_0;
                    arr_22 [i_0] [4] = (~var_13);
                }
                /* vectorizable */
                for (int i_7 = 2; i_7 < 15;i_7 += 1)
                {
                    arr_27 [10] = var_7;
                    arr_28 [i_0] [8] = (((((-17916 ? 221 : 0))) ? -253 : ((8659 ? 120 : var_6))));
                    var_28 *= var_16;
                }
                for (int i_8 = 3; i_8 < 17;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 17;i_10 += 1)
                        {
                            {
                                var_29 = -17896;
                                arr_35 [i_8] [i_1] [i_1] [i_1] [i_1] = (-var_9 ? ((17896 ? ((3 ? 10 : 255)) : (~-17896))) : ((201 ? 63 : 31)));
                            }
                        }
                    }
                    arr_36 [i_0] [i_8] [10] [6] = -119;
                    var_30 = ((((max((var_15 - -1), ((1405382200 ? var_10 : 15))))) ? var_14 : (35919 >= -734232205)));
                    arr_37 [i_0] [i_8] = ((((((!28) << var_19))) ? ((29617 ? var_18 : 1405382195)) : (((23655 ? 121 : var_17)))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 16;i_12 += 1)
                        {
                            {
                                var_31 = -4274744353;
                                arr_43 [i_0] [i_1] [i_1] [i_11] [i_8] = (min((~var_11), ((var_4 ? var_14 : var_15))));
                            }
                        }
                    }
                }
                arr_44 [i_0] [i_1] [16] = ((144 ? var_17 : (196 + -6522518046547486527)));
            }
        }
    }
    #pragma endscop
}
