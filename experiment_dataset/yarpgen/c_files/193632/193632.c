/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = arr_1 [i_0];
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_21 = (arr_0 [i_2 - 1]);
                                var_22 = 35;
                                var_23 = 59825;
                                var_24 = (((arr_7 [i_1] [i_2] [i_3 + 1] [i_3 + 1]) ^ 4287484170));
                                arr_11 [i_0] [i_0 - 2] [i_0] [i_1] [i_0] [i_0] = (!-var_7);
                            }
                        }
                    }
                }
                var_25 = (max(54981, 0));
                /* LoopNest 3 */
                for (int i_5 = 3; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_26 = (arr_19 [i_1] [i_7 + 1] [i_1] [i_1 + 1] [i_1]);
                                arr_21 [i_7] [i_1] [i_0] = (arr_6 [i_1] [i_1] [i_1]);
                            }
                        }
                    }
                }
                var_27 = ((((min(24274, var_3))) | (((!(arr_20 [i_0] [i_1] [i_1 - 1] [i_1]))))));
            }
        }
    }
    var_28 += var_1;
    #pragma endscop
}
