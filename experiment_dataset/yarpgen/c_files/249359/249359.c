/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!var_15);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, (((~((((max(18508, (arr_4 [i_0] [i_1] [1])))) ? (arr_7 [i_0] [9] [9]) : (arr_2 [5] [i_2]))))))));
                    var_18 = (max(var_18, var_7));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 11;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                arr_23 [i_3] [i_3] [i_5] [i_6] [i_3] = (((!-var_12) ? (arr_6 [i_4 + 1] [i_5 - 1]) : -1537710835));
                                var_19 -= (!-1537710835);
                                var_20 = var_11;
                                var_21 = (arr_2 [i_3] [i_5]);
                            }
                        }
                    }
                    var_22 = (min(var_22, 8));
                }
            }
        }
    }
    #pragma endscop
}
