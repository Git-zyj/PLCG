/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_2] = ((~(((arr_0 [i_0 + 1] [i_0 + 1]) ? (arr_0 [i_0 - 1] [i_1]) : (arr_3 [i_0 - 1] [i_0 - 1] [i_0 + 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_12 = (!1610612736);
                                arr_13 [i_0] [i_0 + 1] [i_0] [i_1] [i_2] [i_3] [i_4] = (((((var_7 ? (((!(arr_5 [i_0 - 1] [i_1] [8])))) : (!var_3)))) ? (arr_0 [i_1 - 1] [i_0 + 1]) : -5));
                                var_13 = 7834286084728580179;
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (min((min((min(var_5, var_9)), ((min(var_1, 64))))), var_0));
    #pragma endscop
}
