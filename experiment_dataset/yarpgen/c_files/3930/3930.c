/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 = ((-38054917752361720 ? var_19 : 8));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_21 = (((((((146 ? -1733322638 : 12733141538874734306))) ? var_6 : var_10)) % -38054917752361719));
                                arr_15 [i_0] [i_1] [i_2] [i_0] [i_4] = (min((15770778288600830089 * var_14), ((((arr_14 [i_3 - 2] [i_3 - 1] [i_3 - 2] [i_3 - 3] [i_3 - 1]) ? (-9223372036854775807 - 1) : 12971)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_13;
    var_23 += var_17;
    #pragma endscop
}
