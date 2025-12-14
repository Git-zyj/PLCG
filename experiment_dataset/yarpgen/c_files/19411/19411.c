/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((1804645484 ? (((((-(arr_1 [i_0] [14]))) / 147))) : (((((15520958096799975737 ? 14953782179894235305 : 2925785976909575879))) ? -2490321808 : (18446744073709551611 & var_6)))));
        arr_3 [i_0] [i_0] = -38;

        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = (arr_4 [i_0]);
            arr_7 [i_0 - 1] [i_0] = (arr_1 [i_0 - 1] [i_0 - 1]);
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            arr_10 [i_0] [i_0 - 1] [i_2] &= (((-(arr_5 [i_0] [i_2]))));
            var_16 -= (!(((-5140064112936735247 ? (arr_8 [i_0 - 1] [0]) : -39))));
            arr_11 [i_0] = var_12;
        }
        arr_12 [i_0] [i_0 - 1] = (((((!(arr_1 [i_0] [i_0]))) ? ((var_12 ^ (arr_8 [i_0] [i_0]))) : (arr_5 [i_0] [i_0]))) - (min((arr_1 [i_0 - 1] [i_0 - 1]), 0)));
    }
    var_17 = (min(2925785976909575874, -105));
    var_18 = var_12;
    var_19 = var_4;
    #pragma endscop
}
