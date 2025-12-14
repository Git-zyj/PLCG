/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_17));
    var_20 = var_13;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_21 &= (((((((8627553434833796361 ? 19662 : 1)) * var_5))) ? var_17 : ((var_10 % ((12994 ? var_16 : var_18))))));
        arr_3 [i_0] = 510239021;
    }
    var_22 = var_1;
    #pragma endscop
}
