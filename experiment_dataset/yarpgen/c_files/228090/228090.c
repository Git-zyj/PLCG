/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(((20321 ^ var_12) >> (((1988089298 >> var_5) - 7554))))));
    var_15 = 20321;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (((((((((65535 >= (arr_3 [i_0] [i_1]))))) >= (min((arr_0 [i_0 + 2]), var_8))))) * 20321));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_3] [9] [15] [i_4] = (((((arr_10 [i_0] [i_1] [i_2] [i_3]) * (((20321 / (arr_6 [i_2] [14] [9]))))))) * (min(((min((arr_1 [i_3] [i_4 - 1]), (arr_10 [i_4] [i_3] [i_2] [i_1])))), 0)));
                                arr_15 [i_0] [i_3] [i_3] [i_1] [i_0] = (i_3 % 2 == 0) ? ((((min((max(var_7, 65535)), var_7)) << (((((max((arr_11 [i_3]), (arr_0 [i_0]))) << (((arr_11 [i_3]) - 2624078833)))) - 1300234236))))) : ((((min((max(var_7, 65535)), var_7)) << (((((((max((arr_11 [i_3]), (arr_0 [i_0]))) << (((((arr_11 [i_3]) - 2624078833)) - 3622217126)))) - 1300234236)) - 2871443437)))));
                                var_17 ^= (min((arr_0 [i_0]), (max((!1078767509004624990), ((var_8 + (arr_5 [i_3] [i_2] [i_1])))))));
                            }
                        }
                    }
                }
                arr_16 [i_1] [i_0] |= (((0 + -0) ? 65535 : ((-(arr_5 [i_0 - 1] [i_0] [i_0 - 1])))));
            }
        }
    }
    var_18 ^= 12639;
    #pragma endscop
}
