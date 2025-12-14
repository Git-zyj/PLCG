/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_19 = ((!(arr_9 [i_0] [17] [i_4] [i_1])));
                                var_20 = 13891130561110103396;
                            }
                        }
                    }
                }
                var_21 = ((-((max((arr_0 [i_1] [3]), ((((arr_6 [3]) || 65535))))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_22 = (max((arr_13 [i_5] [i_5] [i_5]), (arr_15 [i_6] [i_5] [i_0])));
                            var_23 = (arr_3 [i_0]);
                            var_24 = (arr_3 [i_1]);
                            var_25 = (arr_9 [i_6] [i_6] [i_5] [i_6]);
                        }
                    }
                }
            }
        }
    }
    var_26 = (-(min(-4555613512599448220, var_12)));
    var_27 = ((((max((max(1, var_9)), var_11))) ? 20 : (min(-var_4, ((var_15 ? var_6 : 1))))));
    #pragma endscop
}
