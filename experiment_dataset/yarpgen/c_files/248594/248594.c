/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_7 == (~210)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = ((var_6 > ((254 | ((max(64, 1)))))));
                var_15 = ((((!(45 / 11962353056278329060))) ? (arr_1 [i_0] [i_0]) : ((max(200, 268435455)))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_16 = ((~((10701 ? ((max((arr_5 [1] [i_1] [1]), -10702))) : (!-1851504250354601618)))));
                            var_17 = (min(var_17, 197));

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                var_18 *= (((((min((arr_5 [i_0] [1] [i_3 - 1]), (arr_5 [i_0] [10] [i_3 - 1]))))) - (arr_5 [16] [0] [i_3 - 1])));
                                arr_14 [i_1] [i_3] [i_4] = -var_1;
                                arr_15 [i_1] [i_1] [2] = (arr_1 [15] [7]);
                            }
                            var_19 += (((var_7 <= 11) >> (((var_3 != (max((arr_3 [i_2]), var_3)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
