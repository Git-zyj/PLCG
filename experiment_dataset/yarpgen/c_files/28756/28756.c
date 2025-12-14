/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_10 *= min(((-21 ? var_9 : (arr_5 [i_0] [i_3]))), ((max((arr_2 [i_4] [i_0 + 1]), var_8))));
                                var_11 = (min(var_11, (((((((arr_10 [10] [i_1 + 3] [i_2] [i_3] [i_4]) == 18772))) << ((-(((7267 >= (arr_2 [i_0] [i_4])))))))))));
                                arr_11 [i_0 + 1] [i_0] [i_2] [i_4] [i_0] = ((arr_4 [i_2 + 1] [i_3 + 1]) << ((370295371619108277 ? (arr_4 [i_2 + 1] [i_3 - 2]) : var_6)));
                                var_12 |= (min((min((arr_10 [20] [i_2] [i_3 - 1] [i_3 - 1] [i_3 - 2]), (((arr_10 [0] [i_3] [0] [i_1] [0]) << (((arr_0 [22]) - 10587032866812271927)))))), ((0 ? (!var_3) : ((((arr_3 [10] [i_1]) || -9)))))));
                            }
                        }
                    }
                }
                arr_12 [i_0] [i_0] = (((arr_5 [i_0] [21]) ? ((((((arr_2 [i_0] [i_1]) ? var_4 : 0))) ? (((arr_9 [i_0 + 1] [12] [i_1 + 3] [i_1] [i_1]) * var_1)) : ((24 ? var_0 : -30)))) : (min(0, -9194))));
            }
        }
    }
    var_13 = -8615203161658660420;
    var_14 = -296267171;
    var_15 = (min((((~178) ? var_3 : 0)), var_9));
    #pragma endscop
}
