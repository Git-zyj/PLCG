/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = (min((min(-25023, (arr_2 [i_0] [i_0]))), ((min(11532, var_1)))));
                arr_7 [i_0] [i_0] = var_9;
            }
        }
    }
    var_12 = ((var_5 ? (((min(var_3, var_7)))) : ((min((!-25023), (!var_9))))));
    #pragma endscop
}
