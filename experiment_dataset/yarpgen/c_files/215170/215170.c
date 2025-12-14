/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((min(var_1, var_15)))) ? (((!var_4) ? (min(var_9, 477556707128277033)) : var_10)) : (((-1214357548 ? 0 : 0)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = (max((((arr_0 [i_1 + 2]) ? (arr_0 [i_1 - 1]) : (arr_0 [i_0 + 1]))), (min(var_10, (arr_0 [i_0 - 2])))));
                arr_6 [i_0] [15] = ((!var_9) ? (((arr_2 [i_1] [i_1 - 1]) ? (arr_2 [i_1] [i_1 + 2]) : (arr_4 [i_0] [i_1 + 3]))) : ((var_17 ? (arr_4 [i_1 + 3] [i_1 + 3]) : (arr_4 [i_0] [i_1 + 1]))));
                var_20 = (((max(var_0, ((237 ? var_13 : -24281))))) ? 255 : (arr_2 [i_0] [i_1 + 1]));
            }
        }
    }
    var_21 |= ((((max(20, var_16))) / (((max(1904272265, 24276)) | var_13))));
    #pragma endscop
}
