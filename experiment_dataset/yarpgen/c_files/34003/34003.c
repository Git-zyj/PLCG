/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_1 | (((~22) ? ((min(var_7, var_12))) : ((min(var_12, var_14)))))));
    var_16 = (min(var_16, (64 * 241)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, ((((((~(min((arr_1 [i_1]), (arr_4 [i_1] [8])))))) ? (arr_1 [i_0]) : ((-var_8 ? var_8 : (((arr_4 [9] [i_0]) ? (arr_6 [i_0] [i_1] [i_0]) : (arr_5 [i_0] [i_1] [i_2 + 1]))))))))));
                    var_18 += (141 - (min(var_13, (-3122302411071990415 != var_0))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_19 = var_4;
                                var_20 = ((+(min((arr_11 [i_0] [i_0] [i_1] [i_1] [11] [i_0]), 3122302411071990392))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((var_9 ? var_4 : var_3));
    var_22 = ((~(~-6)));
    #pragma endscop
}
