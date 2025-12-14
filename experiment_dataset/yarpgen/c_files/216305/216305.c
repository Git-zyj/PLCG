/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_14 = var_8;
            var_15 += 0;
            var_16 = (((arr_1 [i_0]) ? (((!(arr_3 [i_0] [15])))) : (max((arr_4 [i_0]), (arr_1 [i_1])))));
            arr_5 [i_0] = var_3;
        }

        /* vectorizable */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_14 [i_0] [i_3 + 3] [i_2] [i_0] = ((-((~(arr_9 [i_0] [i_0] [i_3] [i_4])))));
                        var_17 = (arr_8 [i_3 + 2]);
                    }
                }
            }
            arr_15 [i_0] [i_0] = 140;
            var_18 = (arr_6 [1]);
        }
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        {
                            arr_27 [i_0] [i_5] [i_0] [i_7] [i_7] [14] = ((+((var_7 << (((((-2147483647 - 1) + var_0)) + 2147483506))))));
                            var_19 = (!1533156004);
                        }
                    }
                }
            }
            arr_28 [i_0] = (((max((arr_8 [i_0]), (arr_8 [i_0]))) % (min((arr_8 [i_0]), 65024))));
        }
        for (int i_9 = 1; i_9 < 14;i_9 += 1)
        {
            arr_32 [i_0] [i_9] [i_0] = ((2188168770 ? 520633703 : 95));
            arr_33 [i_0] [i_0] = (!var_5);
            arr_34 [i_0] [5] [i_0] = (!-1533156004);
        }
        /* vectorizable */
        for (int i_10 = 1; i_10 < 14;i_10 += 1)
        {
            var_20 = (((arr_26 [i_0] [i_10 - 1]) ? var_10 : ((var_6 << (9223372036854775807 - 9223372036854775807)))));
            arr_37 [i_0] = (var_2 ? (((var_5 ? 255 : 4248551942))) : (7 & 0));
        }
        var_21 ^= (((((!((max(var_0, 2147483629)))))) >> (((((~var_4) ? 1533156004 : ((max(var_10, var_12))))) - 1533155994))));
        var_22 = ((arr_21 [i_0] [i_0] [i_0] [i_0]) ? (var_11 >= 1) : (((!(((1533156020 ? var_5 : (arr_2 [i_0]))))))));
        var_23 = (max(var_23, -var_9));
    }
    var_24 = (1533156008 == 0);
    var_25 ^= (min(-15, 65535));
    #pragma endscop
}
