/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -3740856773341619826;
    var_16 = 3740856773341619798;
    var_17 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 = (min(1580, -6457));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_9 [i_0 + 3] [i_1] [i_1] [i_2] = (arr_8 [i_0 - 2] [i_2 + 1] [i_3] [i_3]);
                        var_19 ^= ((((arr_7 [i_0 - 2] [i_2 - 1] [i_2 - 1]) ? 62 : (arr_7 [i_0 + 1] [i_2 - 1] [i_2]))) << ((((arr_7 [i_0 - 1] [i_2 - 1] [i_2 - 1]) > 1580))));
                    }

                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        var_20 = var_3;

                        for (int i_5 = 1; i_5 < 7;i_5 += 1)
                        {
                            arr_15 [i_0] [i_1] [i_2] = (arr_5 [i_0] [4] [i_2 - 1]);
                            arr_16 [i_5] [i_4] [i_2] [i_2] [i_1] [i_0] = (11621710573996240078 | -64);
                        }
                        for (int i_6 = 2; i_6 < 10;i_6 += 1)
                        {
                            var_21 = -351485802189688314;
                            var_22 ^= var_12;
                        }
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_23 -= (((max((((arr_1 [i_4 + 1] [i_0]) ? 1580 : (arr_12 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2]))), (arr_23 [4] [i_1] [i_2] [i_7]))) > ((((arr_11 [i_0 + 2]) ? ((max(-1581, -28994))) : (arr_0 [i_1]))))));
                            arr_25 [i_1] [i_2 + 1] [i_1] [i_2] = (arr_19 [i_7] [i_2] [8]);
                            var_24 = (min(var_24, 1571));
                            arr_26 [2] [i_1] [i_2 + 1] [i_7] [i_2] = (!var_11);
                        }
                    }
                }
            }
        }
    }
    var_25 = var_6;
    #pragma endscop
}
