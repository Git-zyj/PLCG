/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = (max(((var_9 && ((((arr_4 [i_0]) ? -66 : 3))))), (((!var_6) && (arr_2 [i_0] [i_1 - 2] [i_0])))));
                var_15 = (min(var_15, (((!(!var_5))))));
            }
        }
    }
    var_16 = var_12;
    #pragma endscop
}
