/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = var_0;
                var_20 = (max(var_20, ((min(18, -4509)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                var_21 *= (-124 & 4751);
                                var_22 ^= ((!(var_16 != 17)));
                                arr_11 [i_0] [i_1] [i_0] [i_3 + 1] [i_0] = (((115 % 20) | -115));
                            }
                            for (int i_5 = 0; i_5 < 23;i_5 += 1)
                            {
                                var_23 = ((((((min(var_5, var_1))) ^ (!0))) ^ ((((var_16 & var_3) != (-15 & 17))))));
                                arr_14 [i_0] [i_0] = -19;
                                var_24 = (104 % -4509);
                                arr_15 [2] |= (((min((-19 + 104), var_10)) + 123));
                            }
                            var_25 ^= (+-26415);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        {
                            var_26 = 104;

                            for (int i_8 = 1; i_8 < 22;i_8 += 1)
                            {
                                var_27 = (max((11829 & 20), (104 < 123)));
                                var_28 = (min(53, (var_13 != -58)));
                                var_29 += ((-(var_4 | var_14)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_30 = var_6;
    #pragma endscop
}
