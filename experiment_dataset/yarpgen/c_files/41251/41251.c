/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((((-1 && (var_10 || 65535)))), var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_0] = ((((-(((arr_6 [i_0]) + (arr_7 [i_0]))))) / ((-31538 ? (((arr_0 [i_0]) ? 9398 : (arr_0 [i_0]))) : 30))));
                    var_17 = (min((((((((arr_3 [7] [i_1] [i_2 + 1]) + 1539586617))) ? (((arr_2 [i_1] [i_1]) ? 234 : var_2)) : ((var_7 ? 0 : 0))))), (((((var_7 ? 0 : 24658))) ? ((576050175 ? (arr_7 [i_1]) : -2453841766081401173)) : -27960))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2 - 3] [i_3] [i_1] [i_2 - 3] = (min(0, ((min((arr_5 [i_4] [i_1] [i_2 - 1]), 1)))));
                                var_18 = ((((max(766701936, ((max(126, 12990)))))) ? var_7 : (((!(arr_11 [i_0] [i_0] [i_0] [i_0]))))));
                            }
                        }
                    }
                    var_19 = (min((((-6120 ? -70 : var_10))), (((arr_14 [i_2 + 1] [i_2 - 3] [i_2 + 1] [i_2 - 2] [i_2 - 1]) * var_13))));

                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        arr_18 [6] [i_1] [i_2 - 1] [i_5] [i_5] = ((max(((max(0, (arr_7 [i_0]))), (min((arr_12 [i_0] [i_1] [i_2 + 1]), -70))))));
                        arr_19 [i_0] [i_0] = 33733;
                        arr_20 [i_5] [i_2] [i_1] [i_0] = (((((-15837794322231329950 ? 8631 : (~var_5)))) ? ((((arr_10 [i_5] [i_5] [i_5 - 2] [i_5 - 2] [i_5] [i_5 - 1]) ? -576050178 : (arr_11 [i_5] [i_5] [i_5 - 2] [i_5 - 2])))) : (((min(1, (arr_12 [i_0] [i_1] [i_2 - 3]))) | 1))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 10;i_7 += 1)
        {
            {

                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    arr_30 [i_6] [i_8] [i_8] = (arr_24 [i_6]);
                    arr_31 [i_6] [i_6] [i_7 + 4] [i_8] = var_4;
                }
                for (int i_9 = 1; i_9 < 13;i_9 += 1)
                {
                    var_20 ^= var_1;
                    arr_34 [i_6] [i_7] [i_7] = 1;
                    var_21 = (min((arr_22 [i_7 + 3] [i_7 + 3]), var_6));
                }
                arr_35 [i_6] = (max((arr_33 [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_7 + 3]), ((-8631 ? 55586 : 17312))));
            }
        }
    }
    #pragma endscop
}
