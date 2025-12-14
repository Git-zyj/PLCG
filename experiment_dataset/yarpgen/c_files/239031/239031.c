/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (((((!6733511783885306349) && 3823126095)) ? var_1 : ((var_1 ? (var_1 | var_3) : var_5))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_2 - 3] = min(var_2, (arr_2 [i_0] [i_0]));
                    var_12 = (-471841181 % 3823126115);
                    arr_8 [i_0] [i_1 + 2] = var_7;
                    var_13 = (min(var_13, (arr_5 [i_0] [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_16 [i_3] [i_1] [i_2] [i_2] |= (min((min((arr_0 [i_1 + 2] [i_1 + 1]), var_3)), ((((arr_6 [i_1 - 1] [i_1 + 1] [i_1 - 1]) + (arr_3 [i_1 + 2] [i_1 + 1] [i_1 + 1]))))));
                                arr_17 [i_0] [5] [i_0] [10] [i_0] [5] [i_0] = 55397;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
