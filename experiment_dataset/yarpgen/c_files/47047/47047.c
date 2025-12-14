/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((((((((arr_0 [i_1 + 3] [i_0]) ? var_10 : var_13)) & (((min((arr_0 [i_0] [i_1]), var_11))))))) ? (((arr_2 [i_0 + 1] [i_1 + 4]) | (arr_0 [i_1 + 2] [i_1]))) : (max((arr_2 [i_1 + 1] [i_0 + 1]), (arr_2 [i_1 + 4] [i_0 + 2])))));
                var_16 = (((((((arr_4 [i_0] [i_0]) >= var_12)))) ? (min((arr_1 [i_0 + 1]), var_9)) : ((1350231301359480391 ? -23 : 4111317729062608225))));
                arr_6 [i_0] [i_0] [i_0] = var_14;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_17 = (max((arr_3 [i_3] [i_0] [i_0]), (var_1 ^ var_15)));
                            var_18 = ((!((((((var_7 ? var_10 : var_13))) ? (~var_3) : (min(var_0, var_10)))))));
                        }
                    }
                }
                arr_13 [i_1 + 3] = (((((((var_4 ? (arr_2 [8] [i_1 + 3]) : var_10)) ^ (arr_8 [i_0 + 2])))) ? (16 < 8617080663043685359) : var_5));
            }
        }
    }
    var_19 = var_4;
    var_20 = (((((-(~var_10)))) && (((((var_8 ? var_14 : var_5)) ^ (!-21))))));
    #pragma endscop
}
