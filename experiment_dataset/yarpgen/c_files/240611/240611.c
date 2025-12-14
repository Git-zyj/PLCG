/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = -var_14;
                arr_8 [i_0] [i_0] [i_1 - 1] = 102;
            }
        }
    }
    var_19 = var_10;
    var_20 = (max(-23, (10930587114303594135 % var_13)));
    var_21 = (~1846688716807987704);
    var_22 = (min(var_22, ((((!var_7) % -5279)))));
    #pragma endscop
}
