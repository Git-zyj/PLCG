/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((var_11 / var_8) / var_11));
    var_13 = var_10;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_14 = (((min(((max((arr_0 [i_0] [i_1]), 128))), 2539183927)) == (arr_3 [i_0] [i_0] [i_1])));
            var_15 = var_1;
            var_16 = (max(var_16, (((((min((arr_0 [i_0] [i_1]), (arr_0 [i_1] [i_0])))) < var_4)))));
        }
        var_17 = (min(var_17, (+-1)));
        var_18 = (min(var_18, ((min((((-3 ? ((min(var_10, (arr_3 [i_0] [i_0] [i_0])))) : (~var_8)))), ((~((var_3 ? 1755783369 : (arr_1 [i_0]))))))))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_19 = (arr_5 [i_2] [i_2]);

        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_20 = (arr_7 [i_2] [i_2] [i_3]);
            var_21 = (min(var_21, (arr_6 [i_3])));
            var_22 += ((var_1 ? ((min(var_7, 60822))) : ((((arr_8 [i_3] [i_2]) < 2539183927)))));
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
        {
            var_23 -= (arr_12 [i_2] [i_4] [i_4]);
            var_24 = ((-(arr_10 [i_2] [i_4])));
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {

                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    var_25 += (max(((-(arr_8 [i_5] [i_6]))), (((!22440) ? (arr_11 [i_6 - 1]) : (arr_18 [i_2] [i_5] [i_6 + 2] [i_2])))));
                    var_26 = (~(arr_14 [i_6 - 1] [i_6 - 1] [i_6]));
                }
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    var_27 |= var_5;
                    var_28 = (max(var_28, var_2));
                    var_29 = (i_6 % 2 == zero) ? (((((((~(arr_16 [i_6] [i_5] [i_6 - 1]))) << (var_3 - 186))) >> ((((~((9 ? 3 : (arr_4 [i_6]))))) - 4294967263))))) : (((((((((~(arr_16 [i_6] [i_5] [i_6 - 1]))) + 2147483647)) << (((var_3 - 186) - 1)))) >> ((((~((9 ? 3 : (arr_4 [i_6]))))) - 4294967263)))));
                }
                var_30 = (min((((4294967295 / 60822) ? (min((arr_20 [i_6] [i_2]), (arr_22 [2] [6] [1] [4] [i_2]))) : (((min(30995, 1)))))), (~24513)));
            }
            for (int i_9 = 1; i_9 < 10;i_9 += 1)
            {
                var_31 = (arr_17 [i_2] [i_5] [i_2] [i_9]);
                /* LoopNest 2 */
                for (int i_10 = 3; i_10 < 8;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 11;i_11 += 1)
                    {
                        {
                            var_32 |= (((((arr_18 [i_11 - 1] [i_9 + 1] [i_9] [i_2]) - (arr_17 [i_11 - 1] [i_9 + 1] [i_2] [i_10]))) < ((((!102) ? (((arr_25 [i_5] [i_9] [i_10]) ? var_10 : 3706781480)) : 24513)))));
                            var_33 = ((-(((((4294967284 ? 32050 : 32050))) ? (arr_25 [5] [i_5] [i_2]) : ((((arr_27 [i_2] [i_5] [i_2] [i_10]) < var_5)))))));
                            var_34 = (min(var_34, ((max((arr_5 [i_5] [i_5]), 60822)))));
                        }
                    }
                }
                var_35 = (arr_20 [i_2] [i_2]);
            }
            var_36 = ((-((1 ? 1 : (arr_6 [i_2])))));
            var_37 = 40280;
        }
    }
    #pragma endscop
}
