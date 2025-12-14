/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_11 [i_0] [i_1] [i_0] [i_2] = (min(var_5, (min(var_13, (var_9 == 0)))));
                    var_20 = ((((((((29768 ? 2607126417 : 29768))) ? 4171570073 : (max(4171570073, var_9))))) ? (max((var_13 * -1), (max(1769935903, 98)))) : var_11));
                }
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    var_21 = var_1;
                    var_22 = 161;
                }
                var_23 = (max((((9208 ? ((var_19 ? 35768 : var_15)) : var_19))), ((var_10 * (((29768 ? 98 : var_2)))))));
                var_24 = (max(var_24, (((((((max(var_6, var_8))) ? ((var_18 ? var_13 : -38)) : 160)) | (((0 ? 51 : var_14))))))));
            }
        }
    }
    var_25 |= (((max(var_3, var_10))));
    var_26 = ((((((var_10 ? var_11 : var_15))) ? var_12 : 11639218781925081480)));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_26 [i_4] [i_8] [i_5] [10] [i_5] [10] [i_4] = var_18;
                                var_27 = ((((((var_3 ? var_2 : var_1)))) ? (((((var_12 ? 0 : var_12))) ? var_9 : ((123397223 << (82 - 66))))) : var_9));
                                var_28 -= (((((((min(163, var_1))) ? var_2 : ((4478073840351766529 ? var_1 : 3))))) ? ((((2035564424 ? 18446744073709551615 : var_5)))) : (((max(-2040255465, var_15))))));
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            arr_31 [i_10] [i_5] [i_6] [7] [i_4] [i_5] [i_4] = ((((var_5 ? 262206494 : var_16)) | var_3));
                            var_29 -= (((51 == var_0) && var_5));
                            var_30 ^= 29041;
                            arr_32 [i_5] [i_5] [i_6] [i_9] [i_5] = -90;
                        }
                        var_31 = (max(158, ((127 ? ((-38 ? -69 : var_0)) : (((min(-77, 38))))))));
                        var_32 = var_9;
                        var_33 = (max(var_33, ((((((((6941695833090637550 >> (var_19 - 11027)))) ? (var_11 | 1847655557) : (((var_4 ? 0 : 76))))) & ((((((-111 ? var_16 : 95))) ? ((max(-1, var_8))) : ((max(192, var_1)))))))))));
                    }
                    var_34 = var_13;
                    var_35 = ((((max((min(1796395742, 18053538048546040068)), var_14))) ? var_16 : ((((max(var_7, -18))) ? ((max(var_9, 4294967295))) : 161))));
                }
            }
        }
    }
    #pragma endscop
}
