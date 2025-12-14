/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = (((((-15542 ? 9223372036854775807 : 2056941510925556454))) ? 25175 : 65532));
                arr_6 [i_1] [i_0] = ((2056941510925556454 ? 16389802562783995154 : var_12));
            }
        }
    }
    var_21 = -25177;
    #pragma endscop
}
