/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((-var_11 >= (((min(536870912, var_7)) - (((min(var_13, var_9)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_3] [i_2] [i_1] [i_1] [i_1] [i_1] = (min(((((-(arr_3 [i_0]))))), var_1));
                                arr_16 [i_0] [i_1] [4] [i_1] [i_4] = ((((min((((220 || (arr_12 [i_0] [i_1])))), (max(var_4, var_0))))) ? -var_6 : (((var_1 ? (arr_3 [i_2]) : (arr_3 [i_0]))))));
                                arr_17 [i_0] [i_1] [i_1] [i_3] [i_3] [i_3] = (min(153, 113));
                            }
                        }
                    }
                }
                arr_18 [1] [i_1] [8] = (153 || 147);
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 8;i_6 += 1)
                    {
                        {
                            var_15 = (min(var_15, ((((var_8 ? var_2 : (arr_22 [i_6] [i_5 - 1] [i_1] [i_6])))))));
                            var_16 = (max((((!(arr_23 [i_0] [8] [i_5] [i_6 - 1])))), (arr_10 [i_0] [i_0] [i_1] [i_5 + 1] [i_1] [i_6 - 1])));
                            var_17 = ((~(max((arr_19 [i_5 + 1]), (~var_6)))));
                            var_18 = (min(var_18, -5946233161879571275));
                        }
                    }
                }
                var_19 = (((((-var_11 ? (max(66, -732799102)) : var_3))) ? ((47 ? (~-4867702709370548471) : 108)) : ((((arr_0 [i_0]) >> ((((var_13 ? var_0 : var_12)) + 8302)))))));
            }
        }
    }
    var_20 ^= (min((var_7 >= var_3), (((-4867702709370548471 / 147) ? var_0 : (~5946233161879571275)))));
    var_21 = -var_6;
    #pragma endscop
}
