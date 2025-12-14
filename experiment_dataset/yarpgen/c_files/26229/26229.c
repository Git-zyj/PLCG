/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26229
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((min(((var_9 ? (!49011) : (!var_3))), var_15)))));
    var_19 = var_13;
    var_20 ^= (((((~(~1)))) ? (((~var_8) ? var_4 : (var_11 & var_17))) : var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [12] = (arr_4 [i_0]);
                var_21 = (arr_2 [i_0]);
            }
        }
    }
    var_22 = var_9;
    #pragma endscop
}
