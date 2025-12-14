/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_13 = (max(-260046848, var_10));
        arr_3 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
        arr_4 [i_0] [i_0] = ((((((arr_1 [i_0]) - 1)) - 260046866)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_12 [i_1] = ((((var_10 - var_7) ? 2088145088 : var_4)));
            arr_13 [i_1] = 240594947;
            arr_14 [i_1] = var_4;
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_14 = (((((57559 / var_10) * (((arr_0 [i_1] [i_1]) * (arr_15 [i_1] [i_1]))))) / var_8));
            var_15 = (arr_11 [i_1] [i_1] [i_1]);
            arr_17 [i_1] = ((-91 >= (((((arr_6 [i_3]) + 13372)) / 245))));
            arr_18 [i_1] [i_1] = ((-192847760 * ((((((arr_16 [i_1] [i_3] [i_3]) * var_9)) / 34828)))));
        }
        var_16 = (max(((max((arr_0 [i_1] [i_1]), (arr_0 [i_1] [i_1])))), ((1 ? 15924386641588872254 : (arr_0 [i_1] [i_1])))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_17 ^= ((+(max((var_11 - 1), 5349))));

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            arr_25 [i_5] [i_5] = var_0;
            arr_26 [i_4] = (arr_10 [i_4] [i_4]);
            arr_27 [i_4] = ((~((((max(124, 202))) ? 59680 : 34828))));
            var_18 = ((((59 - (arr_1 [i_4])))) < (((var_10 + 11830293166031094568) - var_1)));
        }
        var_19 = ((((var_7 ? ((var_2 ? var_8 : var_0)) : var_4)) ^ (var_3 | 121)));
        var_20 -= var_0;
    }
    var_21 = var_5;
    #pragma endscop
}
