/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231486
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = var_0;
                var_21 = ((max(32758, 614848668)));
            }
        }
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_22 *= (!var_19);
        var_23 = var_6;
        var_24 = 65526;

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_25 = ((!(((arr_8 [i_3] [i_3]) && ((max((arr_10 [19]), var_6)))))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            var_26 = 3576559795;
                            arr_19 [i_5] = (arr_12 [i_2] [i_2] [8] [i_5]);
                        }
                    }
                }
            }
            var_27 = -72;
            var_28 = 30583;
        }
        arr_20 [i_2] = ((1628555817 ? -30589 : 153));
    }
    var_29 = var_7;
    #pragma endscop
}
