/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    var_17 = ((4294967291 * (((!4294967272) ? var_5 : (min(13, 4294967291))))));
    var_18 = ((((var_1 || var_2) ? var_7 : (!var_11))) | ((65535 ? 4 : 4294967295)));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0 - 1] [i_0] = ((((((((((arr_0 [i_0]) && -18022)))) | 4294967272))) ? (min(47096, (arr_0 [i_0]))) : (((var_12 ? ((var_0 ? 18440 : var_15)) : (((var_11 ? 4294967291 : (arr_0 [i_0 + 1])))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = (var_9 ? (((((var_13 ? (arr_4 [i_2]) : (arr_6 [i_2] [i_0] [i_0]))) < (264710660 / var_0)))) : (arr_0 [i_0 - 1]));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_19 = (((((arr_0 [i_0]) || (arr_6 [i_0] [i_0] [i_0 - 1]))) ? (arr_1 [i_0]) : ((min((arr_0 [i_0]), (arr_1 [i_0 - 1]))))));
                                var_20 = (max(var_20, (~18409)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
