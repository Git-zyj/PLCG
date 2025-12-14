/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        var_19 = (min(var_19, (arr_6 [i_0] [i_0] [i_1 + 1] [i_0] [i_2] [i_1 + 1])));
                        var_20 = (arr_2 [i_0 - 2] [i_0 - 2] [i_2]);
                        var_21 = (((13424 + 65528) ? (arr_4 [i_2] [i_2 - 1] [i_2 - 1] [i_2]) : (((var_8 ? 12748 : (arr_0 [i_0 - 1]))))));
                        arr_8 [i_2] = (arr_0 [i_0]);
                    }
                    for (int i_4 = 2; i_4 < 15;i_4 += 1)
                    {
                        arr_11 [i_2] [14] [i_2] [14] [i_4] = var_15;
                        arr_12 [i_2] = -24;

                        for (int i_5 = 3; i_5 < 15;i_5 += 1)
                        {
                            arr_15 [i_2] [i_1] = (i_2 % 2 == 0) ? (((var_0 << ((((-(arr_4 [15] [i_2] [i_0 + 1] [i_2]))) + 60908))))) : (((var_0 << ((((((-(arr_4 [15] [i_2] [i_0 + 1] [i_2]))) + 60908)) - 19911)))));
                            var_22 &= (arr_10 [i_0 - 3] [2] [i_0] [i_0] [i_0 - 3] [i_0 - 3]);
                            var_23 = ((max(var_12, (arr_10 [i_1] [i_1] [i_2] [i_1 - 2] [i_1 + 1] [i_1]))));
                        }
                        var_24 = (min(var_24, (((!((max(((min(-34, var_7))), (arr_13 [i_0] [i_0 - 1] [i_0 - 3] [i_1 - 3] [i_0] [i_0] [i_2 + 1])))))))));
                        var_25 = (arr_14 [i_0 - 4] [i_1 - 3] [i_1] [i_1] [i_2] [i_4] [i_2]);
                    }
                    arr_16 [i_0] [4] [i_2] [i_1] = ((-(max(20809, (min(-72, -834966271))))));
                }
            }
        }
    }
    var_26 = 127;

    for (int i_6 = 4; i_6 < 24;i_6 += 1)
    {
        var_27 = (((((max((arr_19 [i_6 - 1]), 44730)))) ? ((max((arr_17 [i_6] [i_6]), (arr_17 [i_6 - 3] [i_6 - 3])))) : (var_5 > 44720)));
        var_28 *= (!-5);
    }
    var_29 ^= (-2055639269 > 33);

    for (int i_7 = 3; i_7 < 21;i_7 += 1)
    {
        arr_24 [i_7] [i_7] = (((((255 ? (((max((arr_18 [18]), 28299)))) : ((var_17 ? var_10 : var_11))))) ? ((((((-1344013214304130870 + 9223372036854775807) << (73 - 73)))) ? ((34225520640 % (arr_22 [i_7]))) : (~var_2))) : (min((var_10 < 71), (max(var_4, (arr_21 [i_7])))))));
        arr_25 [i_7] = (-9223372036854775807 - 1);
    }
    #pragma endscop
}
