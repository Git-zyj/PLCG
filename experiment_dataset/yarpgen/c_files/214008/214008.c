/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (min((((0 / var_10) / (min(var_6, var_4)))), var_5));
    var_12 = var_3;
    var_13 = ((var_10 < ((-((var_2 ? 252 : var_8))))));
    var_14 = (min((((var_10 || (var_9 != 4543937891143651304)))), (2516208086286484264 / var_8)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = var_9;

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_16 = (min(((min(8222415233541412747, (arr_4 [i_1] [i_0])))), (((arr_6 [i_0] [i_1] [i_0] [i_2]) * 2516208086286484291))));
                    var_17 = var_6;
                    arr_7 [i_0] [i_1] [i_2] [i_0] = (arr_6 [i_0] [i_0] [i_0] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 = ((!((((arr_3 [i_0] [i_1]) - (((!(arr_1 [i_0 + 1])))))))));
                                var_19 = var_5;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_17 [i_5] [i_0] [14] [i_5] [i_6] [i_2] = (((arr_2 [i_0]) < (((arr_0 [i_0]) - 2516208086286484295))));
                                var_20 ^= 9588;
                                arr_18 [i_0 - 1] [i_0 - 1] [i_2] [i_5] [i_0] = (((15930535987423067325 <= var_1) ? (((min(var_9, var_2)))) : var_0));
                            }
                        }
                    }
                }
                for (int i_7 = 3; i_7 < 13;i_7 += 1)
                {
                    var_21 = 2516208086286484264;
                    var_22 = var_10;
                }
            }
        }
    }
    #pragma endscop
}
