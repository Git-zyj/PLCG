/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 140;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_17 = (arr_2 [i_0 + 1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_18 = ((((arr_0 [i_1 - 3] [i_0 + 1]) << (((arr_0 [i_1 + 2] [i_0 + 1]) - 461622826)))));
                                var_19 = ((+(((1 || ((((arr_1 [i_4] [i_0]) ? (arr_3 [i_0 - 1] [i_0] [i_0 - 2]) : var_3))))))));
                                arr_14 [i_0 - 1] [i_4] [i_2] [i_1] [i_1] = ((((((-51607900726449608 ? (arr_3 [i_0 + 1] [i_0] [i_0]) : (arr_2 [i_2])))) ? ((max((arr_12 [i_4 + 1] [i_1] [i_0]), (arr_6 [i_1] [i_1 - 3] [i_1])))) : 18014398509481983)));
                            }
                        }
                    }
                }
                var_20 = ((var_15 ? (((min((((!(arr_8 [i_1] [i_0] [i_0] [i_1])))), (arr_10 [i_1 + 1] [i_1 + 1] [i_1]))))) : -51607900726449608));
                var_21 = (!-1688314093);
            }
        }
    }
    #pragma endscop
}
