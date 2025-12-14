/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;
    var_17 = 33;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 = (~978583877);
                    var_19 = (((arr_6 [i_0 - 1]) - ((min((arr_6 [i_1]), var_14)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_20 &= (max((!-2921754734177284056), (~-var_14)));
                                var_21 = (min(((+((((arr_9 [i_0] [i_0]) && (arr_7 [i_0] [i_2] [i_3])))))), var_6));
                                var_22 = (min((((max((arr_9 [20] [i_3]), (arr_1 [19]))))), (((arr_0 [i_2 - 1] [i_4 + 1]) / (arr_0 [i_2 - 1] [i_4 - 1])))));
                                var_23 ^= (min((((arr_9 [i_4 - 1] [i_0 + 1]) ? (arr_9 [i_4 + 1] [i_0 - 2]) : (arr_9 [i_4 + 1] [i_0 - 2]))), ((min(37, 1)))));
                            }
                        }
                    }
                    var_24 = ((min((arr_1 [1]), (arr_4 [i_0 + 1] [i_1]))));
                }
            }
        }
    }
    #pragma endscop
}
