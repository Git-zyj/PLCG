/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = ((-((max((max(var_0, var_1)), ((min(var_10, var_10))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_13 -= (((max((max(var_10, var_1), (arr_10 [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4 + 1] [i_4]))))));
                                var_14 = (min(var_14, ((min(4146073382, (((arr_11 [i_1 - 3] [i_1 + 2] [i_1 - 2]) ? (arr_11 [i_1 + 1] [i_1 + 1] [i_1 - 1]) : (arr_11 [i_1 - 3] [i_1 - 3] [i_1 - 3]))))))));
                                arr_12 [7] [i_0] [i_2] [i_3] [i_4] = ((min(46, 7379441162459501836)));
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] = 137;
                                var_15 *= ((min((arr_8 [i_1 + 2] [i_4] [i_4] [i_0 + 2]), var_1)));
                            }
                        }
                    }
                }
                var_16 = ((-1 ? (((((arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? var_10 : var_8)))) : (arr_8 [i_0 - 4] [0] [i_0] [i_1 - 3])));
            }
        }
    }
    #pragma endscop
}
