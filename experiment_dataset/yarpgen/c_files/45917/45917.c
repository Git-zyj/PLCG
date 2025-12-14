/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0 - 2] = (!127);
                var_12 = ((-((-32 ? 71 : 25141))));
            }
        }
    }
    var_13 = (((((max(32514, var_9)))) ? (((var_10 - var_5) / ((4188 ? 25141 : var_11)))) : (((!(var_1 | var_4))))));
    #pragma endscop
}
