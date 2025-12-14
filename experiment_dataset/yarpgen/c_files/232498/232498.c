/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [i_0 - 1] [i_2] [i_0] [i_0 - 1] = ((-(((!(arr_3 [i_0]))))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_16 = ((244 + (((!(arr_5 [i_2]))))));
                            arr_12 [i_2] [i_1] [i_2] = (arr_4 [i_0] [i_0 - 1] [i_2 + 1] [i_4]);
                        }

                        for (int i_5 = 2; i_5 < 17;i_5 += 1)
                        {
                            var_17 = (max(-579556235288401228, ((max(var_1, var_9)))));
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_2] = (((((((min((arr_16 [i_0 - 1] [i_1] [i_2] [i_3] [i_5 - 2] [i_0] [i_5]), (arr_11 [i_5] [i_3] [i_2] [10] [10])))) ? 12 : (~18)))) ? (((!1) | (arr_2 [i_2]))) : (max((min(var_13, var_7)), 1))));
                            arr_18 [i_5] [i_5] [i_2] [i_5] [i_0] &= 39;
                            var_18 -= 16;
                        }
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            var_19 = (max(var_19, ((max((((arr_20 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_6] [2] [i_6 + 1] [i_6 - 1]) | -2993399952526891600)), (((((~(arr_19 [i_0] [i_1] [2] [18])))) ? (((((arr_11 [i_0 - 1] [i_1] [i_2] [i_3] [i_6]) && 1)))) : (arr_2 [i_0]))))))));
                            var_20 &= min((((~(((arr_1 [i_0]) & 255))))), -4947065367900009137);
                            var_21 += (min(((((min(11, -3055616007645313419))) && (((-624630692016400779 / (arr_3 [i_0 - 1])))))), (((arr_0 [i_1 - 1]) || (arr_0 [i_6 + 2])))));
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_6] = (min(244, (arr_11 [i_0] [i_1] [i_1] [i_3] [i_6])));
                        }
                        arr_22 [i_0 - 1] [i_0 - 1] [i_2] = -5963781190073111458;
                        var_22 += ((205 ^ ((((min(-4731611674679683503, 4731611674679683512))) ? (((max(31161, 5955)))) : ((var_13 ? (arr_2 [i_2]) : (arr_14 [i_3] [i_3] [i_2] [i_1] [i_1] [i_1 - 1] [i_0])))))));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_0] [i_1 - 1] [i_2] = (((var_8 / (arr_15 [i_0] [i_0] [i_0 - 1] [i_1 - 1] [i_2] [i_7] [i_7]))));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            arr_30 [i_2] [i_1] [i_2 - 1] = ((-(((arr_4 [i_8] [i_2 + 1] [i_1 - 1] [i_0]) | 1))));
                            var_23 = arr_16 [i_8] [i_7] [i_7] [i_0] [i_1] [i_0] [i_0];
                            var_24 = ((7179872484888841402 ^ (((arr_19 [i_0] [i_7] [i_2] [i_0]) ? (arr_7 [i_0] [i_2] [i_0] [i_0 - 1]) : 1988553705248758456))));
                        }
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                    {
                        var_25 = (max(var_25, (((247 ? -7179872484888841403 : -2016206370138949714)))));
                        var_26 = ((-(((-9539 && ((((arr_9 [i_9] [i_2 + 1] [i_1] [i_0]) << (((arr_3 [i_0]) - 8338759496223026588))))))))));
                        arr_34 [i_9] [i_2] [i_2] [i_0] = ((-(!5650636358708554024)));
                    }
                }
            }
        }
    }
    var_27 = 4410246263468724725;
    #pragma endscop
}
