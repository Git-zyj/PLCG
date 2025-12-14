/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((((((max(-1275700321, var_3)) >> 1)) > var_3)))));
    var_18 = ((((((min(var_13, -10467))) ^ 1)) & ((1 & ((var_14 ? var_16 : 1))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_19 = var_9;
                                var_20 = (min(var_20, ((((-1 + 2147483647) << (((arr_7 [i_0] [i_2] [i_1] [i_0]) - 248)))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_21 -= (((!-7409848265471354049) < (((!var_10) ? (arr_4 [i_0] [i_0 - 1]) : ((min((arr_13 [i_1]), -324061363)))))));
                            var_22 = 7931204986809713317;
                            var_23 = (max(var_23, ((max((~var_7), (arr_1 [i_0] [i_0 - 1]))))));
                        }
                    }
                }
                arr_16 [i_0] [i_1] = (min(((((max(251, (arr_0 [5] [i_1])))) * ((var_4 ? (arr_8 [i_1] [i_1] [i_1] [i_0] [i_0] [i_0]) : 15872)))), (arr_11 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0 - 1] [i_0 - 1])));
                var_24 += (min(32767, 18689));
                var_25 = (min(var_25, (max((min(-22064, 0)), 1))));
            }
        }
    }
    var_26 *= ((!(((((max(var_10, -1))) ? var_10 : (min(var_8, var_5)))))));
    #pragma endscop
}
