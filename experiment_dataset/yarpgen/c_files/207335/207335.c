/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = ((~(((var_4 && (((var_0 ? 18718 : (arr_2 [i_0])))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_16 = arr_4 [i_0] [i_1 - 1] [i_2 - 1] [i_3];
                            var_17 = (arr_5 [i_0] [1]);
                            var_18 ^= ((((((((var_12 & (arr_6 [i_0] [23] [i_2])))) * var_12))) ? (((((((arr_3 [i_0] [i_1]) / (arr_7 [i_0] [i_1] [14] [i_3 - 2])))) ? var_11 : (arr_2 [i_0])))) : ((~(((arr_5 [i_0] [i_1]) / var_9))))));
                            var_19 = (max(var_19, 17112760320));
                            arr_8 [i_0] [i_1] [i_2 - 1] [i_3 - 1] [6] = var_5;
                        }
                    }
                }
            }
        }
    }
    var_20 = (var_0 != var_6);
    #pragma endscop
}
