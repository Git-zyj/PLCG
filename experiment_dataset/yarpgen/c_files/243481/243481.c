/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] [1] |= ((var_1 || (arr_1 [i_0] [0])));
        arr_5 [2] = (arr_1 [2] [2]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = var_15;
        arr_9 [i_1] = (i_1 % 2 == 0) ? ((((((arr_7 [i_1]) + 2147483647)) << (1 - 1)))) : ((((((((arr_7 [i_1]) - 2147483647)) + 2147483647)) << (1 - 1))));
        arr_10 [i_1] [i_1] = (1 & 1);
    }
    var_17 |= (max(((((var_4 ? var_16 : var_6)) + ((min(39123, 2147483647))))), var_1));
    var_18 = var_3;
    #pragma endscop
}
