/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (arr_5 [i_1] [9] [i_1])));
                var_18 = (arr_5 [i_0] [5] [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [1] [i_3] [i_3] [i_3] [1] [i_3] = ((-((((max((arr_1 [i_2]), var_15))) ? (arr_1 [i_4]) : -869262307))));
                                arr_14 [i_0] [3] [i_3] [i_2] [i_3 + 2] [5] [i_4] = max(16531140050841303376, 5369);
                                arr_15 [i_3] [4] [i_2] [i_1] [i_3] = (~var_12);
                                arr_16 [i_0] [i_3] [i_1] [i_1] [i_2] [i_3 - 1] [i_4] = ((!(((~(arr_4 [i_3 - 2]))))));
                            }
                        }
                    }
                }
                var_19 = (max(var_19, (arr_9 [i_0] [i_0] [i_0] [i_0])));
                var_20 = ((((min((arr_6 [i_0] [i_0] [i_0] [i_0]), ((((arr_10 [i_0]) <= 4370)))))) ? (((~((min(65515, (arr_3 [4]))))))) : (((arr_9 [i_0] [1] [1] [i_1]) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (arr_6 [i_1] [i_1] [i_0] [i_0])))));
            }
        }
    }
    var_21 = var_14;
    var_22 = (min(var_22, ((((15 < -87) ? (~1180888309) : ((max(var_1, ((var_5 ? var_10 : -95))))))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 12;i_8 += 1)
                    {
                        {
                            arr_30 [6] [6] [i_6] [i_8] = (min((arr_22 [10] [i_8]), -var_10));
                            var_23 = var_16;
                        }
                    }
                }
                arr_31 [1] [i_6] &= ((((!(arr_23 [i_5]))) ? (((min((arr_18 [i_6] [i_5]), (arr_23 [i_5]))))) : (((arr_23 [i_5]) ? var_14 : var_11))));
            }
        }
    }
    #pragma endscop
}
