/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_11 = (max(var_11, 32767));
                        var_12 = ((-23605 ? var_10 : (arr_11 [i_3] [i_2 + 2] [i_2] [i_1])));
                        arr_14 [15] [i_0] [i_3] = ((((((arr_0 [i_0]) + var_7))) ? (arr_10 [i_0] [i_1] [i_0] [1] [i_2 + 2] [i_0]) : var_3));
                    }
                    var_13 -= (((arr_13 [i_0] [i_1] [i_2] [i_2] [i_2 + 1]) <= (-4296250782987435099 || 32767)));
                    var_14 = ((18446744073709551615 ? ((var_6 ? var_2 : var_2)) : var_5));
                }
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    var_15 = (min(((min(((0 ? -8434 : -23605)), 1230118998))), (min(var_9, (min(var_9, var_6))))));
                    arr_17 [i_0] = max(var_2, ((2147483647 ? (arr_9 [i_0] [i_4 + 1] [i_4 + 1]) : var_4)));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    arr_20 [i_0] [i_1] [i_1] [i_5] = var_8;
                    arr_21 [i_0] [i_1] [i_0] = (((var_2 <= var_10) % ((var_4 ? (arr_7 [3] [i_5 + 1]) : (arr_12 [i_0])))));
                    var_16 = (((arr_10 [i_0] [i_5] [i_0] [i_1] [i_0] [i_0]) || (((-52 ? 0 : -5635508485801442464)))));
                }
                arr_22 [i_0] [i_0] = 139742423;
                var_17 = var_5;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 15;i_7 += 1)
                    {
                        {
                            arr_30 [i_0] [i_0] [i_0] [i_7 - 3] = var_5;
                            var_18 -= (max((min(((var_1 ? (arr_24 [i_7] [16] [i_7] [i_7]) : (arr_23 [16] [i_1] [i_6]))), 0)), -var_7));
                            arr_31 [i_0] [4] [i_6] [i_0] = (((((min(-52, var_7)))) ? (!-var_9) : var_3));
                            var_19 = (max(var_19, (((((min((((arr_7 [i_0] [i_0]) % var_6)), var_3))) || var_10)))));
                        }
                    }
                }
                arr_32 [i_0] [i_0] = ((((min((max(var_3, 804869116)), (((arr_27 [1] [i_1]) ? var_3 : var_4))))) > (((((var_9 ? var_9 : (arr_8 [i_1])))) ? 1023 : ((-(arr_5 [i_0])))))));
            }
        }
    }
    var_20 += (max((((!((min(var_0, var_5)))))), var_0));
    var_21 = (max(((var_10 ? var_5 : ((0 ? var_2 : var_4)))), (min(var_8, ((var_6 ? var_8 : -7424839124295761884))))));
    #pragma endscop
}
