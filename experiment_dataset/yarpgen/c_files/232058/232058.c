/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_14 = (((((60015 ? ((7375037335974424145 ? 61950 : 0)) : (((min(60015, var_13))))))) || ((((118 <= var_5) ^ var_5)))));

        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            arr_4 [i_0 - 1] [i_0] = (arr_1 [i_0]);
            var_15 = (((((((arr_2 [i_0]) == var_6))) & (max((arr_2 [i_0]), (arr_3 [i_0] [i_1 - 3]))))));
            var_16 = (min(var_16, -7062));
            var_17 += ((18446744073709551615 ? (!15217009480486878094) : (max((arr_0 [i_0] [i_0]), (!74)))));
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_18 *= ((!((min((max(7061, 2147475456)), (!7059))))));
            var_19 = (min(var_19, (((((((arr_5 [i_0 - 1] [i_0 - 1]) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (arr_6 [i_0 - 1] [i_0 + 1])))) >= (((arr_0 [i_0 + 1] [i_0 + 1]) ? -2434115350099508025 : (arr_0 [i_0 - 1] [i_0 + 1]))))))));
        }
        var_20 = (min(var_20, ((max((arr_1 [i_0]), (((!((((arr_2 [i_0 + 1]) + var_13)))))))))));
    }
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        arr_17 [i_3] [i_5] = var_1;
                        arr_18 [10] [i_5] [10] [i_6] = ((+(max(-1647523222, (((arr_7 [i_3]) + var_2))))));
                        var_21 = (max(((var_5 ? 16679329206101326815 : (arr_13 [i_3 + 2] [i_3 + 1] [i_3]))), ((max(43235, (arr_13 [i_3 + 3] [i_3 + 4] [i_3]))))));
                        arr_19 [i_3 + 1] [i_5] [i_3] [9] = ((((max((((23 && (arr_15 [1] [i_4] [i_5] [i_6] [i_6])))), (max(var_7, (arr_14 [i_3] [i_5])))))) ? ((56354 ? (arr_14 [i_3 + 4] [i_5]) : (arr_14 [i_3 + 4] [i_5]))) : (arr_13 [i_5] [i_5] [i_5])));
                    }
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        var_22 = (max(((-((var_2 ? var_3 : (arr_7 [i_7]))))), (max((arr_10 [i_3] [i_4] [i_7]), (((7059 || (arr_16 [i_3] [i_5]))))))));
                        arr_24 [i_7] [i_7] [i_5] [i_5] = (((-118 % 4688389665129757573) == ((max(-var_12, (!var_7))))));
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        var_23 = (-22 + 4294967295);
                        var_24 = ((((((min((arr_8 [i_3]), var_1))) || (31 > 59992))) ? 60015 : (arr_16 [i_3] [i_5])));
                        var_25 = (arr_27 [i_3 - 1] [i_5] [23] [i_3]);
                        var_26 += (~((max(7046, 124))));
                        arr_28 [i_3] [i_5] = ((var_8 / (2147483647 | var_13)));
                    }
                    arr_29 [i_5] = var_6;
                    var_27 &= (max(((max(249, 9223372036854775799))), (((arr_11 [i_3] [i_4 - 3] [i_5]) / (max((arr_9 [i_4]), var_1))))));
                }
            }
        }
        var_28 = (!1);
        arr_30 [i_3 + 4] [i_3] = var_5;
    }
    for (int i_9 = 1; i_9 < 18;i_9 += 1)
    {
        var_29 *= (arr_23 [i_9] [i_9 - 1] [i_9] [i_9]);
        var_30 |= (arr_27 [6] [10] [i_9 + 3] [i_9]);
    }
    var_31 = (var_9 | ((995793134 ? 16384 : 7087162844091958712)));
    var_32 = (((1 || 16384) <= (5196354455570361655 + 7059)));
    #pragma endscop
}
