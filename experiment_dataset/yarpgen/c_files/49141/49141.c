/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_3);
    var_20 *= 123;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_21 = 301851704;
                            var_22 = ((-95 != (((arr_3 [i_2 + 2] [i_1 - 1]) - (arr_3 [i_2 + 2] [i_1 - 1])))));
                            var_23 += ((var_10 >= 780713756) >= (min((((var_9 || (arr_6 [i_1] [i_1 - 1] [8])))), (((arr_4 [i_0]) ? 3784273161 : 3784273136)))));
                            var_24 ^= (arr_8 [i_0] [i_0] [i_0] [i_0]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_25 = (((((((arr_6 [18] [i_0] [i_0]) ? var_0 : -66))) ? ((1346922326 ? (arr_4 [i_0]) : -69)) : (((arr_6 [i_0] [i_0] [i_0]) ? 1346922342 : var_14)))) > 2091542667);
                            arr_14 [i_0] [i_0] [i_0] [1] [1] [i_0] = (arr_8 [7] [4] [18] [i_5]);
                        }
                    }
                }
                var_26 -= (max((((arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? (arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))), ((max((arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]), 78)))));
                var_27 = var_10;
            }
        }
    }
    #pragma endscop
}
