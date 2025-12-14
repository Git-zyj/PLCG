/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (((arr_2 [i_0] [i_1]) ? (arr_2 [i_0] [i_1]) : (arr_2 [i_0] [14])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = ((!(((var_11 ? (max(var_3, (arr_9 [i_3] [i_1] [i_2] [i_2] [i_4]))) : (((min(var_1, var_18)))))))));
                                arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] [i_3] [i_4] = (max((((var_0 || 1) ? (arr_5 [i_0]) : ((8424442873348295713 ? (arr_5 [i_0]) : var_0)))), (arr_10 [i_0 + 2] [i_0 + 2] [i_0 - 2] [2])));
                                var_20 = (min((((~var_7) ? (arr_2 [i_0] [i_1]) : (min(var_7, (arr_11 [i_3] [i_3] [i_0] [i_3] [i_3]))))), var_9));
                                var_21 = (max(((min((arr_13 [i_4] [7] [i_0] [i_0] [i_4] [i_0 - 2]), (arr_13 [i_0] [i_4] [i_0] [i_0] [i_1] [i_0 - 2])))), (((arr_13 [i_3] [i_3] [i_0] [i_0] [14] [i_0 - 2]) ? (arr_13 [i_4] [i_4] [i_0] [i_0] [i_3] [i_0 - 2]) : 8621298207055969002))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (((min(((max(var_12, var_5))), ((88722805239881184 << (10022301200361255902 - 10022301200361255897))))) ^ var_11));
    var_23 = (~var_12);
    #pragma endscop
}
