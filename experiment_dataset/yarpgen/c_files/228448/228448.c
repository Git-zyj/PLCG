/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = -1929392482;
                    var_18 = (max(var_13, -5));
                    var_19 |= (((((715100678 ? (arr_7 [i_0 - 1] [2]) : var_10))) ? ((min(var_4, var_6))) : (min(3066967277, 2251799813668864))));
                }
            }
        }
    }
    #pragma endscop
}
