/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((var_9 ? -82 : var_11));
    var_14 = (((min(var_3, (var_7 ^ var_6))) - (~var_11)));
    var_15 = ((-(var_11 / var_10)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] &= var_5;
                arr_7 [i_0] [i_0] = ((((((((arr_4 [i_0]) ? -82 : var_1))) ? ((min(10147, 82))) : ((min(var_11, (arr_4 [i_1]))))))) ? ((82 ? (min((arr_3 [i_0] [i_1]), (arr_0 [i_0] [i_1]))) : (((min(58, -115)))))) : ((((!0) ? (((arr_1 [i_0]) ? (arr_5 [i_0] [i_1] [i_0]) : var_12)) : 8388607))));
                var_16 += (arr_2 [i_1]);
                var_17 = (max(var_17, (((+((min((-32767 - 1), 0))))))));
                var_18 += ((((arr_2 [i_0]) && var_4)) || ((min(var_3, -82))));
            }
        }
    }
    var_19 = var_9;
    #pragma endscop
}
