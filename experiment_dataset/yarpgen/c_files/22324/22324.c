/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~var_13);
    var_19 = ((var_15 ? ((((1 | 58532) > ((var_9 ? var_14 : 18228130423808932319))))) : var_15));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((arr_3 [i_0]) ? -7728258686292637384 : var_11);
                var_20 = (max(var_20, var_7));
            }
        }
    }
    var_21 = 218613649900619297;
    #pragma endscop
}
