/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;
    var_20 = var_10;
    var_21 = (max(var_21, var_18));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1 - 1] [4] [i_0] = (max(-2, (arr_3 [i_1 + 3] [i_1] [i_1 + 1])));
                var_22 *= ((((max(0, -11576))) ? ((min(var_12, (arr_3 [i_1 + 1] [i_1 + 3] [i_1 - 1])))) : (((arr_3 [i_1] [i_1] [i_1 + 4]) % 14827))));
            }
        }
    }
    #pragma endscop
}
