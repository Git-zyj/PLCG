/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_16 = (arr_3 [i_0]);
                    var_17 -= ((!(arr_2 [i_1] [i_1 - 1])));
                    var_18 -= ((((((arr_0 [i_0]) ? (arr_4 [i_0]) : var_9))) ? 1 : var_12));
                    var_19 += (((arr_1 [i_1 - 2] [i_1 + 1]) ? (((var_10 >= (arr_3 [i_1])))) : (arr_5 [i_1 + 1])));
                }
                var_20 += (max((arr_1 [i_1 + 1] [i_1 - 2]), -7));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {
                            var_21 = (((((-(arr_3 [i_3 + 1])))) ? ((-(arr_9 [i_0]))) : 134217727));
                            var_22 = (+-6622);
                        }
                    }
                }
            }
        }
    }
    var_23 = var_10;
    #pragma endscop
}
