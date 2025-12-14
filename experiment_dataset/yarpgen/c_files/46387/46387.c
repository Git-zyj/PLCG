/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -5291126522713925254;
    var_16 = (min(var_16, var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] = -5291126522713925254;
                var_17 = (max(var_17, -10936));
            }
        }
    }
    var_18 &= ((var_13 ? (((max((var_14 && 2756392890552500695), var_9)))) : var_2));
    #pragma endscop
}
