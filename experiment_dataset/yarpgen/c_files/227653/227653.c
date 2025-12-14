/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((~0) - ((((240 ? var_10 : 0)) / var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = (18446744073709551615 == var_3);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_16 -= (max((((-(!1)))), (max(((var_12 ? 4494803534348288 : 1442846056)), 1))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_2] = ((((107 ? var_11 : 2852121240)) & (-590090903052089824 == 3692347284)));
                                arr_14 [i_1] [i_1] [i_0] [i_2] = ((((1 == var_10) << (2852121239 >= 1))));
                                var_17 = (max((max(var_9, 1)), (65533 != 1)));
                            }
                        }
                    }
                    var_18 += (((-1254887244 >= var_2) + 1));
                }
                var_19 = 1;
                arr_15 [i_0] = var_11;
            }
        }
    }
    #pragma endscop
}
