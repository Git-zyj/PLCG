/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= 4874438431010287930;
    var_13 *= (max(((-(min(-75, 255)))), (((!(-657570568 != var_7))))));
    var_14 = ((var_3 >> (32767 || 4294967295)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_2] = (max(((((-2046053048 ? var_4 : (arr_6 [i_0 + 2] [i_0] [i_0] [i_0]))))), (max(46928, 10687417731614847916))));
                    var_15 -= (min((((((var_7 ? -1 : var_8))) / -7759326342094703700)), 17545680370424001862));
                    arr_9 [i_0] = 7759326342094703700;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 -= ((((((arr_3 [i_0 - 3] [i_0 - 3] [i_0 - 1]) || (((958748084 ? var_2 : (arr_5 [i_2])))))))) * (min((max((arr_10 [i_4]), var_2)), ((min(7672, 0))))));
                                var_17 -= -0;
                                arr_16 [i_4] [i_3] [i_0] [i_2] [i_0] [i_0] [i_0] = ((~(((arr_12 [i_1] [i_2]) - (arr_6 [i_0 - 3] [i_0 - 2] [i_0] [i_0 + 1])))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 15647946341862971499;
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 11;i_5 += 1) /* same iter space */
                    {
                        arr_20 [i_0] = var_2;
                        arr_21 [i_5] [i_0] [i_0] [i_0 - 1] = 17266507868705001319;
                        var_18 = (((((max(56, 11435)))) != (((arr_13 [i_0 - 3] [i_5 + 3] [i_2] [i_0] [i_0 + 2]) | (arr_14 [i_5 - 2] [i_0] [i_2] [i_1] [i_0] [i_0])))));
                        arr_22 [i_0] [i_1] [i_0 + 2] = (~var_6);
                    }
                    for (int i_6 = 2; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        var_19 = -24703;
                        arr_25 [i_0] [i_1] [i_0] = ((((((min(var_6, var_7)))) - ((var_2 ? (arr_1 [i_2] [i_1]) : (arr_2 [i_0] [i_0]))))));
                    }
                    for (int i_7 = 2; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        var_20 -= ((4294967295 ? (~var_7) : (arr_29 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_2])));
                        var_21 = (min((((!2564106837) ? (max(17737374828044460000, (arr_7 [i_0]))) : (arr_14 [i_7] [i_0] [i_2] [i_1] [i_0] [i_0]))), ((((arr_4 [i_0] [i_0] [i_7]) != var_7)))));
                        var_22 = (min(((max(var_6, (var_8 < var_11)))), ((~(arr_19 [i_0] [i_2] [i_1] [i_0])))));
                        var_23 -= (((-11435 < 1) > (((arr_12 [i_0 - 2] [i_0]) ? 255 : (arr_12 [i_0 + 1] [i_1])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
