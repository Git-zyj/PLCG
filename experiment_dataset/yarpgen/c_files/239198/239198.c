/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((~4068244578) << (((max((~9), (2147483643 ^ var_2))) - 4294967257))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_8 [i_3] [i_2] [i_2] [i_1] [i_2] [i_0] = 14524420190424713076;
                            arr_9 [i_2] = ((!((((arr_3 [i_0 + 2]) ? (arr_3 [i_0 - 2]) : var_8)))));
                        }
                    }
                }
                var_11 += ((((!(((var_8 ? -511837293 : 1692976832))))) ? ((((arr_0 [i_0]) - ((1692976815 ? 1692976832 : 1692976801))))) : ((~(max(var_5, 18446744073709551615))))));
            }
        }
    }
    var_12 = var_0;
    #pragma endscop
}
