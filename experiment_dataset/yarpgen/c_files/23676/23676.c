/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_16, 4294967295));
    var_18 ^= (!var_15);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_1] = (((536870912 & (min(var_1, 19)))) != (min(-536870900, 19)));
                    var_19 *= (max(25, (!var_15)));
                    var_20 = var_16;
                }
            }
        }
    }
    var_21 = var_11;
    #pragma endscop
}
