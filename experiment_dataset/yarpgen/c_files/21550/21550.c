/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (!(((var_1 || 15042882950328159081) || ((min(var_3, 16432488434623986124))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] = 9003462905912796758;
        var_11 = (var_4 && var_1);
    }
    var_12 = -89;
    var_13 = 9003462905912796752;
    #pragma endscop
}
