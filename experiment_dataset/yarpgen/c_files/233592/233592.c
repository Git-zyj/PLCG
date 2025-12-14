/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [8] = var_8;
        arr_3 [i_0] = (((arr_0 [i_0 + 1]) ? ((~(var_4 ^ var_5))) : ((((((-46 + 2147483647) << (((arr_0 [i_0]) - 57)))) | (((arr_1 [i_0] [i_0]) | 1)))))));
        arr_4 [i_0] [i_0 + 1] = ((+((min((arr_0 [i_0 + 1]), var_1)))));
    }
    for (int i_1 = 4; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1] = (-127 - 1);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_15 [i_4] [i_2] [i_2] [i_2] [i_2] = ((127 ? 0 : 59));
                        arr_16 [i_1 - 1] [i_1] [i_1] [i_2] = (((~(((arr_14 [i_1] [10] [i_4]) ? var_2 : var_1)))));
                        arr_17 [i_4] [i_1] [i_1] [i_1] = (!0);
                        arr_18 [i_2] [i_2] [6] [1] = (~-39);
                        arr_19 [i_3] [i_2] [1] [i_3] = ((~(min((arr_6 [i_1 - 4]), (arr_10 [i_2] [i_2])))));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] = (((arr_20 [i_5]) ? 9 : ((1 ? -41 : 127))));
        arr_23 [i_5] = var_6;
        arr_24 [i_5] = (((127 < -104) >> (-80 / 88)));
        arr_25 [1] = ((((var_4 ? (var_6 & 1) : var_10)) * (((((38 ? var_7 : -80)))))));
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
    {
        arr_29 [i_6] [12] = ((-((~((((arr_27 [i_6]) < (arr_27 [i_6]))))))));
        arr_30 [i_6] = 80;
    }
    var_12 = (!(((~((-32 ? 127 : 1))))));
    var_13 = ((55 ? 117 : -120));
    var_14 = var_4;
    #pragma endscop
}
