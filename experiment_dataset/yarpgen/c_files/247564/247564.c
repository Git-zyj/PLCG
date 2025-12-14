/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0 - 1] [10] = 0;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_10 *= 0;
                                var_11 = var_4;
                                var_12 -= (max((((var_0 ? (arr_0 [i_0 - 2] [i_0 - 2]) : (arr_0 [i_0 - 2] [i_0])))), (min((min((arr_8 [i_0] [i_1] [i_2] [i_3]), var_7)), var_2))));
                                var_13 = ((445944581 ? 198 : 1));
                                arr_17 [i_0] [i_1] [3] [i_3] [i_4] = (arr_4 [i_0] [i_0]);
                            }
                        }
                    }
                }
                arr_18 [i_1] = (max((((((var_8 || (arr_13 [16] [i_1] [i_1] [i_1])))) / ((((arr_10 [i_0 + 1] [i_0] [i_0] [i_0]) >= 1587))))), (arr_9 [4] [i_1] [i_1])));
            }
        }
    }
    var_14 = (min(var_2, (198 * -1609)));
    var_15 = var_2;
    #pragma endscop
}
