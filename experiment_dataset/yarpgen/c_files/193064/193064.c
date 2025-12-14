/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_20 = ((((max(var_5, 56560))) ? 127 : (((arr_5 [i_0] [i_1] [i_2] [i_2]) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (arr_8 [6] [i_1 + 1] [i_2] [i_1])))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = (((((arr_9 [i_0] [i_1 + 2] [i_1 + 2] [i_1 - 1]) * ((var_5 % (arr_6 [1]))))) != ((((107555472 || 107555472) - ((~(arr_3 [i_0] [i_0] [i_3]))))))));
                            var_21 = var_1;
                        }
                    }
                }
                var_22 = (min(var_22, (((var_13 && ((((65529 ? (arr_8 [i_0] [i_1] [i_1 - 1] [i_1 + 2]) : var_18)) != (arr_10 [8]))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 22;i_6 += 1)
            {
                {
                    arr_18 [i_4] = var_19;
                    var_23 = (arr_17 [i_4 + 1] [i_5 - 1] [i_6] [10]);
                }
            }
        }
    }
    var_24 = (min(var_24, var_10));
    #pragma endscop
}
