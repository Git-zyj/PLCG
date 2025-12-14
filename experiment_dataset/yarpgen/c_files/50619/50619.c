/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((max((((var_8 << (((var_15 + 31298) - 18))))), ((var_14 >> (var_15 + 31298))))), var_2));
    var_17 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_0] [i_4] = (((arr_5 [i_1] [i_1] [i_1] [i_1]) || (((((max((arr_8 [i_0] [i_0] [i_0] [i_4]), (arr_11 [i_0] [i_4] [i_0] [i_0] [i_4] [i_0]))))) >= (max((arr_5 [i_4] [i_4] [i_4] [i_4]), (arr_10 [i_0] [i_0])))))));
                                arr_13 [i_4] [i_4] [i_1] [i_0] [i_4] [i_1] = (max((arr_8 [i_3] [i_1] [i_4] [i_4]), (min((max((arr_6 [i_2] [i_3]), (arr_4 [i_0] [i_1] [i_1]))), ((((arr_10 [i_0] [i_1]) * (arr_0 [i_0] [i_0]))))))));
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_1] [i_0] = ((~(arr_10 [i_0] [i_1])));
                arr_15 [i_0] [i_0] [i_0] = (((((arr_2 [i_0]) >= (((~(arr_4 [i_0] [i_1] [i_1]))))))) - (arr_0 [i_0] [i_0]));
                arr_16 [i_0] = (max(((((arr_8 [i_0] [i_0] [i_0] [i_1]) && (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))), (((max((arr_8 [i_0] [i_0] [i_0] [i_0]), (arr_4 [i_0] [i_0] [i_0]))) | ((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_1]))))))));
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 18;i_6 += 1)
                    {
                        {
                            arr_23 [i_0] [i_1] [i_5] = (((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]) * (max((max((arr_19 [i_5] [i_5] [i_5] [i_6]), (arr_20 [i_5] [i_1]))), (((~(arr_0 [i_1] [i_1]))))))));
                            arr_24 [i_5] [i_1] [i_1] [i_1] = ((((max((arr_22 [i_0] [i_1] [i_0] [i_5] [i_0]), ((((arr_6 [i_1] [i_6]) || (arr_7 [i_0] [i_1] [i_1] [i_1] [i_6]))))))) > (arr_2 [i_1])));
                            arr_25 [i_5] [i_1] = (arr_21 [i_0] [i_1] [i_5] [i_5] [i_6]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
