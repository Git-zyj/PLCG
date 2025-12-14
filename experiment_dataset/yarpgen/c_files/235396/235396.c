/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, 9150245559017935298));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [1] [i_0] = (min((arr_0 [i_0 - 1]), ((-(arr_0 [i_0 - 3])))));
                var_13 = 0;
            }
        }
    }
    var_14 -= (((max((max(17887476557368396021, 65151)), (((var_8 ? var_9 : var_11))))) >= var_0));
    #pragma endscop
}
