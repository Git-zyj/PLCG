/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, 110));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 = (1 - (max((arr_3 [i_1 + 1] [i_1 + 2] [i_0]), ((1 ? 82 : 102)))));

                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        var_13 ^= (max((min(22, -102)), (((!(arr_10 [i_3 - 2] [i_1 - 1] [i_1 - 1] [i_1]))))));
                        arr_11 [i_0] [i_1] [i_1] [i_0] [i_1] [i_3] = ((!(((((min(1, -3))) ? (arr_4 [i_1] [i_1]) : 212)))));
                        arr_12 [i_1] [i_1] = (max((((arr_4 [i_1 + 1] [i_1 + 4]) ? (arr_8 [i_1 - 1] [i_1 + 4] [i_1]) : 42274)), (((arr_8 [i_1 + 4] [i_1 - 1] [i_1]) ? (arr_4 [i_1 + 3] [i_1 + 1]) : (arr_4 [i_1 + 2] [i_1 + 2])))));
                    }
                    var_14 = (max((((max(-2879170337094033351, (arr_5 [i_2]))) % -1)), -2879170337094033351));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        arr_17 [i_4] [i_4] = ((255 | 16256) ? 24798 : (!53229));
        arr_18 [1] = ((!(148 + 44)));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_15 ^= ((!(min((!20469), (!19002)))));
        var_16 = (min(var_16, (!16)));
    }
    var_17 *= (min((!90), ((((min(477021436, 81))) ? -165 : ((min(var_10, var_5)))))));
    #pragma endscop
}
