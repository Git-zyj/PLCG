/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_8 ? var_2 : ((max(1, (min(var_10, var_11)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_13 = (max(var_13, (((-(((arr_1 [i_1]) ? (min((arr_0 [i_1]), (arr_1 [6]))) : (~1))))))));
                var_14 |= (arr_3 [i_0] [i_0] [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (((arr_11 [i_3 + 1] [i_1 - 1] [i_2] [i_3 + 1] [i_1 - 1] [i_2]) & ((~(arr_11 [i_3 + 1] [i_1 - 1] [i_2] [i_3] [i_4 - 1] [i_1])))));
                                var_16 = (min((min(-1, (((arr_1 [i_2]) ? var_10 : -2)))), (arr_4 [i_3 + 1] [i_4])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
