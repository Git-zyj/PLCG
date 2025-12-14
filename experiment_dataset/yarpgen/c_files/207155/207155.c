/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = (((arr_1 [i_1]) < 1));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, (~253)));
                                var_17 -= (((((~var_10) + 2147483647)) << ((((arr_2 [i_1] [i_1] [i_1]) == 98)))));
                                arr_14 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] [i_3] = (max(((min((246 - 9223372036854775807), (arr_5 [i_4] [i_4])))), ((-(max(10593134846937689057, (arr_7 [i_2] [i_3] [i_4])))))));
                                var_18 = var_9;
                                var_19 = 11;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
