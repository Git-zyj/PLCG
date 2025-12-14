/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!-var_8);
    var_13 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = (arr_2 [i_0]);
                    var_15 = (((((((((arr_4 [7]) ? var_9 : var_10))) ? (!var_10) : (min((arr_1 [i_0]), (arr_6 [14] [i_0])))))) ? var_6 : -29));
                }
            }
        }
    }
    #pragma endscop
}
