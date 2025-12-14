/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] = var_10;
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 = 27303;
                                var_21 += (arr_9 [i_0] [8] [i_0] [i_0]);
                            }
                        }
                    }
                }
                var_22 = (max(var_22, ((min(((!(((var_6 ? 17450 : 4))))), (((arr_4 [i_0 - 2]) >= (((0 ? -63 : 9138524557852334158))))))))));
            }
        }
    }
    var_23 = ((((((var_3 ? var_5 : -27317)) ? var_6 : var_9))));
    #pragma endscop
}
