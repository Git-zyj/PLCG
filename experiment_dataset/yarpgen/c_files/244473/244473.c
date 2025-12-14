/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    var_14 = (min((min(var_4, ((var_1 ? 62 : var_1)))), var_9));
    var_15 = ((((min(var_5, (max(var_7, var_11))))) && (1547359621 && var_10)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_1] = 102;
                    arr_11 [i_0] [i_0] [i_0] = min((arr_3 [i_2]), -7);
                }
            }
        }
    }
    #pragma endscop
}
