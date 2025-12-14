/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_11 = 10252534106051358648;
        var_12 = (min(var_12, 10252534106051358633));
        arr_4 [i_0] [i_0] = (((arr_3 [i_0 - 1]) ? (arr_3 [i_0 + 1]) : (((arr_3 [i_0 + 1]) - var_5))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_13 = ((10252534106051358648 <= (((~(arr_6 [i_1]))))));
        arr_7 [i_1] = ((((((arr_1 [16]) ? 10252534106051358667 : 5237626999286792679))) ? ((((min((arr_6 [i_1]), 32640)) < ((32640 ? 4294934656 : 60780))))) : (((((max((arr_3 [i_1]), (arr_5 [i_1])))) > -69)))));
        var_14 = var_3;
        var_15 -= ((((((arr_3 [i_1]) ? var_2 : 2147483647))) ? ((((8097139828404974646 % 1239987982) >= ((((arr_6 [3]) ? (arr_6 [i_1]) : -1752479338)))))) : (((arr_6 [i_1]) << (arr_0 [0])))));
        var_16 = ((((((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) << (1 - 1)))) ? ((((arr_5 [i_1]) == (arr_5 [i_1])))) : 1162916134));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_17 ^= (((((-(!1162916134)))) ? (arr_3 [i_2]) : 32639));
        var_18 -= (~4305693821066662572);
        arr_10 [i_2] &= -32640;
        arr_11 [i_2] [i_2] = ((472166117 << (18 - 16)));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_15 [i_3] = max((32647 == 32646), ((var_8 ? ((min(88, var_5))) : (arr_2 [i_3]))));
        var_19 &= (arr_0 [i_3]);
        var_20 = ((((arr_2 [10]) ? (arr_2 [14]) : (arr_2 [i_3]))));
        var_21 = 1;
        var_22 -= (((((var_5 ? (arr_1 [i_3]) : (arr_1 [i_3])))) ? (((-11417 + 2147483647) << (var_9 - 10143891612132646634))) : (((arr_14 [i_3] [i_3]) ? (arr_1 [i_3]) : (arr_14 [i_3] [i_3])))));
    }
    var_23 ^= (var_7 % var_0);
    #pragma endscop
}
