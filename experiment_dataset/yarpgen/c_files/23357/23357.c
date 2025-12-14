/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((((max(-var_6, var_5))) ? -55855 : (max(var_10, (~7736114499513755494))))))));
    var_18 = 3637840879;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_19 ^= (max((((((var_9 ? var_16 : 0))) / ((-(arr_7 [i_0] [i_0]))))), ((min(var_7, var_15)))));
                            arr_10 [15] [i_0] [i_2] = ((((((min((arr_2 [i_2] [i_0]), var_1)) % -550463914))) ? ((((~1020744727) ? -660716411 : 69))) : ((((((arr_1 [i_0]) ? 0 : (arr_7 [i_0] [i_0])))) | ((65 / (arr_8 [i_0] [i_1] [i_2] [9] [i_0] [i_0])))))));
                            var_20 = ((((((var_6 ? var_6 : -1822543307489270707)) ? ((3637840864 ? -660716420 : -2145026818)) : (var_1 / var_16)))));
                        }
                    }
                }
                arr_11 [i_0] = (((((max(1205968132, -404482475)))) ? var_2 : ((((var_0 + (arr_4 [i_0] [1] [i_0])))))));
            }
        }
    }
    var_21 = var_2;
    #pragma endscop
}
