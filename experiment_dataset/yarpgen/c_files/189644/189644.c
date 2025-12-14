/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (((((((0 | (arr_0 [i_0]))) & (arr_0 [i_0])))) ? 2147483647 : ((((((~(arr_0 [i_0])))) ? (~var_10) : (~var_2))))));
        var_12 = (max(-var_8, ((2147483646 ? -12 : 2147483646))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        arr_6 [7] = ((~((var_7 & (arr_4 [i_1 + 1])))));

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_13 ^= (((((var_6 / (arr_4 [i_1])))) ? (arr_8 [i_1 + 1] [i_2] [i_1 + 1]) : (((arr_5 [i_1 + 1]) * 2147483651))));
            var_14 = (((var_5 ^ (arr_7 [i_2]))));
        }
        arr_9 [i_1 - 1] = (((arr_7 [i_1 - 2]) - (arr_7 [i_1 - 2])));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_12 [10] = ((var_5 == (((arr_8 [i_3] [5] [i_3]) ? (((-(-127 - 1)))) : ((50 ? -2147483635 : var_3))))));
        arr_13 [i_3] = (max((!var_10), (arr_4 [i_3])));
        var_15 = var_9;
        var_16 += ((((arr_10 [i_3]) || ((min(var_11, var_9))))) || (((~(((arr_10 [14]) ? 9521559606255395482 : var_6))))));
        arr_14 [i_3] = ((((min(((~(arr_5 [i_3]))), var_5))) ^ ((~(min(51679, (arr_11 [i_3])))))));
    }
    var_17 = var_10;
    #pragma endscop
}
