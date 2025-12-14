/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = (min(var_18, ((((((((arr_3 [i_0] [i_0]) ? (arr_0 [i_0]) : var_10))) ? (var_6 && var_5) : (((!(arr_4 [i_0] [i_1]))))))))));
                var_19 = (max(var_19, ((((((arr_5 [i_0] [i_1]) ? var_7 : 1)) & (((((var_6 ? -122 : 62699))))))))));

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    var_20 = (min(var_20, var_8));
                    var_21 = (max(var_21, (((122 ? var_12 : var_14)))));
                    var_22 = (min(((((arr_4 [i_2] [i_0]) < 7168))), ((~(min(var_3, var_5))))));
                }
            }
        }
    }
    var_23 = (min(var_23, -122));
    var_24 = var_9;
    #pragma endscop
}
