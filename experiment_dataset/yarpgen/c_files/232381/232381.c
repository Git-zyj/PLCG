/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += ((3666513946 ? 151 : 104));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = (min(var_18, ((min((((((3885150740779622192 * (arr_1 [i_1])))) ? (0 * 3287701556) : (arr_4 [i_0] [i_1]))), 3287701555)))));
                var_19 = (arr_4 [i_0] [i_0]);
                var_20 |= ((min((arr_5 [i_0 + 2] [i_1] [i_0 - 2]), (arr_4 [i_0 - 3] [i_1]))) ^ ((min(536870912, 17))));
                var_21 = (max(var_21, (((((max(17591649173504, 3287701566))) ? (max(14, -60)) : (max(246, 469038855)))))));
            }
        }
    }
    var_22 = (((((var_15 ? 1007265722 : 10))) ? ((-1534023784759910689 ? (var_4 != var_12) : ((0 ? var_8 : 8741)))) : var_4));
    #pragma endscop
}
