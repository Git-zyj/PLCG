/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_8;
    var_16 -= ((((min(var_0, ((var_4 ? var_3 : 1065230983))))) ? (max(((var_12 ? var_2 : 1)), (((var_14 ? 1 : 1863479745))))) : ((max(var_0, var_10)))));
    var_17 = ((((((((var_12 ? var_9 : 1))) ? ((1 ? var_1 : -38)) : ((max(var_14, var_0)))))) ? ((((-101 ? var_6 : var_3)))) : ((((min(1, 129))) ? ((140668768878592 ? (-32767 - 1) : var_1)) : ((-37 ? (-32767 - 1) : 47))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                arr_4 [i_0] [3] = arr_3 [i_0];
                var_18 |= (max((max((((-1063976188 ? 57 : 0))), 134217600)), -var_4));
            }
        }
    }
    #pragma endscop
}
