/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((((max(var_18, var_5))) ? var_16 : var_8));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            var_20 ^= (arr_0 [i_1 + 1]);
            var_21 = (((arr_1 [i_1 - 2]) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 - 2])));
            var_22 -= ((var_13 ? (var_6 >= -63) : (-127 - 1)));
        }
        arr_4 [1] = ((!((max((((arr_2 [i_0]) ? var_1 : (arr_3 [i_0]))), (max((arr_0 [i_0]), (arr_1 [i_0]))))))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_9 [i_2] = (max((min(var_18, -28)), 28));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_23 = ((1 ? -28 : (arr_11 [i_2] [i_3])));
            arr_12 [i_3] = (((((arr_10 [i_2] [i_3]) == (arr_10 [i_2] [i_2]))) ? (17209486646322678862 << var_14) : (min(((var_4 + (arr_3 [i_3]))), (((-39 ? 4094 : (arr_8 [i_2]))))))));
        }
    }
    #pragma endscop
}
