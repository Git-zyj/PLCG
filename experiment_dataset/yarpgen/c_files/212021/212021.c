/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_5;
    var_12 = (min((min(170326122447601502, 1363323160)), (((((var_8 ? 89 : var_2)) + 167)))));
    var_13 = (min(89, ((((min(var_8, 8056865077436051316))) ? (min(var_5, var_4)) : var_2))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = ((!(((89 ? (min(-80, (arr_1 [i_0]))) : (arr_0 [i_0]))))));
        arr_2 [i_0] [9] = (max(((((((32754 >= (arr_1 [i_0])))) == (arr_1 [1])))), (arr_1 [i_0])));
        var_15 *= (((((arr_0 [i_0]) > 89)) ? ((min((arr_0 [i_0]), (arr_0 [i_0])))) : 10739424670078646656));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_16 ^= (((arr_3 [i_1 + 1] [1]) < -80));
        arr_6 [i_1] &= (((var_7 + -38) ? (((arr_5 [i_1] [i_1]) / 10739424670078646656)) : (arr_1 [i_1])));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_17 = (max(var_17, (((~(arr_9 [i_2]))))));
        arr_11 [i_2] [i_2] = (((arr_8 [i_2] [i_2]) | (((arr_10 [i_2]) ? (arr_10 [i_2]) : (((arr_8 [i_2] [i_2]) % var_5))))));
    }
    #pragma endscop
}
