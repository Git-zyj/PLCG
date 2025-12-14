/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_10;
    var_15 = var_13;
    var_16 = (~(min((var_1 < var_12), var_7)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (arr_0 [0])));
                var_18 = (max(var_18, ((min((((((0 ? var_1 : var_13))) ? (((arr_0 [8]) ? 0 : var_1)) : ((var_3 ? (arr_0 [4]) : (arr_1 [i_0] [i_1]))))), (((arr_0 [0]) >> (1 % -1744726320))))))));
                var_19 &= ((+(((arr_1 [i_0] [i_1 - 1]) ? (arr_3 [i_0] [i_1 - 1]) : (arr_3 [i_0] [i_1 + 1])))));
            }
        }
    }
    var_20 = ((~((~((var_0 << (((var_9 + 7997514462508540210) - 29))))))));
    #pragma endscop
}
