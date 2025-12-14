/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, 18265103245068479729));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (arr_3 [i_1 + 1] [i_0])));
                arr_7 [i_0] = (((arr_4 [1] [i_0] [i_0]) ? var_11 : (((((max(var_12, var_6))) ? ((1 ? 15014 : 30720)) : (arr_2 [i_1] [15]))))));
                var_17 = (arr_3 [i_1 + 1] [i_1 + 1]);
            }
        }
    }
    #pragma endscop
}
