/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = (((63488 || var_15) ? (((6704 || (((50698 ? 46291 : 63486)))))) : ((var_4 << (var_1 - 1241800283324085107)))));
                var_17 = var_13;
            }
        }
    }
    var_18 = (max(var_18, var_10));
    var_19 = ((63474 || (58922 || 0)));
    #pragma endscop
}
