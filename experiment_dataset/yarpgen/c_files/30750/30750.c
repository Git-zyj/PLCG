/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;

    for (int i_0 = 1; i_0 < 23;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_19 += var_5;
            arr_6 [0] [0] = ((((((arr_5 [i_0 + 1] [i_0 + 1]) & (arr_5 [i_0 + 2] [i_0 + 2])))) ? (arr_5 [i_0 + 2] [i_0 + 2]) : (min(-1764294289, var_7))));
            var_20 &= ((!((((~var_4) ? (arr_0 [i_0] [i_0 + 2]) : (arr_5 [14] [i_1]))))));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_9 [i_0] = (((arr_3 [17] [17] [1]) ? (~83) : ((-(arr_1 [i_0 + 2])))));
            arr_10 [24] [10] [24] &= ((var_12 ? (arr_8 [9] [i_0 + 2] [i_0]) : -1764294302));
        }
        for (int i_3 = 1; i_3 < 24;i_3 += 1)
        {
            var_21 *= (max((max(19904, (max(-1489727626, (arr_0 [i_0] [i_0 - 1]))))), ((min(-18502, -1764294274)))));
            var_22 = (min(var_22, var_16));
        }
        arr_13 [21] &= 8780042078805230656;
    }
    for (int i_4 = 1; i_4 < 23;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] [i_4] = ((max(16777088, (arr_7 [i_4] [i_4 + 1]))));
        arr_17 [18] = max((((arr_0 [i_4 + 1] [i_4]) ? (arr_11 [i_4 - 1] [i_4 + 2] [i_4 - 1]) : var_4)), 128);
    }
    for (int i_5 = 1; i_5 < 23;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] [i_5] = (-(max(-27411, 3961716373)));
        var_23 = (max(var_23, (+-36028797018963968)));
        var_24 -= -19903;
        arr_21 [i_5] = var_10;
    }
    var_25 = var_2;
    #pragma endscop
}
