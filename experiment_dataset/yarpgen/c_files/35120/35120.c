/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] &= ((!(((var_1 ? var_17 : (arr_5 [i_1] [i_2]))))));
                    var_18 = (min(var_18, var_8));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_19 |= ((~((~(arr_3 [10] [i_3 + 3])))));
                                var_20 = (max(var_20, (((1 ? 1 : (1 - 0))))));
                                var_21 = (max(var_21, 0));
                                var_22 = (((((((((arr_0 [i_1]) ? 0 : var_5))) || (((10160 ? var_3 : var_9)))))) << var_13));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (min(var_23, var_5));
    var_24 = var_10;
    #pragma endscop
}
