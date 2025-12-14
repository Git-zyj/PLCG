/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((!(arr_1 [i_0] [i_1])));
                arr_5 [i_0] = (arr_2 [i_0]);
            }
        }
    }
    var_15 = (((~(var_5 - 1))));
    var_16 = (max(var_16, ((min(((var_1 % (max(var_2, var_3)))), (((var_10 * (1 & var_4)))))))));
    var_17 = (var_4 || 4606910399682122737);
    #pragma endscop
}
