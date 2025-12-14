/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 = (min(((max(var_1, var_10))), (min((((!(arr_6 [7] [i_1 - 1] [i_0])))), (arr_3 [i_1 + 1] [i_1])))));
                    var_13 = ((var_11 ? 17189 : (((arr_6 [1] [i_1 + 1] [i_1 - 1]) ? ((((arr_5 [i_0] [i_1] [i_1] [i_2]) * var_11))) : ((var_5 ? var_8 : 2))))));
                }
            }
        }
    }
    var_14 = (max((var_6 != -18), 30));

    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        var_15 |= ((!((((arr_9 [1]) ? 1 : (arr_9 [14]))))));
        var_16 = (arr_8 [i_3]);
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        arr_12 [i_4] = (arr_2 [i_4]);
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 7;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    {

                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            var_17 = (-2 / 2159442573092581798);
                            var_18 = ((+(max((arr_19 [i_4] [i_7 + 1] [i_6]), (arr_18 [i_4])))));
                            arr_24 [i_8 - 1] [i_8] [8] [i_6] [1] [1] [i_4] = -24606;
                        }
                        for (int i_9 = 4; i_9 < 7;i_9 += 1)
                        {
                            var_19 = (max(var_19, (~-24)));
                            var_20 += ((-((((18973 ? var_11 : -9223372036854775807)) * (arr_19 [i_9 - 1] [i_5 - 1] [i_6])))));
                            arr_29 [i_4] [i_5] [1] [i_7] [i_9] [i_9] = 26193;
                            var_21 = (arr_26 [i_4] [i_4] [1] [i_6] [i_4] [i_9] [i_9]);
                            arr_30 [i_4] [i_4] [i_6] [i_9 - 3] [i_9 - 1] = (arr_27 [i_4]);
                        }
                        arr_31 [i_4] [i_5] [i_6] [i_6] [9] [1] = (arr_25 [i_7] [i_5] [i_7]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
