/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_11 ? 6488061378403898419 : (min(var_7, -7973357524358749620)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] = 0;

                    for (int i_3 = 1; i_3 < 6;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_19 = (min(var_19, ((max(((((((arr_3 [i_0] [i_1] [i_2]) ? (arr_12 [i_2] [i_1] [4]) : 7743))) / (((arr_10 [i_0] [i_1] [0] [i_3] [i_4]) ? 6488061378403898419 : var_1)))), ((max((((arr_4 [3] [i_1]) ^ 57802)), 776758166))))))));
                            arr_15 [i_3] [i_3] [i_2] [i_3] [i_0] = var_6;
                            arr_16 [i_0] [i_0] [i_3] [i_0] = (((arr_4 [2] [i_1]) ? (((12232 >= (!var_2)))) : ((((arr_2 [i_3 + 2]) || (arr_7 [1] [9] [1]))))));
                        }
                        arr_17 [i_0] [i_3] [i_2] [i_3] [i_0] [i_1] = ((arr_13 [i_1]) * var_11);
                        arr_18 [i_3] [i_1] = (((((min(2048, 255)) >> (-1879696146 + 1879696172)))));
                    }
                    var_20 = var_14;
                    arr_19 [4] [4] [i_2] [9] = (max((~var_12), (max(var_6, (arr_1 [i_2])))));
                }
            }
        }
    }
    var_21 = (((((((255 ? var_9 : var_3))) && var_15)) ? var_1 : var_14));
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            {
                arr_25 [i_5] [i_5] = (((arr_21 [i_5]) ? ((max(-6394180243063770720, 7733))) : ((((((2048 - (arr_23 [i_5]))) >= ((min((arr_22 [1]), (arr_21 [i_5]))))))))));
                var_22 -= ((2147483647 >= (min(-7260295870247752655, 57792))));
                arr_26 [i_5] [i_5] = (-(((var_16 % 15928807101971075885) * (((var_13 ? (arr_24 [i_5] [9] [i_5]) : (arr_21 [i_5])))))));
                arr_27 [i_5] [i_6] [i_6] = (arr_21 [i_6]);
            }
        }
    }
    #pragma endscop
}
