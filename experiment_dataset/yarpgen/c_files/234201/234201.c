/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (1099511627744 * var_2);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (((((arr_0 [i_0]) >= var_9)) ? 80 : (((~(arr_0 [i_0]))))));
        var_11 = (max(var_11, (+-153)));
    }
    var_12 = (min(var_12, var_0));

    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_13 |= ((((min((arr_3 [i_1] [i_1]), 5999409951038163477))) ? (min((arr_4 [i_1] [i_1]), ((max((arr_1 [i_1]), (arr_0 [i_1])))))) : (((arr_0 [i_1]) / var_8))));
        var_14 = ((!((var_4 == ((-4482207115533413777 ? (arr_4 [i_1] [i_1]) : (arr_0 [i_1])))))));
        arr_5 [i_1] [i_1] = (max(((~((var_9 ? var_6 : var_3)))), ((max(((245 ? (arr_0 [i_1]) : (arr_1 [9]))), (arr_0 [i_1]))))));
        var_15 ^= (((+(((arr_3 [i_1] [i_1]) - (arr_1 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_16 = ((min((arr_0 [i_2]), (arr_6 [i_2]))));
        var_17 = ((~(~var_2)));
    }
    #pragma endscop
}
