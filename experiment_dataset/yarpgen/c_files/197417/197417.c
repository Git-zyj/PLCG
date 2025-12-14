/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_16 = (min(((84 ? var_10 : ((((arr_1 [i_0]) && 172))))), var_10));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_10 [i_3] = (((1 != (((arr_7 [i_0] [16] [i_0] [i_3]) | 1)))));

                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            var_17 = (((arr_11 [8] [i_0] [i_0 - 1] [i_0 - 3] [i_2 + 2] [i_3] [i_3]) ? 458111330903078725 : (arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_2 + 1] [i_2] [i_3])));
                            var_18 = (((min((((84 << (((arr_1 [i_0]) - 1388561584399422382))))), (2713166576 + 28039))) - (((((arr_6 [i_2 - 2] [i_0]) == (arr_9 [i_0 - 2] [i_3 - 1] [0] [i_0 - 2] [i_3])))))));
                            var_19 = var_9;
                        }

                        for (int i_5 = 2; i_5 < 16;i_5 += 1)
                        {
                            var_20 = (arr_1 [i_0]);
                            var_21 += ((((((arr_13 [i_0 + 1]) < (1 != 10053351026216144122))))) * ((-77 ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 - 2]))));
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_22 = (((1 & (1 & -79007550))));
                            arr_19 [i_0] [i_0 + 1] [i_0] [i_0] [i_3] = var_7;
                            var_23 = (max(var_23, 2151622109));
                        }
                        var_24 ^= ((+(((arr_4 [i_1] [i_3 - 1]) << (((arr_4 [i_0 - 2] [i_3 + 1]) - 226909966))))));
                        var_25 = (172 == -2143345186);
                    }
                }
            }
        }
    }
    #pragma endscop
}
