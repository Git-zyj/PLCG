/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207559
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 = 2147483635;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        var_20 = (((-2147483631 | 2147483635) != 2147483636));
                        arr_12 [i_0] [i_1 + 2] [i_1 + 2] [i_3] = (~885587462);
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        var_21 = (((max(927490837, 2147483635))));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_22 = 23471;
                            var_23 = -389657184;
                            var_24 = (~2147483647);
                        }
                    }
                    var_25 = (((~1900192583) != (((~((min(34628, 40658))))))));
                    var_26 = (~1);
                }
            }
        }
    }
    var_27 = 1140125749;
    #pragma endscop
}
