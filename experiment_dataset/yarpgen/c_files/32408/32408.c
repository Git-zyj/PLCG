/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += (((((-(var_0 < var_3)))) ? var_4 : ((((!(~var_14)))))));
    var_17 = ((min(var_1, var_10)) << (var_8 - 3993783832));
    var_18 = ((((((((var_9 ? var_14 : var_10))) ? ((var_9 ? var_14 : var_15)) : var_12))) && var_1));
    var_19 = max(((var_13 ? var_10 : var_2)), (min(var_15, (max(var_11, -1548630200)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 ^= max((min(var_14, ((((arr_0 [i_0] [i_0]) ? 2147483630 : (arr_0 [i_0] [2])))))), (arr_1 [i_0]));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_21 = -1548630203;
                    var_22 &= (min(2145808464, 38025400));
                    var_23 |= min((min(var_0, (((var_2 - (arr_6 [1] [8])))))), ((min((((arr_4 [i_0] [i_0] [i_2]) ? (arr_5 [2]) : -1548630204)), (~6)))));
                }
            }
        }
        arr_7 [i_0] [i_0] = ((((-(((!(arr_5 [i_0])))))) << ((((((((arr_1 [i_0]) ? var_0 : var_9))) ? var_11 : (!var_2))) - 1717882660))));
    }
    #pragma endscop
}
