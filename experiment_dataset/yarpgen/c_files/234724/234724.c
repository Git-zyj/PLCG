/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    var_10 = 18551;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2 - 3] [i_3] [i_4] = (-(((max(0, 3555)))));
                                arr_15 [i_0] [i_0] [i_2 - 1] [i_3 - 1] [i_4] = (((min(var_5, ((((arr_0 [i_0]) <= (arr_13 [i_0] [i_3 + 1] [i_3] [i_3 - 1]))))))) ? (max(((14675 - (arr_3 [i_2]))), var_5)) : 2460619939597990628);
                                arr_16 [i_0] [i_0] [i_2] [7] [i_4] = ((~(min(((min((arr_7 [i_0] [3] [i_0] [6] [i_0]), 16525))), (max(var_4, var_8))))));
                                var_11 = (((arr_10 [i_3 - 1] [i_0] [i_2] [i_2] [10]) ? var_4 : (arr_11 [i_3 + 1] [i_3 + 1] [6] [11] [i_4] [11] [i_4])));
                                var_12 = (arr_6 [i_3 + 1] [i_3 + 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = var_0;
    #pragma endscop
}
