/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-((var_14 ? ((var_9 ? var_7 : var_3)) : var_10))));
    var_16 = (min(-var_8, (((var_8 && (((var_9 ? var_14 : var_7))))))));
    var_17 = (max(var_17, var_8));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 19;i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_18 += ((+(min((arr_1 [i_1 - 3] [i_4 - 2]), var_9))));
                            var_19 = (((arr_1 [i_1 - 3] [i_4 - 2]) ? (min((!11412291280118352337), ((var_0 ? 1 : -669853810)))) : (!4215849966781155006)));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        var_20 = (min((((((min((arr_9 [i_0] [6] [3] [6]), (arr_14 [i_6] [i_5] [i_0] [i_0])))) ? (!var_14) : var_14))), (((var_5 || var_10) - var_11))));
                        arr_21 [1] [i_1] [i_5] [i_6] = ((((((var_2 + 201326592) * (((var_11 ? var_4 : var_4)))))) ? ((-4188634204339585842 - (arr_13 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]))) : (((var_3 ? -4080 : (((-9223372036854775807 - 1) ? 3185199343 : 4080)))))));

                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_21 = (min(var_21, 15890094821525538644));
                            arr_25 [i_5] = (min((max(var_5, (min(var_11, 12523)))), (((var_10 ? var_13 : (arr_14 [i_0] [i_0] [i_5 - 1] [i_6]))))));
                            var_22 = ((var_8 / (((((var_10 ? (arr_24 [i_5] [i_6]) : var_14))) ? (max((arr_22 [i_5] [12] [i_5 - 1] [i_6] [12]), var_10)) : (1 / 60782)))));
                            arr_26 [i_0] [i_6] [i_5 - 1] [i_6] [i_7] &= min((((~var_1) ? ((min(var_14, 164177839263728776))) : var_12)), (((53012 / (min(var_2, var_1))))));
                            var_23 = (max((arr_2 [i_1 + 1]), (min(var_8, (arr_5 [i_7])))));
                        }
                        arr_27 [i_0] [2] [i_1 - 2] [i_5 - 1] [i_5 - 1] [i_5] = (((((1601949172 ? (arr_17 [i_1 - 3] [i_1 - 2] [i_1 + 1]) : var_12))) ? (arr_15 [i_1 - 2] [i_1 - 1] [i_5] [i_1 - 1] [i_1 - 1]) : ((var_11 + (arr_15 [i_1 - 1] [i_1 - 1] [i_5] [i_1] [i_1 - 1])))));
                        var_24 = (((((var_5 ? (min(var_1, var_10)) : (((~(arr_23 [i_5] [i_0] [i_1 - 2] [i_0] [13]))))))) ? var_0 : var_0));
                    }
                }
            }
        }
        for (int i_8 = 3; i_8 < 19;i_8 += 1) /* same iter space */
        {
            arr_31 [i_0] [i_8] [i_8 - 3] = (((((arr_3 [i_8 - 3]) & 131839248)) + (((1601949185 & var_0) ? (~4076) : ((var_6 ? -1601949184 : var_5))))));
            arr_32 [i_8] = (arr_30 [i_8 - 2] [i_8]);
        }
        var_25 = (max(var_25, ((max((arr_28 [i_0] [i_0]), (((!((max(var_1, var_14)))))))))));
    }
    var_26 = (((840883513 << (var_14 >= 4))));
    #pragma endscop
}
