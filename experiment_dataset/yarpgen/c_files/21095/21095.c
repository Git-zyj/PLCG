/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_17 = ((min((arr_2 [i_1 + 1] [i_1 + 1]), (arr_2 [i_1 + 1] [i_1 + 1]))));
                var_18 = ((var_2 < ((-(max(65535, var_4))))));
                var_19 = (arr_5 [i_1]);
                var_20 = (max((((arr_4 [i_0]) ? ((((arr_0 [i_1]) ? var_5 : (arr_3 [i_0])))) : ((var_4 ? 4294967295 : var_10)))), var_15));
            }
        }
    }
    var_21 = ((-5194912553532027317 ? 0 : 3));
    var_22 = (var_13 ? var_7 : ((3 ? var_11 : var_11)));
    var_23 = var_10;
    #pragma endscop
}
