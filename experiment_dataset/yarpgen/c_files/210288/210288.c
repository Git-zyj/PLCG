/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (57271 ^ 57271);
        arr_3 [9] [i_0] = (!var_2);
        var_14 &= var_8;
    }
    var_15 = (max(var_15, ((576460752303423487 / (((+((1855465404759197983 ? (-32767 - 1) : 57272)))))))));
    #pragma endscop
}
