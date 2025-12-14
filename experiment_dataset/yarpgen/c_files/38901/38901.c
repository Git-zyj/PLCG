/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_2 ? (min(var_15, var_17)) : var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] = (161 ? 95 : (((arr_1 [i_0]) | var_16)));
                var_19 = (((176 & 95) ? ((~(161 ^ 80))) : (arr_0 [i_0] [i_1])));

                for (int i_2 = 4; i_2 < 17;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] = (arr_3 [i_2 - 1] [i_2 - 1] [i_2 - 2]);
                    var_20 = ((76 ? 161 : 76));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_21 = ((var_10 ? ((max((arr_0 [i_0] [i_0]), var_11))) : (arr_0 [i_0] [i_0])));
                    var_22 -= (max(76, (((arr_6 [i_0] [i_1] [i_3]) - var_8))));
                    var_23 = (max(var_23, (((max((((var_3 >= (arr_2 [i_3] [i_1] [i_0]))), ((161 ? var_3 : (arr_10 [i_0]))))))))));
                }
                arr_11 [i_1] = (((!var_6) ? 176 : (min((arr_7 [i_0]), (arr_5 [i_0] [i_0] [i_1])))));
                arr_12 [i_1] = ((var_13 ? var_4 : (arr_1 [i_1])));
            }
        }
    }
    var_24 |= var_9;
    var_25 = ((((max(((min(80, var_17))), var_8))) ? var_9 : (((~161) ? var_4 : (~var_9)))));
    #pragma endscop
}
