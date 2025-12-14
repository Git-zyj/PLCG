/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((max(72057594037796864, var_11)) ^ var_8))) ^ (min(var_10, var_8))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = (max((arr_0 [i_0]), (((16807592592917945305 ? (arr_2 [i_0]) : (arr_2 [i_0]))))));
        var_14 = (max(var_14, (arr_0 [i_0])));
    }
    #pragma endscop
}
