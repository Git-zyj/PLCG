/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] = 14024484490438210588;
                    var_14 = 4422259583271341007;
                }
            }
        }
    }
    var_15 = ((16 ? var_1 : 4294967259));
    #pragma endscop
}
