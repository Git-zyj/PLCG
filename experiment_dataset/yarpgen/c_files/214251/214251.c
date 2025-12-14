/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (~var_4)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_11 = -255;
        arr_3 [i_0] = ((var_7 ? (arr_2 [i_0 - 2]) : (arr_2 [i_0 - 2])));
        arr_4 [i_0 - 1] [i_0] &= (3221225472 + 0);
    }
    #pragma endscop
}
