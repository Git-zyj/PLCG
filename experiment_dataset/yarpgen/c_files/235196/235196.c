/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_17 = 767012635;
        var_18 = var_5;
    }

    for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_19 &= (min(((((max(-767012635, 255))) ? (arr_2 [i_1 + 1]) : (arr_3 [i_1]))), 767012635));
        var_20 = (arr_3 [12]);
        arr_4 [i_1] = -1;
        var_21 = (((-450895221 ^ (arr_2 [i_1 - 1]))));
    }
    for (int i_2 = 1; i_2 < 18;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        var_22 |= (((arr_13 [i_5 + 1] [i_5] [i_5] [i_5] [i_5]) % (arr_13 [i_5 + 1] [i_5] [i_5] [i_5 + 1] [13])));
                        var_23 = ((-(1 + var_2)));
                        var_24 = ((arr_7 [i_2 - 1] [i_2 + 1]) ? (arr_13 [13] [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 1]) : (arr_5 [i_2 + 1]));
                        arr_14 [6] [i_4] &= (arr_13 [i_2] [i_3] [i_4] [12] [i_5]);
                        var_25 = (max(var_25, (arr_10 [i_4] [i_4] [i_4])));
                    }
                    var_26 = (i_3 % 2 == zero) ? ((((arr_10 [i_2 - 1] [i_2 - 1] [i_3]) << (((arr_12 [i_2] [i_3] [i_4]) - 80))))) : ((((arr_10 [i_2 - 1] [i_2 - 1] [i_3]) << (((((arr_12 [i_2] [i_3] [i_4]) - 80)) + 49)))));
                }
            }
        }
        var_27 = (min(var_27, ((min(1, (min(1182993046, (arr_3 [i_2]))))))));
    }
    for (int i_6 = 1; i_6 < 18;i_6 += 1) /* same iter space */
    {
        var_28 = (((min((arr_11 [1]), ((((-127 - 1) + var_1))))) << (((min(var_8, 10)) / (arr_13 [i_6] [i_6] [i_6 + 1] [i_6 - 1] [i_6])))));
        var_29 = (min(var_29, var_2));
    }
    #pragma endscop
}
