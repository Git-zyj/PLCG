/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (!var_6);
    var_11 = (-98 & var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((-(!32256)));
                var_12 = (max(var_12, ((min(((32377 - (arr_0 [i_1] [i_1]))), (arr_2 [i_0]))))));
            }
        }
    }
    #pragma endscop
}
