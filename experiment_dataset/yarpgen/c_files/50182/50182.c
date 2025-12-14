/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= -var_15;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = ((-591216757 ? -591216757 : 2082478026));
                    var_19 = ((86 ? 1 : (max((((!(arr_7 [i_0] [i_0])))), (591216757 / var_0)))));
                }
            }
        }
    }
    #pragma endscop
}
