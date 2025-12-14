/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = var_6;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 4; i_4 < 19;i_4 += 1)
                            {
                                var_14 = (max((((arr_2 [i_0 - 1] [i_0]) ? (arr_2 [i_0 - 1] [i_0]) : var_3)), (((arr_2 [i_0 + 1] [i_0]) ? (arr_2 [i_0 + 1] [i_0]) : (arr_2 [i_0 + 1] [i_0])))));
                                var_15 = (max(var_15, (((((((arr_14 [i_2] [i_3] [i_1] [6] [i_0] [i_1] [i_2]) >> (45126 - 45097)))) ? var_1 : (min((min((arr_0 [13] [13]), 4294967295)), ((max(45126, -114))))))))));
                            }
                            for (int i_5 = 0; i_5 < 20;i_5 += 1)
                            {
                                var_16 = (max(var_16, ((min((((4294967295 ? 102 : (arr_9 [i_2] [i_1] [i_2])))), 184)))));
                                arr_18 [i_1] [i_0] [6] = 1;
                            }
                            arr_19 [i_0] [i_1] [i_1] [i_0] = (max(var_5, (!58819)));
                        }
                    }
                }
                var_17 |= ((-(((arr_17 [2]) << (((((arr_5 [i_0] [1] [i_1]) ? (arr_6 [i_0] [6]) : (arr_9 [12] [i_1] [i_1]))) + 85))))));
            }
        }
    }
    var_18 -= (max(var_7, var_10));
    #pragma endscop
}
