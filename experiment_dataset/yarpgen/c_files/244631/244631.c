/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_12 = ((1 >> (((arr_11 [i_2 - 1] [i_1] [i_2 - 1] [i_0 + 1]) - 25))));
                            var_13 = ((~(min((((arr_1 [i_0 - 1] [i_0]) ? (arr_0 [3]) : 1614356176)), (((var_2 ? var_3 : 122)))))));
                            var_14 &= 1797103732;
                            var_15 = ((var_11 * (((arr_4 [i_0] [i_0] [i_1]) + var_0))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_16 += ((var_11 * ((var_7 ? var_2 : (arr_2 [i_0])))));
                                var_17 = (max(var_17, var_11));
                                var_18 = (max(var_18, 1));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_0;
    var_20 = (max(var_20, var_8));
    #pragma endscop
}
