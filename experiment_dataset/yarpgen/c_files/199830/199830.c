/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_20 = min((max(var_19, var_11)), 32767);
                            var_21 = ((((((0 <= ((-30374 ? var_17 : (arr_7 [i_3] [i_2] [i_1] [i_0]))))))) & ((-(max(var_8, -6850966258700898398))))));
                            arr_10 [i_3] [i_2] [i_1] [i_0] = (1408045410 != 9525);
                        }
                    }
                }
                var_22 = (min(var_22, -37));
                var_23 -= ((1073741808 + (((((max(-97, var_15))) != ((-1 ? -1769550153 : -6850966258700898384)))))));
            }
        }
    }
    var_24 = ((((((((var_18 ? var_10 : var_7))) ? (var_13 & -20186) : -var_12))) ? ((((2043096031 ? 0 : 810803768)) ^ (((min(var_8, -56)))))) : var_13));
    #pragma endscop
}
