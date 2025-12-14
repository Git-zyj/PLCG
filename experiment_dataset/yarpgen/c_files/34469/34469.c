/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                var_17 = (((!var_1) + (!-1588928745)));
                                var_18 ^= min((arr_8 [9] [i_1 - 1] [9] [0] [i_4]), (arr_7 [i_1 - 2] [i_2]));
                            }
                            var_19 = (arr_0 [i_1 - 2] [i_1 - 2]);
                            arr_12 [i_1] [i_1] = (~33694288);
                            var_20 += (((((arr_0 [i_0] [i_0]) ? (max(var_15, -1)) : (((~(arr_7 [8] [i_2])))))) + (!var_2)));
                        }
                    }
                }
                var_21 = (arr_3 [i_0] [i_0] [i_1 - 1]);
            }
        }
    }
    var_22 = -33694289;
    var_23 = ((33140 ? (((!(((var_6 ? var_10 : var_2)))))) : (~33126)));
    var_24 = var_10;
    #pragma endscop
}
