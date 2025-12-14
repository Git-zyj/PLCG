/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((((((5502299766628495636 ? -57 : var_1))) ? ((var_15 ? var_10 : var_12)) : (var_1 * var_10))), (1 == 18446744073709551615)));
    var_18 = ((var_1 ? (~var_3) : ((max((!var_2), var_1)))));
    var_19 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = (((((-(arr_2 [i_1 - 1] [i_1 - 1])))) == (arr_1 [i_0])));
                    var_21 = ((((((arr_1 [i_1 - 1]) ? (arr_1 [i_1 + 1]) : (arr_2 [i_1 + 2] [i_1])))) ? (((((arr_2 [i_1 - 1] [15]) || (arr_2 [i_1 + 1] [i_1]))))) : (((arr_2 [i_1 - 1] [6]) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
