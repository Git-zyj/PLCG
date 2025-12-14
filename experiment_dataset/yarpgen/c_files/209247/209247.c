/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -2772079027672530346;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_12 |= ((((((!956263728) == 6120030068101003046))) + (!-103)));
                                var_13 = (min(var_13, 3338703579));
                            }
                        }
                    }
                    var_14 = ((-((((min(-25521, 6120030068101003040)) != (!6120030068101003046))))));
                    var_15 = 3338703567;
                }
            }
        }
    }
    #pragma endscop
}
