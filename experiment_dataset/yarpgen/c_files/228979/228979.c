/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = var_9;
                var_12 *= (min(var_4, 63));
                var_13 = (((min((63 - -63), (54095 * 0)))) ? var_5 : (((max(var_1, var_8)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_14 += (((1014567258 ? 3280400038 : 1014567273)));
                                var_15 = (max(var_15, ((((~var_0) == 828)))));
                            }
                        }
                    }
                }
                arr_16 [i_0] [16] [i_1] = (min(-231, 3280400037));
            }
        }
    }
    var_16 = (min(var_16, ((-63 ? (((((-65 ? 1014567259 : 132120576)) != 0))) : var_1))));
    #pragma endscop
}
