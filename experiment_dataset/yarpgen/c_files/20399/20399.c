/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((max((arr_0 [i_1] [i_1]), 1149893224))) << (((max((((!(arr_0 [i_0] [i_0])))), (arr_1 [i_1 + 1] [i_1]))) - 2227038590))));
                arr_5 [i_0 + 1] [i_0 + 1] = (max(127, 32753));
                var_17 = (127 ? 1 : 8322);
                var_18 = (min(var_18, (max((arr_0 [i_0 + 1] [i_1 + 1]), ((var_0 ? var_2 : var_12))))));
                var_19 = (arr_1 [10] [i_1 - 2]);
            }
        }
    }
    var_20 = ((var_12 ? (~var_10) : ((((((var_2 ? var_14 : 4294967294))) && var_4)))));
    #pragma endscop
}
