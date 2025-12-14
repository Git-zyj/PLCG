/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (!var_14)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_21 = max(((((max((arr_7 [i_0] [i_0] [i_0]), (arr_6 [i_3] [i_1] [i_2] [i_2])))) ? ((min(var_2, (arr_0 [i_0] [i_3])))) : ((var_16 ? 18446744073709551615 : (arr_0 [i_0] [i_0]))))), var_18);
                                var_22 *= (((arr_12 [i_4] [i_3 - 1] [i_2] [i_1] [i_0]) ? 2199023255552 : (--2199023255559)));
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_1 - 1] [i_1] = ((65535 * ((var_0 ? (((arr_6 [i_0] [i_1 - 2] [i_1 - 1] [i_0]) ? 2199023255524 : (arr_12 [i_0] [2] [i_0] [i_0] [i_0]))) : ((((arr_8 [i_0] [i_1] [12] [i_1]) - (arr_8 [i_0] [i_0] [i_0] [i_0]))))))));
            }
        }
    }
    var_23 = var_18;
    #pragma endscop
}
