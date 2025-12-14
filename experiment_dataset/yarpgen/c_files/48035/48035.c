/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((((((-3366 ? 115 : 4294967295))) ? 1153118361 : var_13)))));
    var_21 |= 119;
    var_22 = (((~((3203140212 ? var_4 : 0)))));
    var_23 = (~var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] |= (~var_6);
                arr_5 [i_0] = var_16;
            }
        }
    }
    #pragma endscop
}
