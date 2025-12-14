/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-1433584837684229823 < (((((var_19 ? var_11 : 1073741568)))))));
    var_21 = (min(var_21, var_17));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_22 = (arr_3 [i_0 - 2] [i_1] [i_1]);
                var_23 -= (min(((((arr_1 [i_0 - 1]) >> (((1 | var_0) - 4290906429179766955))))), ((((arr_3 [18] [i_0] [16]) <= 59)))));
                arr_4 [i_0] [i_0] [8] = min(var_8, 10538);

                for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_1] [11] = (((max((min((arr_0 [i_0] [i_0]), var_13)), (max(var_12, var_4)))) > 34));
                    var_24 = (arr_5 [i_0 - 4] [i_0] [i_0 - 1]);
                    arr_9 [i_1] [i_1] [8] = ((((((arr_3 [i_0] [i_0 - 2] [i_1]) - (((min(39, (arr_5 [i_2] [i_0] [i_0])))))))) ? (max((arr_0 [i_0 + 1] [i_0 + 1]), (max(var_5, (arr_0 [i_0] [21]))))) : (((max(var_5, var_15)) - (((min(133, 123))))))));
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_25 = (min(var_8, ((max((arr_12 [i_0 + 1]), (arr_12 [i_0 + 1]))))));
                                arr_18 [i_1] [i_1] [i_3] [0] [12] [i_5] [16] = (max(-1, (max((arr_1 [i_0 - 2]), (arr_1 [i_0 + 2])))));
                                var_26 *= (((4456674249102705490 ^ 4668038123399434520) ^ (max((-127 - 1), 18158513697557839872))));
                            }
                        }
                    }
                    var_27 = ((!(((((((arr_3 [i_0] [i_0] [3]) <= (arr_3 [i_0 + 1] [0] [0]))))) < (((arr_0 [8] [i_1]) ? var_19 : (arr_2 [i_3] [8] [i_0])))))));
                }
                var_28 ^= (((((arr_15 [i_0] [i_0 - 3] [i_0] [i_0 - 1]) ? (arr_17 [i_0 - 1]) : (arr_15 [8] [i_1] [i_1] [i_0 - 1]))) < ((((arr_15 [i_0] [12] [i_0 - 2] [i_0 - 1]) || (arr_15 [i_1] [i_1] [i_0 - 1] [i_0 - 1]))))));
            }
        }
    }
    #pragma endscop
}
