/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_6 == (((min(874, 17))))));
    var_12 = 16977226038305480078;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_13 = (max(-var_6, (max((((arr_1 [i_3] [i_2]) ? var_8 : 64662)), (max(874, 5))))));
                        var_14 = ((((min(9, (arr_9 [10] [i_0] [i_0 + 2] [i_0] [i_0 + 1] [i_0])))) ? ((~(arr_9 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_0]))) : (arr_9 [i_0] [i_0] [i_0 + 2] [i_0] [i_0 + 1] [i_0])));
                        var_15 = (arr_3 [i_3] [i_2]);
                        var_16 = (((((0 & 18446744073709551588) | (arr_9 [i_3] [i_0] [i_2] [i_0] [i_0] [i_0]))) ^ (((((((arr_3 [4] [i_2]) ^ 18446744073709551589))) ? (((arr_1 [3] [1]) ^ var_10)) : (((~(arr_2 [i_0] [i_1] [i_0])))))))));
                        var_17 *= (~(((arr_8 [i_3] [i_3]) ? (arr_1 [i_3] [i_3]) : (arr_0 [i_0]))));
                    }
                    arr_10 [i_0] [i_2] = (i_0 % 2 == 0) ? (((((var_2 + 2147483647) >> (((arr_2 [i_0] [i_1] [i_0]) - 200)))))) : (((((var_2 + 2147483647) >> (((((arr_2 [i_0] [i_1] [i_0]) - 200)) + 53))))));
                }
            }
        }
        arr_11 [i_0] = (max((((!(arr_6 [i_0 + 2] [i_0 - 1] [i_0] [i_0 + 1])))), ((var_5 ? (arr_6 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 2]) : (arr_6 [i_0 + 2] [i_0 - 1] [i_0] [i_0 + 2])))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    var_18 = (max(var_18, ((-((-64660 ? ((min((arr_2 [2] [i_0] [2]), var_10))) : (var_5 + 7007120191335157066)))))));
                    var_19 = (min(var_19, var_1));
                    var_20 *= (max(var_0, ((((((arr_3 [i_0] [i_4 - 1]) ? var_5 : (arr_14 [16] [i_4 + 2]))) != (((arr_2 [i_0] [i_0] [0]) + 176)))))));
                }
            }
        }

        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_21 = (min(-var_6, var_8));
                        var_22 = var_7;
                    }
                }
            }
            var_23 = (((((((var_3 ? var_1 : 11439623882374394550))) ? (arr_16 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (arr_21 [i_0] [i_0] [i_0] [5])))) & ((-5 ? 11439623882374394550 : (((((arr_18 [18]) && 7007120191335157064)))))));
        }
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            var_24 = (~13);
            var_25 = 18446744073709551600;
            arr_26 [i_0] [11] [i_9] = var_6;
        }
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            var_26 -= (arr_16 [12] [12] [12] [i_0]);
            var_27 &= (arr_23 [i_0] [i_0] [i_10] [i_10]);
            arr_29 [14] |= ((11439623882374394560 ? 2124661995 : 18446744073709551600));
        }
    }
    #pragma endscop
}
