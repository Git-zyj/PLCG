/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= ((((var_4 - ((var_14 ? -37 : var_15))))) ? ((var_7 ? 127 : (max(1538303184, var_13)))) : ((max(((var_6 ? -1796999182 : var_2)), var_7))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 &= -59;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_18 |= (arr_7 [i_3 - 2] [i_3 - 1] [i_3] [i_3] [i_3]);
                            var_19 |= ((((((!-59) ? var_5 : 1535531207))) ? ((((arr_7 [i_3] [i_3 + 2] [i_3 + 2] [i_3] [i_3 + 2]) && (arr_7 [i_3] [i_3 + 2] [i_3 + 3] [i_3 - 1] [i_3])))) : (((!(min(0, 1)))))));
                        }
                    }
                }
            }
        }
    }
    var_20 = (~var_8);
    #pragma endscop
}
