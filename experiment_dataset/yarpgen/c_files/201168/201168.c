/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 |= (((arr_1 [6]) ? (~-2141076948) : (245 ^ -90)));
                    var_14 = ((-((max((arr_4 [i_0] [i_0] [i_0 - 3]), (arr_4 [i_2] [i_0] [i_0 - 2]))))));
                    var_15 ^= (max(((min((arr_6 [i_2 + 1] [i_2] [i_2 + 2]), (arr_6 [i_2 + 1] [i_2] [7])))), 89));
                    var_16 = (min((arr_0 [i_1]), (((!((min(-90, var_3))))))));
                }
            }
        }
        var_17 ^= ((((((-63 - 62) ? (80 | 81) : ((var_1 ? var_10 : var_0))))) ? var_0 : ((var_12 / (arr_1 [4])))));
        var_18 *= (((((var_0 >> (-var_1 - 29098)))) - (min((var_4 * var_9), var_3))));
        var_19 = (((arr_5 [i_0 - 3] [i_0 - 3] [i_0] [i_0]) == (((((min(var_7, (arr_2 [i_0 - 2])))) ? ((-90 ? var_12 : var_12)) : (arr_1 [i_0]))))));
    }
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        var_20 |= ((((max(((var_3 ? var_5 : -63)), ((min(var_12, 80)))))) ? (arr_3 [i_3] [4]) : 94));
        var_21 = (arr_10 [i_3 + 2]);
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    arr_18 [i_3] [i_4] = (min((((arr_15 [i_4] [i_3 + 2] [i_3 + 1] [i_4]) ? (arr_15 [i_4] [i_3] [i_3 - 1] [i_3]) : (arr_15 [i_4] [i_3] [i_3 + 1] [i_4]))), (min(((-63 ? 81 : -90)), 86))));
                    arr_19 [i_3] [i_3] [i_4] [i_3] = ((var_4 ? (~90) : (arr_8 [i_3 + 2] [i_4 - 2])));
                    arr_20 [i_3] [i_4] [i_5] = (min((arr_3 [i_3 + 2] [i_4]), (((arr_3 [i_3 + 3] [i_4]) ? var_7 : (arr_3 [i_3 + 2] [i_4])))));

                    for (int i_6 = 4; i_6 < 13;i_6 += 1)
                    {
                        var_22 = (!var_4);
                        arr_24 [i_3] [i_3] [i_4] [i_6] = -81;
                        var_23 = (arr_15 [i_4] [i_6] [i_5] [i_4]);
                        var_24 |= ((!((min((!var_7), (max(var_5, var_6)))))));
                        arr_25 [i_4] [i_4] [i_5] [i_6] = ((90 << ((((((-86 ? var_6 : 73)) >> (59 - 54))) - 82025629))));
                    }
                    arr_26 [i_4] = ((((arr_5 [i_3 + 1] [i_3 + 3] [i_3 + 2] [i_3 + 3]) ? (arr_1 [i_4]) : (arr_1 [i_4]))));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_25 = ((((max(((62 ? -80 : (arr_6 [i_7] [i_7] [i_7]))), -73))) ? (max(((-53 ? var_4 : var_0)), ((-81 ? var_7 : 89)))) : ((max((((arr_6 [i_7] [i_7] [i_7]) ? var_1 : 71)), (~var_3))))));

        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            arr_32 [i_7] [i_8] = (((((59 ? -81 : (((arr_30 [i_8]) - -86))))) ? (((((-(arr_30 [i_7])))) - (var_6 + var_0))) : (((arr_0 [i_7]) ? (arr_5 [i_7] [i_8] [i_8] [i_7]) : (arr_4 [i_7] [i_7] [i_7])))));
            var_26 = (arr_5 [i_7] [i_7] [i_7] [i_8]);
        }
        for (int i_9 = 4; i_9 < 15;i_9 += 1)
        {
            arr_35 [i_9] = -94;
            var_27 = (arr_4 [i_7] [i_9] [i_7]);
            var_28 = (var_2 ^ var_0);
            var_29 = (min(((73 ? (arr_29 [i_9 - 4] [12] [4]) : (arr_29 [i_9 - 4] [6] [i_9]))), ((((arr_29 [i_9 - 4] [i_9] [i_9 - 4]) && var_1)))));
            var_30 ^= ((94 ? -86 : -103));
        }
        var_31 = var_1;
    }
    var_32 = (((((min((max(var_2, -63)), ((min(106, 62))))))) <= var_11));
    var_33 |= ((var_2 ? -103 : ((60 ? var_2 : 81))));
    var_34 = -79;
    #pragma endscop
}
