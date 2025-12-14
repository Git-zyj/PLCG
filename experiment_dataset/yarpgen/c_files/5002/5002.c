/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_17;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 = (min(2305843009213693951, 0));
                                var_22 = min((arr_0 [i_0 - 1]), (min(var_12, 7540)));
                                var_23 = (min(12354, var_6));
                            }
                        }
                    }
                    var_24 = (!12365);
                }
            }
        }
    }
    #pragma endscop
}
