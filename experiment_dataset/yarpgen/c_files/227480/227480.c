/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1] [i_2] [i_2] = 3038269303;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [14] [i_0] = (arr_7 [i_0] [i_3] [i_4 + 1]);
                                var_15 *= (420710981 ^ 323863244602474000);
                                var_16 = (min(var_16, ((((((arr_7 [i_1 - 1] [i_4 - 1] [i_4 - 1]) ? 0 : (min(var_14, 179)))) > ((((((min(var_12, 0))) && ((min((arr_5 [i_0] [i_0] [i_0]), 3874256298))))))))))));
                                var_17 -= ((((arr_18 [i_0] [8] [i_2] [i_1 - 3] [i_4 - 1] [24]) != (arr_18 [i_3] [i_3] [i_2] [i_1 - 3] [i_4 + 2] [i_3]))));
                                var_18 = (((max((13671295595752296026 * 69), ((-(arr_7 [i_4 + 2] [i_2] [i_1 + 1]))))) / ((max(2075858513, 4095)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((((((max(var_6, var_9))) & var_6)) << (var_9 + 14359)));
    var_20 &= 1;
    var_21 = (min(var_7, var_8));
    var_22 = var_2;
    #pragma endscop
}
