/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;

    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_20 = (max(var_20, (((-(~var_18))))));

            for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
            {
                arr_9 [i_2] = -var_16;
                arr_10 [i_2] [i_2] = (arr_0 [i_1]);
                var_21 = (((arr_0 [i_0 + 2]) ? var_8 : (arr_3 [i_0 - 1] [i_0 + 2])));
                var_22 ^= (-89 & var_7);
            }
            for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
            {
                arr_14 [i_0] [i_1] [i_3] = 9255016095747885842;
                var_23 = ((-var_14 ? (arr_1 [i_0 + 2] [i_0 + 1]) : 123));
            }
            arr_15 [i_0] [i_1] = -255;
            arr_16 [i_1] [i_0] = ((((13 ? (arr_8 [i_0 + 1] [i_0 + 1]) : var_2)) & (arr_11 [i_0 - 1] [i_0 + 1] [18])));
        }
        arr_17 [15] = ((~((min(((max(1, 112))), (max(var_4, 98)))))));
    }
    for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_24 = (-(max(-2018157351, 2)));
        arr_22 [i_4] = (31 - -1923524929);

        for (int i_5 = 3; i_5 < 17;i_5 += 1) /* same iter space */
        {
            var_25 = (((arr_21 [i_4 + 1]) && (((-((max((arr_20 [i_4]), -83))))))));
            arr_26 [i_4] = (((((min(-1923524901, -112)) + 2147483647)) >> 1));
        }
        /* vectorizable */
        for (int i_6 = 3; i_6 < 17;i_6 += 1) /* same iter space */
        {
            arr_30 [i_6] [i_4] [i_6 + 3] = (~1);
            var_26 = ((2147483647 ? -113 : (arr_5 [i_4 + 2])));
            arr_31 [i_4] [i_6] [i_4] = (arr_18 [i_4 + 2]);
        }
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            arr_34 [i_4] [12] = -6967146003624445628;
            var_27 = (min(73, (((arr_12 [i_4] [i_4] [i_4] [i_4 - 1]) | (1 << 15)))));
            arr_35 [i_4] [i_4] [9] = (min((~6346875475797818132), (((-(arr_12 [i_7] [i_4 + 2] [i_7] [i_4 + 1]))))));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 17;i_10 += 1)
                    {
                        {
                            arr_46 [i_4] [i_4] [13] [i_4] [i_4] = ((((min(32760, (((arr_8 [i_4] [i_4]) ? var_11 : var_7))))) ? -104 : (min(((-2018157349 + (arr_12 [i_4] [i_7] [i_4] [i_10 + 2]))), 0))));
                            arr_47 [i_4] [i_7] [i_7] = ((!((min((arr_45 [i_4] [i_4 + 1] [i_10 + 1] [i_4] [i_4] [i_10]), (arr_12 [18] [i_4 + 1] [i_10 + 1] [i_10]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
