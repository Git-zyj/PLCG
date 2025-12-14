/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;
    var_17 = 37567;
    var_18 ^= (max((((((var_2 ? var_11 : var_11))) ? (min(var_5, var_9)) : (1 != var_6))), var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = ((var_0 >> ((((~var_8) >= (min(var_1, (arr_1 [i_0] [i_0]))))))));
                var_20 += ((((((var_8 ? (arr_3 [i_1]) : (arr_5 [i_0] [i_1] [i_1]))))) ? ((var_2 ? ((min(var_15, (arr_4 [i_0] [i_1])))) : (arr_3 [i_1]))) : ((121 << (((((arr_5 [i_0] [i_0] [i_0]) % var_8)) - 59599))))));
                var_21 -= (!var_13);
            }
        }
    }
    #pragma endscop
}
