/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~(((var_4 < var_12) % var_7))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_18 = arr_0 [i_2];
                            arr_12 [i_0] [i_1] [i_2] [i_3] = (((((~(((arr_4 [i_3]) - (arr_11 [i_0] [i_1] [i_3])))))) && (((-(var_14 / var_0))))));
                            var_19 ^= (((arr_9 [i_0] [i_0] [6] [9]) && (((((((arr_8 [i_0] [i_2] [i_3]) ? var_10 : (arr_10 [i_2] [i_2] [13])))) ? (arr_2 [i_3]) : ((50539 ? 10747472138990592731 : 34203)))))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [20] &= ((((arr_1 [i_3]) ? ((var_11 ^ (arr_9 [i_0] [i_0] [i_1] [i_3]))) : (arr_11 [7] [15] [16]))) - (arr_6 [i_3] [i_2] [16] [i_0]));
                            var_20 = (min(var_20, (arr_6 [i_0] [i_1] [i_2] [i_3])));
                        }
                    }
                }
                arr_14 [i_0] = ((((arr_7 [i_0] [i_0] [i_0]) * (arr_2 [i_0]))) / (arr_9 [i_0] [i_0] [i_0] [14]));

                for (int i_4 = 4; i_4 < 20;i_4 += 1)
                {
                    var_21 = (((((arr_8 [i_4 - 3] [i_4 - 3] [i_4]) && (arr_5 [i_4 - 2] [i_4 - 1] [i_4 - 4]))) || (arr_3 [i_0])));
                    var_22 = (max(var_22, (arr_15 [i_1] [i_1])));
                }
            }
        }
    }
    var_23 = var_1;
    var_24 = (min(var_24, (14179007142834616920 <= 18600)));
    #pragma endscop
}
