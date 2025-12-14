/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((min((max((min(var_6, var_16)), var_0)), var_16)))));
    var_21 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_22 = (min(((max((arr_2 [i_1] [i_0 + 1]), var_1))), (min(1, (arr_4 [i_0 + 1])))));
                arr_6 [i_0] [i_0] = (min(((min(var_19, 73))), (max(8135490024259932574, (arr_3 [i_1] [i_0 - 2])))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_9 [i_1] [i_0] = (min(((max(var_17, var_1))), (min(0, 1))));
                    var_23 = (min((min((arr_3 [i_0 + 2] [i_1]), 1)), ((min(1, -11849)))));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    arr_13 [i_0] [i_0 - 1] [i_0] = (min((min(1, var_9)), (max(1, 3714507114))));
                    arr_14 [i_0] [i_1] [i_0] [i_3] = (max(((min(1, 1))), (min((arr_8 [i_0] [i_0 + 2]), (arr_8 [i_0] [i_0 - 2])))));
                    arr_15 [i_1] = (min((max((arr_12 [i_0 + 1] [i_1] [i_3]), (arr_12 [i_0 + 2] [i_0 + 2] [i_0]))), ((min(48230, 14)))));
                }
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    var_24 = (min(((max(1, (arr_2 [i_0 + 1] [i_0])))), (min((arr_2 [i_0 - 1] [i_0]), var_5))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_25 = (min(var_25, ((min((max(1, (arr_21 [i_0] [1] [i_1] [i_0 + 2]))), ((min(41212, (arr_4 [i_5 + 1])))))))));
                                var_26 = (max((min((arr_12 [1] [i_0] [i_5 + 2]), 18225106546091170897)), ((min(41212, (arr_23 [i_6] [i_6] [i_0] [i_6]))))));
                            }
                        }
                    }
                    arr_26 [i_0 + 2] [i_1] [i_4] = (min((min(var_18, (arr_16 [i_1] [i_4]))), (max(17306, 18225106546091170897))));
                    var_27 ^= (max(((max(1048572, 3878867353))), (max(var_12, (arr_20 [i_0] [i_0] [1] [12] [i_0 + 1] [i_0 - 1])))));
                }
            }
        }
    }
    #pragma endscop
}
