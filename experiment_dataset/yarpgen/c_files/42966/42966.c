/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_4 ? (((((19959 ? 64 : -1323))) & (max(4282857672, var_10)))) : ((-(var_17 | var_3)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 *= (((5037 * var_4) / (((arr_1 [i_0] [i_0]) / var_3))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_20 = ((((-(23460 | var_15))) <= var_14));
                        arr_14 [i_3] [i_1] [i_1] [i_0] = (max(((max(43777, var_12))), ((max((var_17 < var_16), (arr_9 [i_1] [i_1] [i_1] [i_3]))))));
                        var_21 = 51696;
                    }
                }
            }
        }

        for (int i_4 = 2; i_4 < 7;i_4 += 1)
        {
            var_22 = ((((min(4191745775275759687, var_9))) ? (arr_0 [i_4 + 1]) : ((((arr_0 [i_4 + 1]) && (arr_0 [i_4 + 1]))))));
            var_23 += (((((6627968957039694204 % var_8) - var_1)) == ((((!((max(0, (arr_5 [i_0] [i_0] [i_0]))))))))));
        }
        var_24 = arr_5 [i_0] [i_0] [i_0];
    }
    for (int i_5 = 4; i_5 < 6;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_25 = ((((max(var_3, var_8))) + (max(16253232842654645767, (arr_15 [i_6])))));
            var_26 = (((((-var_3 ? var_3 : -23624))) ? ((((92 ? (arr_15 [i_6]) : 43)) + var_10)) : (((!(arr_5 [i_5 + 4] [i_5 - 1] [i_5 - 3]))))));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            arr_26 [i_5] = (max((!-1095230700), (((arr_1 [i_5 - 3] [i_5 + 4]) & 1))));
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 7;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    {
                        arr_33 [i_5] [9] [i_8 - 2] [i_9] = 248;
                        var_27 = (((((((var_12 ? 11114 : 251658240))) + (var_8 + var_16))) - 227));
                        arr_34 [i_5] [i_5] [i_8 + 3] [9] = (arr_2 [i_5 - 3] [2]);
                        var_28 = (max(var_28, ((4043309069 ? (((!(((1095230708 ? 20 : -72)))))) : var_1))));
                    }
                }
            }
            var_29 = (((max(4251236355, -13089)) % (((var_13 ? -32763 : var_10)))));
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_30 = (((((!(135 == 7)))) >> (((((arr_35 [i_5]) ? (65535 / 87) : ((((arr_2 [6] [8]) || -1313701529366828961))))) - 723))));
            var_31 = ((((((((1 ? 55454532 : 2147483647))) ? ((max(0, 1))) : (6455 + -32765)))) + (min(((var_12 ? var_14 : var_15)), (((var_8 ? -19959 : 107)))))));
        }
        var_32 = (arr_24 [i_5] [i_5 - 1]);
        var_33 = 2147483647;
    }
    #pragma endscop
}
