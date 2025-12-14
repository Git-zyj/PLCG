/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (9620636896888688051 ? ((max(var_2, (min(7195658052912051905, var_8))))) : (max(3221225472, -19401)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((+(((30720 <= var_9) ? (arr_4 [i_0] [i_0]) : (arr_2 [i_0 + 1] [i_0 + 1])))));
                var_16 = (max(var_16, (((1920 ? (arr_0 [i_1] [i_0 - 1]) : (((arr_2 [i_1] [i_0]) ? 8826107176820863568 : (arr_2 [i_1] [i_0 - 1]))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    var_17 = ((-19396 ? 1 : (arr_2 [i_1] [i_0])));
                    var_18 = (((-88 ? var_1 : 5552)));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                        {
                            var_19 = ((4194304 ? (arr_9 [i_1]) : (var_13 | var_0)));
                            arr_14 [i_4] [i_4] [i_0] [i_3] [i_0] [i_1] [i_0] = (arr_13 [8] [13] [i_2] [i_0] [i_0]);
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_5] [i_0] [i_0] [i_0] [i_1] [i_0] = (((arr_4 [i_0 - 1] [i_0 - 1]) ? 61277 : (arr_4 [i_5] [i_0 + 1])));
                            var_20 = ((+((((arr_4 [i_3] [i_2]) < (arr_8 [i_1] [i_3] [i_1]))))));
                        }

                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_21 = ((var_0 >> ((((18446744073709551615 ? 961204367 : var_0)) - 961204350))));
                            var_22 = 32;
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                {
                    var_23 = ((min((arr_2 [i_0 - 1] [i_0 - 2]), (arr_2 [i_0 + 1] [i_0 - 1]))));
                    var_24 = ((((min((((arr_8 [i_7] [i_0] [i_0]) ^ (arr_9 [i_0]))), (arr_5 [i_0] [i_0])))) | (arr_3 [i_0] [i_0])));
                    arr_22 [i_0] [i_0] = ((+((max(((((arr_15 [i_7] [i_7] [i_1] [i_1] [i_0 - 1]) >= -88))), (arr_9 [i_1]))))));
                    var_25 = (((arr_0 [i_0 - 1] [i_0]) >> ((((114 | (arr_11 [i_7] [7] [13] [i_0]))) - 8199629719821210838))));
                }
                for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                {
                    var_26 = ((28574 ? (min(((((arr_9 [i_8]) <= 274877890560))), (((arr_16 [i_1] [i_1] [i_0 - 1] [i_1] [i_0 - 1]) ? var_9 : var_3)))) : -916389574));
                    var_27 = ((((-63 ? (var_10 >> var_6) : var_9)) - (arr_7 [i_1])));
                    var_28 = (min(var_28, 1));
                }
            }
        }
    }
    #pragma endscop
}
