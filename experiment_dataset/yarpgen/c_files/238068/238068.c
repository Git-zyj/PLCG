/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_11 += ((-((-(var_9 * 255)))));
                            var_12 = var_9;
                            var_13 = (min(((min(var_7, var_4))), (arr_7 [i_0] [i_1] [i_2] [i_3 - 1] [i_3] [i_3 - 1])));
                        }
                    }
                }
                arr_9 [i_1] [i_1] [i_0] = var_4;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_14 += (min((arr_10 [i_0] [i_0] [i_0] [i_5]), ((0 ? 7697 : 35858))));
                            var_15 = (min(29678, 35857));
                        }
                    }
                }
                var_16 = ((var_3 ? var_4 : ((var_2 ? var_4 : ((var_4 << (var_2 - 36408)))))));
            }
        }
    }
    var_17 = (max((min(var_5, (max(var_4, var_7)))), ((min(var_5, (~var_5))))));
    #pragma endscop
}
