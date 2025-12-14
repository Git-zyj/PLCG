/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min(var_5, (~var_10)))) ? (~var_8) : ((max(var_9, var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 &= (2454033710 | var_5);
                var_14 = (min(var_14, ((((max(var_2, (arr_0 [8]))))))));
            }
        }
    }
    var_15 = var_4;
    var_16 |= (max((0 || 67108856), ((((max(var_2, var_4))) ^ ((var_6 ? var_0 : var_1))))));
    var_17 = (max(var_0, ((var_0 ? var_10 : (var_6 == var_0)))));
    #pragma endscop
}
