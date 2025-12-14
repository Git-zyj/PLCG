/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_10 = ((((max((arr_2 [i_0 + 1] [i_0 + 2]), 9223372036854775804))) && (arr_2 [i_0] [i_0 + 1])));
        var_11 = (max(var_11, var_0));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_5 [i_1] = ((-(arr_4 [i_1])));
        arr_6 [i_1] = ((((((var_1 < var_7) & 4294967288))) <= ((var_2 << ((((var_9 ? var_4 : 15360)) - 53))))));
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        var_12 = (((arr_7 [i_2 + 2]) ? (arr_7 [i_2 - 1]) : (arr_7 [i_2 + 1])));
        arr_9 [i_2] = 24672;
        arr_10 [0] &= ((-4460586625378084104 ? -7849210566771259845 : 7849210566771259844));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {
        arr_13 [i_3] = ((-9223372036854775801 ? (arr_3 [i_3]) : var_9));
        arr_14 [i_3 + 1] = (arr_7 [i_3 - 1]);
    }
    var_13 |= (((!var_7) ? (max(((var_9 ? var_7 : 1743791886)), var_5)) : ((min(var_1, 16401)))));
    #pragma endscop
}
