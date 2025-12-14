/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -var_11;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 = var_14;
                    var_21 = ((((max(var_2, (min(var_7, var_12))))) ? 47 : ((var_3 << (((arr_1 [i_0]) - 3940340193771605997))))));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_22 = min(24, ((min(-17634, var_15))));
                        arr_9 [i_0] [i_0] = var_8;
                    }

                    for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_0] = -3970171996;
                        arr_14 [i_1] [i_0] [i_1] [12] [i_1] [i_1] = 2293411239;
                    }
                    for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        var_23 = (((((!(arr_10 [i_0 + 1] [i_5])))) ^ -var_15));
                        arr_18 [i_0] [i_1] [i_5] [i_0] [i_0] [i_0 + 1] = (max(((min(((-15988 ? -16015 : -15988)), (arr_5 [i_0])))), (min((arr_7 [i_0] [i_0 - 1] [i_0]), var_3))));
                        arr_19 [i_0] [i_0] [i_0] = (arr_15 [i_0] [i_1] [i_2] [i_5]);
                        arr_20 [i_0] [i_2] [i_2] [i_2] [i_2] [i_2] = ((((((arr_12 [i_0 - 1] [i_0 - 1] [i_1] [i_2] [i_5]) + var_8))) || ((max(15988, (arr_12 [i_0 + 1] [i_0 + 1] [i_2] [i_5 + 1] [i_5 + 1]))))));
                        var_24 ^= (arr_4 [12] [i_5 + 1] [12]);
                    }
                    for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        arr_25 [i_0] [i_0] [i_6] = (var_1 % (min(var_4, (arr_16 [i_0] [i_2] [i_2] [0] [i_0]))));
                        arr_26 [i_0] [i_0] [i_2] [i_0] = (min(2251799813685247, 16001));
                    }
                }
            }
        }
    }
    var_25 = min(var_12, var_0);
    var_26 = var_10;
    #pragma endscop
}
