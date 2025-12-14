/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_0 ? ((var_3 ? ((max(3475372335, var_1))) : ((16006794177425751220 ? 18446744073709551615 : 819594946)))) : var_5));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = (max(((((((arr_3 [i_0 + 2] [i_1]) ? var_6 : 4105084596378027447))) ? var_8 : (var_10 >= 18446744073709551603))), (min(((2439949896283800421 ? 3475372349 : 65535)), (~var_11)))));
                arr_4 [i_0] [i_0 + 3] [i_1] = ((+(((arr_1 [i_0] [i_1]) ? (min((arr_1 [i_0] [i_0]), (arr_3 [i_0 + 1] [i_0 + 2]))) : (((var_5 ? 222 : (arr_2 [i_0 + 1] [i_0] [i_0 + 1]))))))));
                var_17 = (((min(1125899898454016, 2439949896283800395))) + (~5026));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 12;i_3 += 1) /* same iter space */
                    {
                        var_18 = 10885267201638914426;
                        arr_10 [i_3] [i_0] [i_0] [i_0] [i_0] = var_8;
                    }
                    for (int i_4 = 1; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        var_19 = (4136949802 % -20525);
                        arr_13 [i_0] [i_0] [i_0] [i_4 + 1] = var_0;
                        arr_14 [i_0] [5] [12] [i_0] [i_0] = -4088;
                    }
                    for (int i_5 = 1; i_5 < 12;i_5 += 1) /* same iter space */
                    {
                        var_20 &= (((min(var_0, -1073479680)) / (var_7 < var_13)));
                        var_21 = (((max((((8191 != (arr_2 [i_0] [i_0] [i_2])))), (arr_3 [i_1] [i_1])))) ? ((var_6 ? ((18446744073709551615 ? (arr_12 [i_0] [i_0] [i_0] [i_0] [6]) : 17592185913344)) : (((var_5 << (((arr_2 [i_5] [i_0] [i_0 - 3]) - 234))))))) : (((17 % 15076514007329467124) + 28747)));

                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_22 = var_7;
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = (((var_6 | 63) <= (((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]) >> (123 - 84)))));
                            arr_21 [i_0] = ((-(max(18445618173811097599, 819594964))));
                            var_23 = (min(var_23, ((((((0 ? 0 : 7585436359571463008)) != (var_3 % 79)))))));
                            arr_22 [i_6] [i_0] [i_0] [i_0] [i_1] [i_0] = (arr_1 [i_0] [i_5 + 1]);
                        }
                    }
                    arr_23 [i_0] [i_1] [i_2] = (min(((~(arr_6 [i_0] [8] [5] [i_0]))), ((((arr_2 [i_0] [i_0] [i_0]) | var_13)))));
                }
            }
        }
    }

    for (int i_7 = 2; i_7 < 16;i_7 += 1)
    {
        arr_26 [i_7] = 555835549482478257;
        var_24 = (min(960, -102));
        arr_27 [5] [i_7 - 2] = (max((((((max(var_14, (arr_24 [i_7 + 1] [i_7 - 1])))) ? (arr_24 [i_7] [i_7 + 2]) : var_12))), ((-((var_10 / (arr_25 [i_7])))))));
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        var_25 *= (min((((25110 ? 28 : 115))), -2305843009213693952));
        var_26 = (min(var_26, (~97)));
        var_27 = 2305843009213693952;
    }
    #pragma endscop
}
