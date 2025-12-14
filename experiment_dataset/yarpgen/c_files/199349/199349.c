/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_1 > var_4);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_16 += (arr_4 [10] [i_1] [i_1]);
                    var_17 -= (!-16384);
                }
            }
        }
    }
    var_18 = ((var_6 ? (20234 | 45302) : 1574234903572413140));
    var_19 &= var_11;
    var_20 |= var_0;
    #pragma endscop
}
