/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((max(9223372036854775807, var_5)));
    var_19 = (max(var_19, -24108));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = ((((((((-24088 ? -24108 : (arr_4 [i_0] [i_0])))) ? -24108 : 24111))) ? var_3 : (((arr_0 [i_1 - 2]) ? -17 : (arr_0 [i_1 - 2])))));
                var_21 = (min(var_21, (((-var_17 == (((((arr_3 [i_0] [1]) == 24107)) ? 7468 : ((var_15 ? -24107 : -7466)))))))));
                var_22 ^= ((max(var_4, -var_6)));
                var_23 = (((~(arr_2 [i_0] [i_0] [i_0]))));
                var_24 ^= (((min((arr_2 [i_0] [i_0] [i_1 - 2]), 24122))) ? 43 : (max(((~(arr_1 [i_0] [i_1 + 2]))), (arr_4 [i_1 + 3] [i_1]))));
            }
        }
    }
    var_25 += ((((((min(var_8, var_3))) == -var_0)) ? ((var_13 ? 22734 : (var_0 % var_17))) : (((!(((137438953471 ? var_11 : var_4))))))));
    var_26 += (((~var_17) | var_14));
    #pragma endscop
}
