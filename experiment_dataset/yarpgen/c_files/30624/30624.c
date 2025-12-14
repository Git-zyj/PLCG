/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((0 ? 207 : var_5))) ? (((min(var_13, var_13)))) : (max(128, -8985320778940622872)))) * ((max(var_14, (var_14 / var_17))))));
    var_19 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = var_10;
                var_21 = ((!(!89)));
                var_22 = 8479056037155152352;
            }
        }
    }
    #pragma endscop
}
