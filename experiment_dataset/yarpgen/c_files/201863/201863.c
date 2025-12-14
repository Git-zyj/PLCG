/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((~(((((236 ? var_3 : var_15))) / ((65535 ? var_13 : 4003003621)))))))));
    var_20 = ((((var_4 ? var_11 : var_14))) ? var_7 : var_10);
    var_21 |= var_7;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_22 = min((arr_5 [11] [i_0]), (min(291963677, var_10)));
                    var_23 = ((-(((arr_2 [i_2] [i_0]) % (arr_2 [i_0 - 1] [8])))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_24 &= (arr_8 [2] [i_4] [i_1] [i_4 + 1] [i_4 + 3]);
                                arr_11 [i_0] [18] [i_0] [i_3] [i_0] = var_11;
                            }
                        }
                    }
                    var_25 = (max(var_25, (((+(((arr_2 [i_0 + 1] [i_0]) ? (arr_2 [i_0 - 1] [i_0 - 1]) : var_1)))))));
                }
            }
        }
    }
    #pragma endscop
}
