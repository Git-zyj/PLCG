/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (var_8 % var_2);
        var_10 = var_7;
        var_11 *= arr_1 [i_0];
        arr_3 [i_0] [i_0] = var_5;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (-((var_4 ? (arr_4 [i_1] [i_1]) : (arr_1 [i_1]))));
        var_12 = (((~(arr_0 [i_1] [i_1]))));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((-((-614716962 ? (((1 ? 0 : -1))) : 3061424636))));
        arr_10 [6] |= ((-(arr_5 [i_2] [i_2])));
        arr_11 [i_2] = (((min((arr_4 [i_2] [i_2]), 1)) ? (arr_4 [i_2] [i_2]) : (arr_4 [i_2] [i_2])));
        var_13 ^= (((((-(arr_7 [i_2])))) ? ((max(26, 1))) : 3));
        arr_12 [i_2] = (min((25857 <= 49), (var_4 > var_6)));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] = (((arr_7 [i_3]) ? (arr_7 [i_3]) : (!254)));
        var_14 = (arr_0 [i_3] [i_3]);
        arr_16 [i_3] [i_3] = ((-5821313678056336079 ? 3936836369 : (~var_3)));
    }
    var_15 = ((-1762851149870181379 ? -110 : 1));
    #pragma endscop
}
