/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((var_1 | var_11) ? (min(((3140846685 ? 2844702359 : 3567896995)), 2964316299)) : (~var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_8 [i_0] = (((arr_3 [i_0 + 2] [17]) != (arr_3 [i_0 + 2] [i_1])));
                var_19 = (min(var_19, (!var_17)));
                arr_9 [i_0] [i_0] = (~(((((12 ? var_9 : var_15))) ? var_10 : (!var_1))));
            }
        }
    }
    var_20 *= min(((var_8 | ((var_0 ? var_2 : var_17)))), (((var_12 + var_4) ? 12 : (min(var_12, var_17)))));
    var_21 = (max(var_21, -var_7));
    #pragma endscop
}
