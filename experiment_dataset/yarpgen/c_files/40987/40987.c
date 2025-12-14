/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] |= ((1 ? ((1 ? 1 : 1)) : (~var_3)));
                var_13 = (((((((arr_2 [i_0]) ? (arr_0 [i_0] [i_1]) : var_4)) / (arr_4 [i_0] [i_0])))) ? var_11 : (~var_4));
                arr_6 [i_0] [i_1] = -32225;
                arr_7 [i_0] [i_1] = (min((((var_8 ^ ((var_8 ? (arr_4 [i_0] [i_1]) : var_0))))), var_5));
                var_14 = (min(var_14, (arr_4 [i_0] [i_0])));
            }
        }
    }
    var_15 = (~var_10);
    var_16 |= (min((((var_4 ? -32741 : ((var_10 ? var_11 : var_7))))), (((var_9 < 4120219100765822693) ? (((16 ? var_7 : var_11))) : (max(var_12, var_8))))));
    var_17 = (((4294967295 + 1) ? var_3 : -var_12));
    var_18 = (max((var_10 == var_11), var_3));
    #pragma endscop
}
