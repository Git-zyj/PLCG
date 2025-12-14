/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 += (~((3970319332 ? (min(23, 3220787495)) : -2711880056)));
                    var_17 += ((23 ? var_8 : ((min(-1362724413, 42)))));
                    var_18 += var_2;
                    var_19 = ((((min(16777215, 2693639898))) ? var_12 : 1));
                }
            }
        }
    }
    var_20 = var_7;
    #pragma endscop
}
