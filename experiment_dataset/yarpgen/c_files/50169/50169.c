/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [7]);
        var_12 -= (((239 - 0) + var_5));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_5 [1] = (((arr_4 [i_1] [5]) >> (((arr_4 [i_1] [i_1]) - 45461648))));
        arr_6 [4] = (arr_3 [3] [0]);
        var_13 = var_1;
        arr_7 [6] = ((((((arr_3 [5] [3]) > 15))) >= var_5));
    }
    var_14 = var_3;
    #pragma endscop
}
