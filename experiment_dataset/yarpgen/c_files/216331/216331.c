/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min((min((min(9223372036854775807, 102)), var_3)), -var_13);
    var_17 -= 1;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_1] = (!1);
            var_18 = 52242;
            var_19 = (!35184372088831);
            arr_6 [i_1] [i_1] = (~92);
        }
        var_20 = (max(var_20, -1116797154));
        arr_7 [i_0] = 0;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            {
                                arr_20 [i_3] [i_2] [i_3] [12] [i_5] = (!3790677062230674528);
                                var_21 = (!-4014863442407382033);
                                var_22 -= ((-(min(35184372088831, -9223372036854775807))));
                                arr_21 [i_0] [i_3] [i_3 + 1] [i_4] [i_5] = 6;
                            }
                        }
                    }
                    arr_22 [i_3] [i_2] [i_3] [i_3] = (min((!1), 20850));
                }
            }
        }
        arr_23 [i_0] = (min((~0), (~9223372036854775806)));
    }
    #pragma endscop
}
