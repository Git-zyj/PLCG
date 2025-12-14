/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((204 + var_8) * (17 / 11)))) / (((var_3 + var_11) - (23598 * 2)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [9] [i_1] [i_0] = ((((((((arr_1 [1] [i_2]) / (arr_0 [i_0]))) * ((19 / (arr_1 [i_1] [0])))))) * (((((arr_4 [i_0]) * var_5)) / (var_0 / 30)))));

                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_3] = (((((((((arr_2 [13]) >> (arr_3 [i_3] [6] [i_0])))) && (1 || 4)))) != ((((1854617663 && var_6) && (var_2 && 62548))))));
                        arr_12 [i_3] [i_2 - 1] [i_2] [i_1] [i_0] = ((((((0 * var_3) <= (((3818703626 + (arr_9 [1] [i_2] [i_1] [i_1]))))))) > ((((((arr_2 [17]) >> 5)) > (-104 > -6044))))));
                        arr_13 [i_0] [i_1] [i_2 - 1] [i_3 + 2] = (((((((((arr_9 [i_0] [i_1] [i_2] [16]) || 1)))) / (48 - var_10))) * ((((((252 * (arr_5 [9] [3] [i_3]))) > ((((arr_9 [i_3] [i_2] [i_1] [1]) == 1)))))))));
                    }
                    for (int i_4 = 3; i_4 < 21;i_4 += 1)
                    {
                        arr_16 [i_0] [i_0] [i_0] [i_4] [i_0] = ((0 | (((-780 - (16 ^ 702353671))))));
                        arr_17 [i_0] [1] [i_4] [i_2 - 1] = (((((var_8 > -1) - (160 - var_1))) <= (62053 - 248)));
                        arr_18 [i_4 - 3] [i_4] [i_4] [i_0] = ((((((var_6 == var_6) <= ((((arr_8 [i_0]) <= 252)))))) > ((((((((arr_9 [4] [i_2 + 1] [1] [4]) || 51)))) == (((arr_10 [i_4 - 3]) | 732521962)))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
