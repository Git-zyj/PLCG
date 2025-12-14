/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_9 [i_0 + 3] [i_0 + 3] [i_1] = ((~(((((arr_8 [i_0] [i_1] [18]) - (arr_1 [i_0])))))));
                    var_16 = (((var_11 ? (max(5686848174194993846, (arr_1 [i_0]))) : ((max(var_12, (arr_7 [i_1])))))) > 55029);
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    var_17 = (max(var_17, ((min(((+(max((arr_5 [i_0] [6] [6]), var_12)))), -var_14)))));
                    var_18 = (max(var_18, 12759895899514557752));
                    arr_14 [i_1] [i_3] [i_1] [i_3] = (min(var_12, (((-(arr_3 [i_3]))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_19 [i_5] [i_5] [i_1] [i_4] [i_1] [i_1 - 4] [i_0 + 3] = (arr_13 [i_0] [i_1] [i_0]);
                                var_19 += var_8;
                                arr_20 [i_1] [i_4] [i_3] [i_1 - 3] [i_1] = (((arr_3 [i_5]) <= var_7));
                            }
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_20 += (!var_1);
                    var_21 *= ((min((21458 % 9727), (var_15 != var_15))));
                }
                arr_25 [14] [14] [i_1] &= var_9;
                var_22 = ((((min(12759895899514557764, ((max((arr_24 [i_0 + 2] [i_1]), var_13)))))) ? var_10 : 65535));
                var_23 *= -92;
            }
        }
    }
    var_24 = -1343530450;
    var_25 = ((var_0 == ((max((min(var_8, var_2)), var_11)))));
    #pragma endscop
}
