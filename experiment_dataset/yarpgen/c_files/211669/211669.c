/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((min(1026197543, 1))));
    var_19 = (max(((var_6 ? var_0 : 1)), 2015175562));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = 1;
        arr_3 [i_0] [i_0 + 1] = 680348550;
        arr_4 [i_0] = ((680348550 ^ (10541 >> 4)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 ^= (((5924 <= 1773784332) ? 56886 : 0));
        var_21 = (((0 / 54995) ? 4294967295 : 0));
    }
    #pragma endscop
}
