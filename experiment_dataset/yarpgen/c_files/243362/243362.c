/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_17, var_9));
    var_21 = var_19;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = -15581;
                var_22 = ((15561 ? 22191 : (--15161833534189262238)));
                var_23 *= (arr_3 [6]);
            }
        }
    }
    #pragma endscop
}
