/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((((!((max(176, var_7)))))), var_11));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = (min(var_15, ((max((max((arr_1 [i_0 + 2]), var_11)), (max(36540, 59769)))))));
                var_16 *= ((!(~-5)));
            }
        }
    }
    #pragma endscop
}
