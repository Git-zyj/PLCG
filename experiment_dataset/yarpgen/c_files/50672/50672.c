/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((((arr_1 [i_0 - 1]) ? -15944 : (arr_0 [i_0 + 4] [i_0 + 2]))));
        arr_3 [11] [i_0 + 4] |= (min((max(1016311936, -15956)), (((((min((arr_1 [i_0 + 4]), (arr_0 [1] [i_0])))) ? ((0 ? (arr_1 [i_0]) : (arr_1 [i_0]))) : (((!(arr_1 [i_0])))))))));
        arr_4 [i_0] = ((((((4294967272 || (arr_1 [i_0 - 1])) && (arr_0 [i_0 - 2] [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        arr_15 [8] [i_1] [0] [9] = -68;
                        arr_16 [i_1] = var_8;
                        arr_17 [i_1] [i_2 - 1] [i_1] = (arr_9 [7] [7] [18]);
                        arr_18 [i_1] = (i_1 % 2 == zero) ? ((((arr_12 [i_1] [i_1] [i_4]) << (((arr_12 [i_1] [i_4] [i_3]) - 187))))) : ((((arr_12 [i_1] [i_1] [i_4]) << (((((arr_12 [i_1] [i_4] [i_3]) - 187)) + 162)))));
                    }
                }
            }
        }
        arr_19 [i_1] = (((arr_10 [i_1] [i_1] [15] [i_1 - 1]) ? (((var_8 ? (arr_7 [i_1]) : (arr_6 [1])))) : (18367809358018214665 | 0)));
        arr_20 [i_1] [i_1] = var_13;
    }
    for (int i_5 = 2; i_5 < 20;i_5 += 1) /* same iter space */
    {
        var_17 = ((((~(arr_22 [i_5 - 2])))) + (~1099075313));
        var_18 = (((15955 ^ 64) || ((min(((((arr_10 [i_5 + 2] [i_5] [i_5 + 2] [i_5]) ? 124 : 15944))), (~11251185786068454086))))));
        var_19 = ((+(min((arr_13 [i_5 + 1]), (arr_13 [i_5 + 2])))));

        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_20 = (((((var_5 ? ((((arr_7 [i_5 + 1]) ? -14044 : 108))) : (arr_24 [i_5 - 2])))) ? ((((~0) || ((min(-15942, 2076111200)))))) : ((((!2699848198333005687) || (((var_2 ? var_12 : 2699848198333005687))))))));
            var_21 = ((+(((arr_25 [i_5] [i_5 - 1]) ? (arr_14 [i_5 + 2] [i_5 + 2]) : (arr_14 [i_5 + 1] [i_5 - 2])))));
        }
        for (int i_7 = 3; i_7 < 18;i_7 += 1)
        {
            var_22 = ((((var_0 ? var_9 : (-15923 - var_15)))) ? (((arr_27 [i_7 + 3]) ? 177 : (arr_26 [i_7 + 1]))) : (arr_22 [i_5 - 2]));
            var_23 = (min(((-(arr_27 [i_7 + 1]))), (((-((min(-32763, 15944))))))));
            var_24 = (+(((arr_7 [i_5 - 1]) ? (arr_7 [i_5 - 1]) : (arr_7 [i_5 + 2]))));
        }
    }
    var_25 = (((((-var_0 ? 1420850294691886591 : var_2))) ? (((!(var_15 * var_4)))) : -71));
    #pragma endscop
}
