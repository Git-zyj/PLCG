/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (var_13 ? ((min(1019365199, 1019365199))) : (var_9 | var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, ((((41038 ? 0 : 1))))));
                                var_17 = (var_1 ? ((1019365199 | (((min((arr_3 [i_0] [i_4 - 1]), (arr_2 [i_0] [i_1] [i_1]))))))) : (arr_1 [i_1]));
                                arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4 - 3] [i_0] = (arr_12 [i_0] [i_2 - 1] [i_0] [i_2 - 1] [i_2 - 1] [i_3]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_18 = ((((((arr_8 [i_6 + 2] [i_6 - 2]) ? var_12 : (var_10 | var_11)))) ? (min((min((arr_0 [i_6]), 3275602106)), ((min(0, -784344447))))) : ((min((arr_1 [i_0]), ((var_10 ? var_11 : var_3)))))));
                            var_19 = (max(var_19, ((~(arr_8 [i_0] [i_0])))));
                        }
                    }
                }
            }
        }
    }
    var_20 = var_3;
    #pragma endscop
}
