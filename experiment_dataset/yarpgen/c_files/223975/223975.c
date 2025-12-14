/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((max(var_6, var_7)), var_5));
    var_11 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 = (((~2046) ? 1691056950 : ((-30936 ? var_2 : var_1))));
                    var_13 = (~108);
                    var_14 = (max(var_14, 30935));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_15 = (((((-30936 ? (((min(var_3, 148)))) : ((var_8 ? 11829576895028504301 : 52))))) ? ((((((var_1 ? 9281734653456889494 : 258048))) ? var_1 : ((var_2 ? 577152721 : 1072394356))))) : -487300477));
                        var_16 = (((0 ? var_8 : 487300477)));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_17 = ((((min(52, (148 == 27)))) ? 3807666818 : (((-2147483647 - 1) ? ((-8661 ? -24754 : 0)) : 44128))));
                                arr_15 [i_0] [5] [i_2] [i_4] [i_5] = (min((((((2343862933501652555 ? var_4 : 0))) ? ((max(96, var_0))) : ((var_0 ? var_9 : 108)))), (((!var_3) ? var_8 : 229))));
                                var_18 = (min(1911575059, 0));
                                var_19 = (min(var_19, var_1));
                                var_20 = (min(var_8, var_0));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        {
                            var_21 = ((((min(var_9, var_0))) ? (((!((min(var_5, -98)))))) : ((61960 ? (~227) : ((max(var_0, var_8)))))));
                            var_22 |= ((var_9 ? (min((((var_5 ? 52 : var_8))), ((var_6 ? 28 : 1280054132)))) : ((2143289344 ? (((max(var_3, var_1)))) : 0))));
                            var_23 = ((var_9 ? (~var_6) : (min(var_5, ((-31288 ? 0 : 156))))));
                            arr_28 [11] [i_7] [i_7] [i_8] [i_9] = (min(((162 ? var_3 : var_5)), (~var_8)));
                        }
                    }
                }

                /* vectorizable */
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    var_24 = ((8645 ? 2383392239 : 12));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 25;i_12 += 1)
                        {
                            {
                                arr_38 [i_11] [i_11] [i_7] [i_10] [20] [i_11] [i_12] = -var_9;
                                var_25 = ((108 && (2708489773 - 21408)));
                                var_26 = ((var_2 ? 0 : var_3));
                                var_27 = -2832214084927154239;
                                var_28 = ((var_3 ? var_3 : var_7));
                            }
                        }
                    }
                    var_29 = (65 > var_8);
                    var_30 = ((0 ? -14076 : -87));
                    var_31 = ((226 ? 0 : -44607460353780928));
                }
            }
        }
    }
    #pragma endscop
}
