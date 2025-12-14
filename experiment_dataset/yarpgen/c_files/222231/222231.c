/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-1 ? 0 : 8912656692437093461));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = ((~(((!var_9) ? (((var_4 && (arr_1 [i_0])))) : var_1))));
                var_21 = var_17;
                arr_7 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
                arr_8 [1] = (min((arr_4 [1] [i_0] [i_0]), ((((-(-32767 - 1))) & var_15))));
            }
        }
    }
    var_22 = (8912656692437093461 ? (((var_3 ^ 0) ? (!var_6) : (var_12 != var_11))) : (((var_18 != (min(8912656692437093446, var_8))))));
    #pragma endscop
}
