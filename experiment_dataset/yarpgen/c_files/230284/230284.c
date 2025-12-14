/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= -114;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (~(((((arr_0 [i_1 + 1] [i_0 + 1]) ? 33916 : var_14)) | (3 < -10))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_18 |= (arr_12 [i_2] [i_4]);
                                var_19 = ((((min((!var_12), (((arr_9 [i_1] [i_3]) && 0)))))) > (83 * var_5));
                                arr_17 [i_1] [i_1] [5] = ((((var_1 ? (arr_9 [i_1] [i_1 + 1]) : (arr_15 [i_0 + 2] [i_1 + 3] [i_3 - 1]))) ^ (((min(50927, 0))))));
                                var_20 += (((max((arr_9 [i_4] [i_0]), (arr_1 [i_0 - 4]))) << (((arr_1 [i_0]) & (arr_16 [i_0] [0] [i_0 - 3] [0] [i_1 + 4] [i_3 + 2])))));
                                var_21 = (min(var_21, ((max((arr_13 [i_4]), (~-8538))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
