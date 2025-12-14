/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [13] = ((-(min(((min(var_4, 53))), (~23781)))));
                                arr_14 [i_1] [5] [i_1] [i_3] = (var_3 * (min((arr_7 [13] [i_1] [i_2]), ((-(arr_12 [i_4] [10] [i_2] [i_0] [i_0]))))));
                            }
                        }
                    }
                    var_15 = (min(var_15, (5149461513222106709 - -107)));
                    arr_15 [i_2] [22] [i_0] = var_1;
                    var_16 = ((-(arr_0 [i_2])));
                }
            }
        }
    }
    var_17 = ((13297282560487444906 ? (max(var_1, var_12)) : var_3));
    var_18 = (max(((var_12 & (~var_11))), var_12));
    #pragma endscop
}
