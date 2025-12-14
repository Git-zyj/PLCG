/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = max(((var_5 ? var_12 : (var_2 / var_10))), var_10);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_19 *= ((((((min((arr_8 [i_2] [i_0] [i_2 - 2] [14]), var_0)) < var_0))) == ((((arr_6 [2] [i_1] [i_0]) != (((var_7 ? var_5 : (arr_9 [i_0 - 2])))))))));
                                var_20 = (min(var_20, (((((((((var_15 ? var_6 : var_2))) ? (var_11 - var_4) : ((var_13 ? var_2 : (arr_4 [i_0])))))) ? (((((max((arr_7 [i_1] [2] [2] [i_1]), var_1)))) & (min((arr_2 [i_0]), var_1)))) : (arr_6 [i_2] [i_3] [i_3]))))));
                            }
                        }
                    }
                    var_21 = (min(var_21, (16698 < 4)));
                    arr_14 [14] [14] = (((max((var_11 * var_17), ((max(-22, 18))))) >= (0 - 27519)));
                    arr_15 [i_0] = max(((((arr_7 [i_0] [i_1] [i_2] [i_2]) * (var_13 != var_6)))), (min(6499836386972482927, 250)));
                }
            }
        }
    }
    #pragma endscop
}
