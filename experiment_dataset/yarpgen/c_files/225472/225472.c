/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_1 < ((max(var_10, var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 *= ((-7918 ? (((-7921 - -7908) ? (((7915 ? 19393 : 19393))) : 7169261644697800822)) : (arr_1 [16])));
                var_16 = ((((((arr_3 [i_0 - 1] [i_0 - 1] [17]) ? -7923 : (arr_3 [i_0 - 1] [i_0 - 1] [i_1])))) ? (arr_0 [i_0 - 1]) : (((-7885 / (arr_2 [i_0 - 1]))))));
            }
        }
    }
    #pragma endscop
}
