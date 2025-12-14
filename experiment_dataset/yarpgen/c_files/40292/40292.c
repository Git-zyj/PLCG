/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, (45 != 9223372036854775807)));
                    var_13 += (((arr_5 [16] [16]) || (((0 ? var_0 : (((((arr_6 [5] [15] [15] [15]) >= 9217545268776585064)))))))));
                }
            }
        }
    }
    var_14 = var_2;
    var_15 = (!var_8);
    #pragma endscop
}
