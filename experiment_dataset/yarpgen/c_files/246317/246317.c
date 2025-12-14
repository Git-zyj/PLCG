/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 60073;
    var_20 = ((1 + ((((var_5 * 0) || ((min(var_4, 17796070056000104829))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 &= ((-(((94 + -7306314598253214418) ? 60073 : (max(3388827271, var_14))))));
                var_22 = (max((((min((arr_3 [i_0]), (arr_1 [i_0]))))), ((-((min(var_17, var_5)))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_23 = arr_3 [i_4];
                                arr_19 [i_2] [i_3] [i_4] [i_5] [i_3] = -7306314598253214418;
                                arr_20 [i_2] [i_2] [i_3] [10] [1] = (arr_16 [i_2] [i_2]);
                                var_24 = 1810379687;
                            }
                        }
                    }
                    arr_21 [2] [i_3 - 1] [i_4] [i_3] = ((((min(var_12, 83))) << ((min((arr_17 [i_2] [i_3 - 1] [0] [i_3] [i_3 - 2] [i_3 - 1] [i_3 + 1]), (arr_17 [i_2] [i_3 - 2] [i_3] [i_2] [i_2] [i_3 - 1] [i_3 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_27 [i_3] = 13780;
                                var_25 = (max((max(-4572025222455956321, var_10)), -9038499056920211426));
                                var_26 = var_9;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
