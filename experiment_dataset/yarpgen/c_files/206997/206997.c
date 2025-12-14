/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_14 |= (min(30266, (((((min(35265, 0))) > 35255)))));
                var_15 = (max(var_15, ((((2546156299 ? 18446744073709551614 : 4294967295))))));
                var_16 &= var_3;
            }
        }
    }
    var_17 = var_10;
    var_18 = (min(var_2, var_6));
    #pragma endscop
}
