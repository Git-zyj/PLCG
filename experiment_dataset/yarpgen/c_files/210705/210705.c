/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max(-50, var_10))) ? var_10 : var_6));
    var_14 += ((((((~var_9) & (var_9 == var_2)))) | (max((18446744073709551615 & var_10), ((min(var_11, var_2)))))));
    var_15 -= -14828625432708059813;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3] [i_4] = (min(14828625432708059804, (arr_8 [i_0] [i_0] [12] [i_0] [i_0] [i_0])));
                                var_16 = (((min((1 > 9223372036854775807), (1 & var_2))) > (var_6 & 391899563)));
                            }
                        }
                    }
                    var_17 -= (max((((arr_3 [8] [8]) / var_5)), -11));
                }
            }
        }
    }
    var_18 = 914084302;
    #pragma endscop
}
