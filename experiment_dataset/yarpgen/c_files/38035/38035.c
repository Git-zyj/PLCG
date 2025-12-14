/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((var_2 + ((var_3 ? var_8 : 229)))), ((var_9 ? (~var_7) : ((max(var_5, 61)))))));
    var_14 = (min(var_8, (~var_9)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0]);
        arr_4 [i_0] = (((((11639 ? var_0 : (arr_0 [i_0])))) ^ var_11));
    }
    #pragma endscop
}
