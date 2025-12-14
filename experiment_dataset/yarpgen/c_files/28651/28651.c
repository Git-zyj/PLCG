/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 |= ((var_10 > ((226 * (arr_4 [0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_18 [1] [i_1] [2] = ((26 << (((~2297825066) - 1997142212))));
                                var_17 = (max(var_17, (arr_9 [i_0] [2] [10] [2])));
                                var_18 = (arr_4 [i_1]);
                                var_19 = (max(var_19, ((((arr_16 [i_4] [i_3 - 1] [1] [i_2] [9] [i_0]) & 17899552314923294709)))));
                            }
                        }
                    }
                    arr_19 [i_1] = 3;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    var_20 ^= var_11;
                    arr_31 [i_5] [i_6] [i_7] = (arr_26 [3]);
                    var_21 = (min(var_21, var_10));
                    arr_32 [i_6 + 1] |= ((var_1 ? (var_12 ^ 1) : ((3 | (arr_24 [i_6 - 2] [i_6 + 1] [i_6 + 1])))));
                }
            }
        }
    }
    var_22 = var_0;
    #pragma endscop
}
