/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] = (min(((((min(var_9, 3149556033538594876)) > (0 / 2177)))), (min(3149556033538594876, (min((arr_6 [3] [i_1]), -246597563))))));
                            var_16 = (max(var_16, (max(var_9, ((54 >> (arr_7 [i_0] [i_0 - 1] [i_0 - 1])))))));
                            arr_12 [i_0] [i_1] [i_0] [i_3] = (max((max(var_13, (max(-1841236796, 12149320158866130707)))), (min((min((arr_7 [i_0] [i_1] [i_2]), var_14)), ((min((arr_5 [i_1]), var_7)))))));
                        }
                    }
                }
                arr_13 [i_1] [i_0 + 1] [1] = (arr_10 [i_0] [i_0] [i_1] [6] [i_0]);
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_22 [i_0 - 1] [i_0 - 1] [1] [i_1] [i_1] [i_1] = (i_1 % 2 == zero) ? ((max(((((max((arr_6 [i_5] [i_0]), (-9223372036854775807 - 1)))) ? 7002444359795247789 : 16438199879648137650)), (((-3146970706375580479 + 9223372036854775807) << (((min(3149556033538594887, (arr_15 [i_0] [i_1] [i_0] [i_5]))) - 104))))))) : ((max(((((max((arr_6 [i_5] [i_0]), (-9223372036854775807 - 1)))) ? 7002444359795247789 : 16438199879648137650)), (((-3146970706375580479 + 9223372036854775807) << (((((min(3149556033538594887, (arr_15 [i_0] [i_1] [i_0] [i_5]))) - 104)) - 127)))))));
                                arr_23 [i_0 - 2] [i_1] [i_1] [i_5] [i_5] [6] [11] = max((min(var_11, 15297188040170956708)), var_8);
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (3149556033538594887 + 1841236796);
    #pragma endscop
}
