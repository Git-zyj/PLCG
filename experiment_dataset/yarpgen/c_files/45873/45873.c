/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((var_9 ? var_8 : 40)) | (var_13 ^ 31)))) ? ((~((var_3 ? var_11 : 30)))) : var_2);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_16 = (((30724 ? (min((arr_0 [i_3]), 22080)) : 0)));
                                var_17 = 1137293248;
                            }
                        }
                    }
                    var_18 = (max((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))), (((arr_1 [i_0]) & (arr_1 [i_0])))));
                    var_19 = ((3759695277 <= (min((max(2962652419915951827, var_10)), 1172757374))));
                }
            }
        }
    }
    #pragma endscop
}
