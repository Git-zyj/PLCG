/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_11 = (((arr_3 [i_0] [i_0]) < (arr_3 [i_0] [i_0])));
                arr_5 [4] [4] = (min((((((arr_0 [i_1]) ? var_3 : var_1)))), (((arr_0 [i_0]) ? 2644778286642220470 : (((min((arr_4 [i_1]), var_8))))))));
                arr_6 [i_0] [i_1] [i_0] = (arr_4 [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_12 = -var_6;
                            var_13 = (arr_10 [i_1] [i_2] [i_3]);
                            var_14 = (((((-((min(var_2, (arr_9 [i_1]))))))) ? 18758 : ((1847134756 & (max((arr_11 [i_0] [i_0] [i_0] [i_0]), (arr_11 [i_0] [i_1] [i_2] [i_3])))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            {
                var_15 = ((((((1148417904979476480 | (arr_3 [i_4] [i_5]))) ^ (((-51 ? (arr_16 [0] [0]) : (arr_8 [i_4] [i_5] [i_5])))))) & ((min((~var_8), (max(-916095847, 187)))))));
                var_16 = ((var_8 ? ((max(var_3, var_10))) : 916095824));
                arr_17 [i_5] = var_8;
                var_17 = (max((arr_0 [i_4]), (arr_4 [i_4])));
                var_18 += ((max(((2147483647 | (arr_3 [1] [i_5]))), (~107))));
            }
        }
    }
    var_19 = var_1;
    var_20 = (((min((~var_3), -654290631)) < 1));
    var_21 *= var_9;
    #pragma endscop
}
