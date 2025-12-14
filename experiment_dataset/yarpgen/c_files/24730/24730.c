/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (min(var_7, (((1638944368 ? 2656022928 : 17881)))));
    var_18 = var_7;
    var_19 = ((var_10 ? var_0 : (((!var_10) ? var_16 : ((1638944367 ? var_14 : 1638944367))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = ((((arr_5 [i_0]) < (((16352 << (var_10 - 3217311639414909332)))))));
                var_21 = ((((min((arr_6 [1] [i_1]), var_13))) ? (arr_6 [i_1] [i_1]) : (((arr_6 [i_0 + 1] [1]) - (arr_6 [i_0 - 1] [i_1])))));
                var_22 = ((!(arr_5 [13])));
                var_23 = ((min(((((arr_3 [i_1]) == (arr_6 [i_1] [i_0 + 1])))), (((arr_1 [i_0]) ? (arr_6 [i_0 - 1] [i_1]) : var_14)))));
            }
        }
    }
    #pragma endscop
}
