/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((((31 < (2199023255551 <= 2199023255572)))), 2199023255528));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_19 ^= (max((((-((14 ? 65530 : 93))))), ((0 ? 2199023255551 : 119823014))));
                arr_4 [i_0] [i_0] = (max(32767, var_3));
                arr_5 [i_1] [i_1] [7] = ((((((((65530 ? var_17 : 2199023255551))) ? ((235 ? var_0 : var_5)) : ((var_14 ? var_3 : var_2))))) && ((((var_4 == var_13) ? ((var_10 ? var_4 : 65490)) : (14 == var_11))))));
                arr_6 [i_1] [i_0 - 3] [i_0 + 1] = ((!(((65486 ? var_14 : var_10)))));
            }
        }
    }
    #pragma endscop
}
