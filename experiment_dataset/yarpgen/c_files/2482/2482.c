/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((((min(var_9, 14)) * (1 >= var_0)))), var_7));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = (min(var_16, (arr_0 [i_0] [i_0])));
        var_17 *= (-32767 - 1);
        var_18 = ((((-28820 ? (arr_1 [0] [i_0]) : (arr_0 [4] [i_0]))) >= (!-10859)));
        arr_4 [i_0] [i_0] &= ((-(min((max((arr_2 [i_0]), var_5)), ((max((arr_2 [i_0]), 238)))))));
        var_19 = 15937290057319726193;
    }
    var_20 = ((((max(7811866485063719184, var_9)) * 49663)));
    #pragma endscop
}
