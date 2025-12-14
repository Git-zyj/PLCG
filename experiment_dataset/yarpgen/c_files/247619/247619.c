/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((!((min(-149512857, var_11)))))) & (1 < 1)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 = (1 / 274877906943);
        var_22 = (min(var_22, ((((((arr_2 [i_0]) <= (arr_2 [i_0]))) ? ((((var_16 >= (arr_1 [i_0] [i_0]))))) : ((~((min(19829, (arr_0 [i_0] [i_0])))))))))));
        arr_3 [i_0] = ((((((min(var_3, var_15))) ? var_4 : (((arr_1 [i_0] [i_0]) ? 274877906943 : var_0))))) ? (min(var_19, 8054051468685669333)) : (((var_19 < 1) ? (((316775548 ? 1 : -1))) : (min(var_12, (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_23 *= (((((-274877906943 ? 45 : 1338978193))) ? -8054051468685669333 : 8054051468685669333));
                    var_24 = (min(var_24, ((max((((arr_5 [i_3]) ? 1 : -1338978210)), var_18)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_20 [i_1] [i_1] [i_1] [i_3] [i_4] [i_4] [i_1] = (min(-2925210944140824734, ((((arr_19 [i_1] [i_1] [i_3] [i_3] [i_4] [i_5]) ? (arr_7 [i_4] [i_3]) : (arr_19 [i_1] [i_2] [i_2] [i_4] [i_4] [i_5]))))));
                                var_25 = (min(var_25, (((((var_17 ? var_5 : ((~(arr_10 [i_1] [i_3])))))) ? (min((((-274877906943 ? 126 : (arr_7 [i_1] [i_2])))), (var_13 + 32767))) : var_9))));
                                var_26 = ((((((var_0 ? 261977314 : 1))) ? ((var_0 ? 7402991833436438642 : 0)) : (var_4 & var_5))));
                            }
                        }
                    }
                }
            }
        }
        arr_21 [i_1] = ((var_3 ? (!1363733172) : ((max(var_0, 1)))));
        arr_22 [i_1] [i_1] = ((!((((arr_7 [i_1] [i_1]) ? (max((arr_6 [i_1] [i_1] [i_1]), -18112)) : -7321)))));
        arr_23 [i_1] [i_1] = ((((-1 / ((((1 || (-9223372036854775807 - 1))))))) >= (!0)));
    }
    #pragma endscop
}
