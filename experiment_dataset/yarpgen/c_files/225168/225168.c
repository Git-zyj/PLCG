/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_10 = ((-((max((arr_1 [i_0] [i_1]), 30)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_2] [i_4] = (max((arr_9 [i_0] [i_0] [i_2] [i_0] [i_4] [i_0]), (((arr_0 [i_1] [i_1]) * ((0 ? (arr_9 [i_0] [i_0] [i_2] [i_2] [i_4 - 3] [i_1]) : (arr_10 [i_0] [i_0])))))));
                                arr_14 [i_0] [i_1] [i_4] [i_0] [i_4 - 3] = (arr_1 [i_4] [i_2]);
                            }
                        }
                    }
                    var_11 = (min(var_11, ((max(((((((var_7 ? (arr_9 [i_2] [i_1] [i_0] [i_0] [i_0] [i_0]) : (arr_5 [i_0] [i_0] [i_0])))) ? 0 : (arr_10 [i_0] [i_0])))), ((-1276300679 + (max((arr_3 [i_0]), -1)))))))));

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_12 = (-25 || -527111521);
                        var_13 |= (((((((((arr_10 [i_0] [i_5]) << 0))) ? var_4 : ((var_3 ? (arr_17 [i_5] [i_1] [i_1] [i_0]) : 10959009320622390122))))) || (((((max((arr_16 [i_2] [i_2]), (arr_10 [i_0] [i_0])))) ? (arr_0 [i_0] [i_1]) : (max((arr_0 [i_1] [i_5]), (arr_6 [i_2]))))))));
                    }
                }
            }
        }
    }
    var_14 = 18;
    var_15 = var_9;
    #pragma endscop
}
