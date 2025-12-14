/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((1289386894 >> (16338 - 16329))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] = -1289386889;
    }
    var_18 *= ((max(5449296737696488373, ((max(-21636, var_0))))) ^ ((((-21636 || -25561) % 586351181))));
    var_19 = ((14336 ? 1030887081 : -85));
    #pragma endscop
}
