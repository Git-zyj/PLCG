/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [4] [i_0] = (-var_15 ? (91 <= -1) : ((-((40863 ? -906137849254317617 : 1)))));
        var_19 = ((-1 ? (((!(!var_12)))) : var_15));
    }
    var_20 = (((!var_11) ? var_6 : (((((var_16 ? var_5 : 14512797569994717359))) ? ((-3465803291865046197 ? var_3 : var_7)) : (1 / 63)))));
    #pragma endscop
}
