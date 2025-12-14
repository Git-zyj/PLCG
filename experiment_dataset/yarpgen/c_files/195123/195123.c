/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_4));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [6] &= (~var_1);
                    var_19 = (max(16722231292883621125, (((var_4 ? 46 : ((-(arr_6 [i_2] [i_1] [i_1] [i_0]))))))));
                    arr_8 [i_1] = ((((min((((var_8 ? var_11 : (arr_3 [i_0] [i_1] [i_1])))), ((var_17 | (-9223372036854775807 - 1)))))) ? (arr_3 [i_0] [i_1 + 1] [i_1]) : (((!var_2) ? var_0 : ((((9223372036854775807 != (arr_5 [i_0 - 1] [i_1 + 1] [i_2] [i_2])))))))));

                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        var_20 = (((((804631045 ? (arr_3 [i_0 + 2] [i_2] [i_1]) : -9223372036854775807)) ^ ((var_10 ? 8792837709369213721 : var_13)))));

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_21 = (min(var_21, ((((29283 != var_10) | (arr_1 [i_0]))))));
                            arr_13 [i_0] [i_1 + 1] [i_2] [i_3 + 1] [i_1] = 1625933349;
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_22 = (((~var_14) ? ((~(min(60, 377134975388744087)))) : (((-(arr_0 [i_1]))))));
                            var_23 = -var_4;
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_24 += -1098579263;
                        arr_19 [i_1] [i_1] [i_2] [i_6] = ((~(var_3 + 2044)));
                    }
                    var_25 = (max(-var_3, (max(-7873676863581350986, var_3))));
                }
            }
        }
    }
    #pragma endscop
}
