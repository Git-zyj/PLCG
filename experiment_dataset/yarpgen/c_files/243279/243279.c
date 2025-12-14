/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [5] [i_0] = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((-((var_15 & (arr_0 [i_0] [i_0])))));
    }
    var_20 = ((((var_17 && (var_18 || var_15))) ? ((((((var_3 - var_1) + 2147483647)) >> (((min(1683562443, 4294967295)) - 1683562438))))) : ((var_12 ? (var_19 > var_10) : var_18))));
    var_21 = (max(var_18, var_15));
    var_22 -= (~var_16);
    #pragma endscop
}
