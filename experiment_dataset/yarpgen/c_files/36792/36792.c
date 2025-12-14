/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((23044 && var_6) ? 188 : -19226419)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = (arr_1 [10]);
                arr_7 [i_1] [i_1] = ((~((((-(arr_3 [18]))) - (!38)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 |= ((1073741824 != (arr_0 [i_0])));
                                arr_17 [i_0] [5] [14] [i_1] [i_0] = ((((min(18, 1))) | (~61089)));
                            }
                        }
                    }
                }
                var_14 = (max(var_14, (((-(min((arr_0 [i_0 + 1]), (((-(arr_10 [2] [i_1])))))))))));
            }
        }
    }
    var_15 = var_9;
    #pragma endscop
}
