/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((((max(var_9, var_5))) ? 1963896108 : var_4));
    var_18 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 -= (((88 * 6) ? ((min(28, var_13))) : (~1)));
                    arr_8 [i_0] [i_0] &= ((min(-1873240422665960696, 8458788157838943658)));
                }
            }
        }
    }
    var_20 = (max(var_13, ((~(!var_11)))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            {
                arr_14 [i_3] [i_4] = (max((~4294967267), ((min((~170), -var_12)))));

                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_23 [i_4] [i_5 + 2] [i_7] = (max((((~var_6) ^ (min(1249034041441107624, var_8)))), ((max(((4294967272 ? 0 : 25685631)), 4294967272)))));
                                var_21 *= (max(-4558, 96));
                                arr_24 [i_3] [i_3] [i_7] [i_6] [i_4] = var_6;
                            }
                        }
                    }
                    arr_25 [i_3] [i_4] [i_4] = ((max(15872, (max(-1, 4294967272)))));
                }
                arr_26 [i_4] = (!1564588066);
            }
        }
    }
    #pragma endscop
}
