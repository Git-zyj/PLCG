/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 11723;
    var_11 = var_9;
    var_12 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_13 = (min(112, ((+(((arr_8 [i_0] [i_1]) ? 664660565 : (arr_7 [i_0] [i_0] [i_0] [i_0])))))));
                                arr_14 [i_0] [i_1] [i_0] = (((((!((((arr_10 [i_1] [i_3 - 2] [i_1] [i_0] [i_1] [i_1]) ? (arr_6 [i_3] [i_1]) : (arr_0 [i_0]))))))) & ((144 ? 50 : -33))));
                                var_14 = ((~(min(3010326484, (3448561289 || -20360)))));
                            }
                        }
                    }
                }
                var_15 = (arr_12 [i_0] [i_1] [i_1] [i_1 + 1] [i_1]);
                var_16 -= (max((((max(var_8, var_8)) | ((((!(arr_12 [i_0] [i_1 + 1] [i_1] [i_0] [i_0]))))))), -7));
            }
        }
    }
    #pragma endscop
}
