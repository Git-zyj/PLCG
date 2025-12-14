/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, 3990));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (((((((arr_0 [i_1]) ? (arr_0 [i_1]) : var_16))) ? (((arr_0 [i_1]) ? var_9 : (arr_0 [i_1]))) : (((arr_0 [i_1]) ? (arr_0 [i_1]) : (arr_0 [i_1]))))))));
                var_20 = (max(var_20, ((min((var_14 + -4412148981982320901), (((-(arr_0 [i_1])))))))));
                var_21 = (max((min(-52, (min(4412148981982320900, var_0)))), 14));
            }
        }
    }
    var_22 = (min(var_22, ((max((max((((-2147483647 - 1) ? -4412148981982320883 : -3990)), (((var_4 << (var_1 - 16818016725233202489)))))), (((!(var_11 != 304)))))))));
    #pragma endscop
}
