/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_7 [i_0] [i_1] = (arr_1 [i_0] [i_1]);
            var_18 = (max(var_18, ((min((arr_0 [i_0 - 1] [i_1]), (max(-204, (arr_3 [i_0 - 1]))))))));
            arr_8 [i_0] [i_1] [i_0] = max(((((arr_5 [i_0] [i_0] [i_0 - 1]) && ((max(18446744073709551615, (-2147483647 - 1))))))), (((962754795 & var_9) * (((max(-32752, 29262)))))));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            arr_13 [i_0] [i_2] [i_2] = (arr_4 [i_0 - 2]);
            var_19 += 962754781;
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
        {
            arr_17 [i_3] = (max(32752, (arr_5 [i_0] [i_0] [i_0 - 1])));
            var_20 = (max(var_20, ((max(3742448651, ((max(2899, 205))))))));
            arr_18 [i_3] [i_3] = (max((((arr_1 [i_0 - 1] [i_0 - 2]) ? 21110 : (arr_1 [i_0] [i_0 - 1]))), ((-((-1015166653 ? var_14 : (arr_10 [i_0] [i_3] [i_3])))))));
            /* LoopNest 2 */
            for (int i_4 = 4; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        var_21 = var_14;
                        arr_27 [i_4] [i_0 - 2] [i_3] [i_3] [10] = ((max(11605723552971892964, (-2147483647 - 1))));
                        arr_28 [i_3] = ((!((max(2226606109, var_7)))));
                    }
                }
            }
            arr_29 [i_3] [2] [i_0] = -4294967295;
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 22;i_8 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            arr_43 [10] [i_9] [i_7 - 1] [i_7 - 1] [i_7] = ((var_6 ? var_10 : var_4));
                            arr_44 [i_0] [i_8] [23] [16] [i_7] = (3948518664119876084 & -962754796);
                            var_22 = (max(var_22, (1239392829 <= 4159432104610756972)));
                            var_23 -= (((4 ? (arr_24 [i_0] [i_6] [i_0] [i_6] [i_0]) : 6841020520737658652)));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            var_24 = (arr_19 [i_0] [i_7] [i_7]);
                            arr_47 [i_0] [i_7] = (((arr_31 [i_7 - 1]) ^ 0));
                            arr_48 [i_7] [i_6] [i_10] [14] = var_2;
                            arr_49 [i_7] [i_6] [i_7 - 1] [i_8 + 2] [2] [i_7 - 1] [5] = (arr_24 [i_0] [i_6] [i_0] [i_7] [i_10]);
                        }
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            arr_52 [i_0] [i_7] [i_7 - 1] [i_7] [i_8] [i_7] [i_11] = 2147483647;
                            arr_53 [i_0] [i_6] [i_7 - 1] [i_8] [i_7] = var_15;
                            arr_54 [i_6] [1] [i_6] [i_6] [i_7 - 1] [i_8 + 2] [i_7 - 1] |= (max(2899, -2006322415));
                            arr_55 [i_7] [i_7] [i_7] [i_8 - 1] [i_11] = var_13;
                        }
                        arr_56 [16] [i_0] [i_7] [16] [i_7] [i_8 - 1] = ((-15705 ? 2172234373 : 15685));
                    }
                }
            }
        }
        var_25 = (((max(((11605723552971892996 ? 8 : 19979)), 993501216))) ? 763983705 : (~1));
        var_26 = (max(var_26, 205));
    }
    var_27 *= (max((max((var_3 ^ 4294967287), var_6)), var_0));
    var_28 = ((((max(((max(-15705, 32767))), (var_14 % var_13)))) <= ((15688 ? (~32767) : 11605723552971892964))));
    #pragma endscop
}
