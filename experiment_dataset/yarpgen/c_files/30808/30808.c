/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (!var_3);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, ((((7356 / var_10) == var_6)))));
                    var_13 = (arr_5 [i_0] [i_2]);
                }
            }
        }
    }
    var_14 = (max(var_14, (7900609185847911576 / 4230224658)));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            arr_16 [i_3] [i_3] = ((((var_5 ^ var_6) ? 7900609185847911578 : ((26104 ? (-9223372036854775807 - 1) : -254954112)))) | 156);

                            for (int i_7 = 3; i_7 < 11;i_7 += 1)
                            {
                                var_15 = ((((-15006 ? 255 : (~var_1))) >> (7900609185847911567 - 7900609185847911546)));
                                var_16 = (min((arr_6 [i_3]), var_5));
                            }
                            for (int i_8 = 0; i_8 < 15;i_8 += 1)
                            {
                                arr_23 [i_3] = var_9;
                                var_17 = ((-1 ? var_6 : var_3));
                            }
                            for (int i_9 = 1; i_9 < 13;i_9 += 1)
                            {
                                var_18 = var_8;
                                var_19 = var_5;
                                arr_27 [i_3] [i_3] [i_3] [i_3] = (var_8 != var_6);
                            }
                        }
                    }
                }
                var_20 = (5229685140438034130 > -9075960424368380955);
                arr_28 [i_3] [i_3] [i_3] = ((-2 ? 96 : -2488249017603156138));
            }
        }
    }
    var_21 = (((max(52067, var_3)) ^ var_6));
    #pragma endscop
}
