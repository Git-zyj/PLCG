/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = (((~((-1050529316113904055 ? var_11 : var_8)))));
                var_18 |= 5876909037678217789;
            }
        }
    }
    var_19 = (min(var_19, var_16));
    var_20 = (var_10 % 5876909037678217789);
    var_21 = (max(((var_3 ? (max(-5876909037678217790, -5876909037678217790)) : var_6)), (min((!5876909037678217780), 5876909037678217766))));
    var_22 = (min(var_22, -5876909037678217772));
    #pragma endscop
}
