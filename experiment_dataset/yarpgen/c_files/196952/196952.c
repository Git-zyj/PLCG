/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_19 &= (!2147483647);
                var_20 -= ((!((max(1197838367, var_7)))));
                var_21 = ((((((arr_4 [i_0] [i_0]) & (arr_4 [i_0] [i_0])))) ? var_14 : (((var_7 & var_15) ? 1169113240 : var_12))));
            }
        }
    }
    #pragma endscop
}
