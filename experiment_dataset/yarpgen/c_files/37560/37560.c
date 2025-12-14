/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [5] = ((((((1 % var_8) * (arr_4 [i_2 + 1] [i_2 + 1] [i_2 + 2])))) ? (((var_12 ? var_10 : (~var_13)))) : (min((((var_10 - (arr_2 [i_2] [i_0] [i_0])))), (((arr_3 [i_0] [18] [i_0]) ? var_9 : -5820850932091047514))))));

                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        var_14 = (((arr_3 [i_2 + 1] [i_1] [i_0]) ? ((((((arr_0 [7] [7]) * var_1))) ? (arr_11 [i_0]) : 1426714693697787980)) : (((var_1 ? ((var_5 ? var_6 : (arr_11 [i_0]))) : -21599)))));
                        var_15 = (((arr_1 [i_0]) ? (max((((arr_9 [i_3] [i_1]) ? var_6 : (arr_0 [i_2] [i_0]))), (((18446744073709551615 ? var_12 : var_4))))) : (arr_0 [i_2 + 2] [i_0])));
                        var_16 = (max(var_7, ((-var_6 / (max((arr_9 [i_2] [i_2]), var_1))))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_17 = ((-((((arr_3 [i_2 + 2] [i_2 + 2] [22]) && -1538)))));
                        var_18 = 1;
                        var_19 = arr_3 [i_1] [i_2] [i_1];
                        var_20 = (--4057084982253128651);
                        var_21 = min((((0 ^ 288230376151711744) * (arr_12 [i_4] [i_2 + 1] [i_4] [i_2 + 2] [i_2 + 1]))), -488929533379013059);
                    }
                    var_22 = min((((~(arr_13 [i_0] [i_1] [i_0])))), ((var_1 ? var_8 : ((var_8 ? 5768014142877804786 : (arr_11 [19]))))));
                }
            }
        }
    }
    var_23 = (~var_11);
    #pragma endscop
}
