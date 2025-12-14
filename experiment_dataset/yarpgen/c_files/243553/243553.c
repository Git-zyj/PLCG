/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_17 |= (min(((var_0 ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 3]))), var_7));
        var_18 = (min(var_18, (((!((max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))))))));
        var_19 = (min(var_19, (arr_0 [i_0])));
        var_20 = (min(var_20, (min(((((max(var_0, var_12))) ? var_16 : (arr_1 [i_0 + 3] [i_0 + 1]))), ((((arr_0 [i_0]) ? (((arr_1 [i_0 + 3] [i_0]) ? var_12 : var_1)) : (((arr_1 [i_0] [i_0]) ? var_13 : var_9)))))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_21 = (min(var_21, (((var_13 ? var_4 : (((((arr_7 [i_1] [i_1] [i_1]) < var_8)))))))));
            var_22 = (min(var_22, (((+(((-2147483647 - 1) ^ 2147483647)))))));
            var_23 = ((var_0 | (arr_3 [i_1])));
            var_24 = (arr_4 [i_1] [i_2] [i_2]);
        }
        arr_8 [i_1] = min(1, var_3);
        var_25 = (max((!2147483647), ((232 ? ((1 ? 60581 : 2147483647)) : 1968727568))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_26 = var_6;
                    var_27 -= (((arr_5 [i_3 + 1]) << ((((~(arr_3 [i_1]))) - 3655785988))));
                }
            }
        }

        for (int i_5 = 1; i_5 < 24;i_5 += 1)
        {
            var_28 = ((!((min((max(var_12, 1968727568)), var_4)))));
            arr_18 [i_1] [i_1] = (+(((arr_17 [i_1] [i_1]) ? 229 : (arr_12 [i_5 - 1] [9]))));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_29 = (min(((((arr_13 [i_1] [i_1] [i_1] [i_1]) - var_12))), (arr_20 [i_1])));
            arr_22 [i_1] = (arr_6 [i_6]);
            arr_23 [i_1] = ((~(min(var_15, (arr_3 [i_1])))));
        }
        for (int i_7 = 1; i_7 < 21;i_7 += 1)
        {
            var_30 = ((((min((~var_14), (232 / var_5)))) || ((((!var_11) ? (~var_6) : var_4)))));
            var_31 *= (--32765);
            arr_26 [1] = ((((min(-2147483627, -14498))) ? (0 || -14483) : ((((max((arr_24 [i_1] [i_1] [i_1]), var_12))) ? (4898065470963740870 | var_4) : var_11))));
            var_32 = (((((var_8 ? (arr_11 [5] [5] [5]) : (arr_12 [i_1] [15])))) ? ((min((arr_19 [i_7 + 4]), (arr_19 [i_7 + 3])))) : (min((var_7 * 270017134), (arr_21 [i_7 + 4] [i_7 + 1] [i_7 - 1])))));
            arr_27 [i_7 + 1] [i_7 + 2] &= arr_19 [i_1];
        }
    }
    var_33 = (((!var_0) ? var_4 : (max((min(13746, 3670016)), (!var_3)))));
    #pragma endscop
}
