/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_19 = ((!(((-(arr_0 [i_2] [i_3]))))));
                                arr_12 [i_0] [i_3] [i_2] [3] [i_1] [i_0] = ((((max((arr_6 [i_4 - 1] [i_0 - 1] [i_0 - 1] [i_4 - 1]), (arr_6 [i_4 + 1] [i_0 - 3] [i_2] [i_4 + 1])))) ? -0 : (max((1540950932 | -1691113384), 13979836423478195327))));
                            }
                        }
                    }
                }
                var_20 *= ((var_0 ? ((((arr_10 [i_0 - 4] [i_0 - 1] [i_0 - 1]) | (~var_11)))) : (~var_6)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 7;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 8;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_21 = min(-1, 165);
                                var_22 = (var_14 - -12);
                                arr_27 [i_5 + 1] [i_5] [i_6 + 2] [i_6 + 2] [i_5] [i_5] [i_6 + 2] = ((~((((((1073740800 ? 1454276717 : 14936373099651370731))) || ((max(14936373099651370731, -6))))))));
                            }
                        }
                    }
                    var_23 = (min((~var_17), ((max((arr_17 [i_5] [i_6] [9]), 840674876)))));
                }
            }
        }
    }
    var_24 = var_15;
    #pragma endscop
}
