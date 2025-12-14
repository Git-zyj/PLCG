/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            var_19 = (max((((((var_8 ? var_0 : var_10))) ? (min(4078095033, 216872270)) : var_0)), var_0));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_20 += ((-var_7 & ((536870912 ? -15 : (~3207999304)))));
                        arr_11 [i_0] [i_0] [i_0] |= ((160 ? 1988961080013197754 : 86));
                        var_21 = var_17;
                        var_22 *= var_17;
                    }
                }
            }
            var_23 = (min(var_23, (arr_0 [i_0] [i_0])));
        }
        arr_12 [i_0] = (~var_13);
        arr_13 [i_0] [i_0] = ((216872263 * ((((var_11 / var_16) ? ((var_5 ? var_10 : var_10)) : var_6)))));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_24 = (((max((((arr_15 [i_5]) ? var_16 : 17261679931847054625)), var_8)) * ((((108 ? var_14 : var_14)) - var_6))));
            var_25 = (max(var_25, (108 ^ -15)));
            var_26 = (((((12120325472983215520 / var_16) ? 42 : ((var_12 ? (arr_9 [i_4] [i_5] [i_4] [16]) : 1))))) ? ((1988961080013197751 ? (var_13 == 2147483647) : ((63 ? 18446743798831644672 : var_16)))) : (((arr_10 [i_4]) | (arr_17 [i_4]))));
            var_27 = var_17;
            arr_20 [i_4] = var_0;
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 16;i_8 += 1)
                {
                    {
                        var_28 = 9845395439286804231;
                        arr_30 [i_4] [15] [i_6] [2] [i_4] = -8566122151893255225;
                        var_29 += var_6;
                    }
                }
            }
        }
        var_30 |= (var_14 && var_0);
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        var_31 = var_5;
        var_32 = (((((var_9 ? (arr_15 [12]) : var_1))) ? var_17 : (~var_1)));
    }
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        var_33 ^= ((~(min((arr_33 [i_10] [i_10]), ((8980829265523227498 ? var_2 : (arr_33 [i_10] [i_10])))))));
        arr_35 [i_10] [i_10] = ((var_16 ? ((((~(arr_33 [i_10] [12]))))) : (min((~8180918225004556310), (((16457782993696353867 ? var_3 : (arr_33 [i_10] [i_10]))))))));
        var_34 = ((536870912 ? 95 : 75110454));
    }
    var_35 = var_6;
    #pragma endscop
}
