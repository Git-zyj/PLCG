/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0 - 4] [i_0] = (arr_0 [i_0]);
        var_18 = (max(var_18, (((7839 << (((arr_0 [4]) - 16768216495647914825)))))));
        var_19 = (max(var_19, 52608));
        var_20 -= (((((~(arr_0 [4])))) ? 64512 : 9019783111105515757));
    }
    var_21 = (max((57691 ^ var_16), var_0));
    var_22 ^= (((((((7839 >> (var_7 - 746735303)))))) <= (var_16 < 1833727414)));
    #pragma endscop
}
