/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = (((((-1 ? ((~(arr_3 [i_1]))) : -1))) ? ((var_12 ? ((51 ? (arr_3 [i_0]) : (arr_0 [i_0] [5]))) : (arr_1 [i_0]))) : (~var_12)));
                var_16 = ((-(min(((307069341 ? (arr_1 [i_0]) : var_6)), (((-1 ? (arr_4 [i_1] [i_1]) : -1)))))));
            }
        }
    }
    var_17 = ((((((-5549530087002970123 ? 7861 : -7834655247126715966)))) && ((max(var_8, ((1432433648 ? var_12 : 20672)))))));
    var_18 -= var_13;
    var_19 = var_5;
    var_20 = (((-(var_14 * 2047))));
    #pragma endscop
}
