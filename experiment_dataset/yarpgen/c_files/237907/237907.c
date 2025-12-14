/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_11 ^= (((((arr_1 [i_0 - 1]) / 536870848)) / 2377461325));
        var_12 = (((((32767 < (arr_1 [i_0 + 1])))) <= (((2377461325 < 2377461335) >> ((((arr_0 [i_0] [12]) < 1390889919)))))));
        var_13 ^= ((-(-32760 < var_0)));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_14 = 32767;
        var_15 = (~32767);
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                {
                    arr_8 [i_2] [i_2 - 1] [i_2 - 1] [i_3 + 3] = var_5;
                    var_16 = (arr_3 [i_1]);
                }
            }
        }
    }
    var_17 = (1133604437 & 10359);
    var_18 = var_6;

    for (int i_4 = 4; i_4 < 20;i_4 += 1)
    {
        arr_12 [i_4] [i_4] = ((-2582641671 || (var_7 / var_4)));

        /* vectorizable */
        for (int i_5 = 3; i_5 < 18;i_5 += 1)
        {
            var_19 -= (arr_11 [i_5 + 3] [i_5 - 1]);
            var_20 = (max(var_20, (arr_14 [i_4] [i_4] [13])));
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            arr_20 [i_6] = -1133604436;
            arr_21 [i_6] = (arr_11 [i_4] [i_4]);
        }
        var_21 = (~-1133604438);
    }

    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {

        for (int i_8 = 1; i_8 < 22;i_8 += 1) /* same iter space */
        {
            arr_28 [i_8] [i_8] [i_7] = var_3;
            var_22 = ((-(arr_26 [i_8])));
            arr_29 [i_7] = ((((arr_27 [i_8 + 1] [i_8 + 1] [i_8 + 2]) < (arr_27 [i_8 + 1] [i_8 + 1] [i_8 + 1]))));
        }
        for (int i_9 = 1; i_9 < 22;i_9 += 1) /* same iter space */
        {
            arr_32 [i_9] = ((910332814 << (1073217536 - 1073217535)));
            var_23 = (((((arr_31 [i_9 + 1] [i_9 + 2] [i_9 - 1]) ^ ((((var_6 < (arr_26 [i_9]))))))) & -var_2));
        }
        arr_33 [i_7] &= ((((var_9 / (arr_25 [i_7]))) >> (((arr_25 [i_7]) - 1938))));
        arr_34 [i_7] = (((~4161844417) || (arr_31 [i_7] [5] [i_7])));
    }
    #pragma endscop
}
