/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = ((!(((28515 - (max(-42, -2943636074831000525)))))));
                arr_6 [i_1] [13] [i_0] |= (min((min(var_12, -28500)), ((min(-59, (-2118141027 != -2118141027))))));
                var_15 = (!3115857254);
                var_16 -= (!1);

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_17 ^= ((3115857252 * ((((min((arr_1 [i_0]), (arr_2 [i_0]))) + ((-2118141027 ? (arr_4 [i_0] [i_0]) : var_10)))))));
                    var_18 = (max(0, 28515));
                    var_19 = 195836842;
                    var_20 = (18444775462825172105 / 127);

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        arr_12 [i_0 + 3] [i_3] [i_1] [i_2] = ((-1 ? -2118141005 : var_3));
                        var_21 = (min(var_21, ((((((1 >= -1035858168332202032) < var_11)) && (((((((((arr_2 [i_1]) + 2147483647)) << (18792 - 18792)))) ? ((((!(arr_9 [i_0] [i_1]))))) : 968465766132321146))))))));
                        var_22 -= ((((~((13277507231187190021 & (arr_2 [i_0]))))) ^ var_13));
                    }
                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        var_23 *= (min((((arr_14 [i_0] [i_0] [i_0] [i_0 + 3]) - (arr_7 [i_1] [i_1] [i_1 - 1] [i_1]))), var_10));
                        var_24 = ((((min(-3296264713837933470, (((var_14 ? -90809240 : (arr_1 [i_2]))))))) ? (arr_8 [i_4] [i_1] [i_0]) : (max(var_5, (arr_14 [7] [i_2] [i_1 - 1] [i_0 + 3])))));
                        arr_15 [15] [17] [i_0] [i_0] [1] [8] = var_1;
                        arr_16 [i_0] [i_1] [i_2] [i_4] = (1 ? ((18444775462825172105 - ((((arr_0 [i_0]) / var_7))))) : ((((arr_4 [i_0 + 1] [i_1 - 1]) ? (max(var_4, (arr_7 [i_0] [i_1] [i_0] [i_1]))) : (min(var_5, (arr_8 [i_4] [i_1] [i_0 + 3])))))));
                    }
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        var_25 -= (2147483647 == var_0);
                        var_26 *= ((357138744 != ((((min(113, var_7)))))));
                        var_27 = (min(((((arr_4 [i_5 + 1] [i_2]) > var_4))), (arr_9 [i_0 - 3] [i_0 + 3])));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_28 &= (((-18785 || 243552421) && (var_6 && var_11)));
                        arr_23 [i_0] [i_0] [i_1] [i_0] [i_6] = var_13;
                        arr_24 [i_0 - 3] [i_1 - 1] [i_1 - 1] [i_2] [i_1 - 1] = (((((arr_2 [i_0 + 2]) + 2147483647)) >> (((arr_2 [i_6]) + 1316031611))));
                    }
                }
            }
        }
    }
    var_29 = (min(var_29, var_10));
    #pragma endscop
}
