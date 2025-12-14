/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
                {
                    var_19 = ((-(3968 < 14)));
                    arr_7 [i_0] [i_1] [5] [i_2] = ((20 / (248 & 234)));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
                {
                    var_20 = (~var_4);
                    arr_12 [i_0] [i_1] = -var_11;
                    arr_13 [i_0] = 255;
                }
                for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                {
                    var_21 = var_7;
                    var_22 = (4294967279 * 0);
                    arr_16 [i_0] [i_1] [i_4] [i_4] = (((((255 / 65535) ? 48099 : 236)) / 246));
                    var_23 &= -128;
                }
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    arr_19 [i_0] = 234;
                    arr_20 [i_0] [14] [i_0] = (min(-511, 63));

                    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        arr_24 [17] [i_1] [17] [i_1] [i_0] [i_1] = (max(7, 63));
                        arr_25 [i_6] [i_1] [i_0] [i_0] [i_5] [i_0] = (~18446744073709551615);
                        arr_26 [i_0] [i_0] [i_0] [i_0] = (min(((max(65535, 7))), (~18)));
                    }
                    for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                    {
                        arr_29 [i_0] [i_0] [i_1] [i_0] [i_7] [i_7] = (max(65535, 9616165679967097249));
                        arr_30 [i_5] [i_5] [i_5] [i_0] = ((-(((2298932955 || (var_14 || var_15))))));
                    }
                }
                arr_31 [i_0] [i_0 - 1] [i_1] = -63;
                arr_32 [4] [i_1] [i_1] &= ((39269814 / 16) ? 16777215 : ((-(var_1 || 65535))));
            }
        }
    }
    var_24 = (!0);
    /* LoopNest 3 */
    for (int i_8 = 1; i_8 < 9;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 7;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                {
                    var_25 = 135;
                    var_26 = ((!(((var_15 ? 18446744073709551610 : (var_5 || var_14))))));
                    var_27 = -18446744073709551615;
                    arr_41 [i_8] = (min((8725724278030336 / 255), ((((var_11 ? 65535 : 65535))))));
                    var_28 *= ((((max(var_17, ((255 ? var_11 : 3015721384072396202))))) ? ((~(max(1554492396, -144115188075855872)))) : var_1));
                }
            }
        }
    }
    #pragma endscop
}
