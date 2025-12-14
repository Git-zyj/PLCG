/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((((max(var_4, var_3))) || var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_19 = (((arr_3 [i_0]) / ((((var_6 > (arr_3 [i_0])))))));
                            var_20 = ((-((72053195991416832 ? ((var_7 << (var_14 - 394736636))) : var_9))));
                            arr_11 [9] [i_0 - 2] [i_3] [4] [i_3] [i_0 - 2] = (~-var_8);
                        }
                    }
                }
                var_21 = (min((min(var_5, (arr_0 [i_0 + 2]))), -18));
            }
        }
    }
    #pragma endscop
}
