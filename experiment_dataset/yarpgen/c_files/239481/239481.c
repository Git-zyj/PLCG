/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, 1294364741656673901));
                    var_20 = (((((((arr_2 [i_0] [i_2]) ? 0 : 1))) ? ((74 % (arr_1 [i_2]))) : ((min(var_12, (arr_2 [i_1] [i_0])))))) * ((((!(arr_7 [i_2] [i_1] [i_0] [i_0]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {

                            for (int i_7 = 0; i_7 < 19;i_7 += 1)
                            {
                                var_21 = (((((!(arr_6 [i_5] [i_5] [i_5]))))) - (max((arr_6 [21] [i_6] [8]), (max((arr_8 [i_6] [i_4]), (arr_18 [i_3] [i_4] [i_5 - 1] [i_6] [i_7]))))));
                                arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] = (arr_5 [i_3] [i_3] [i_3] [0]);
                            }
                            arr_23 [i_3] [i_3] [i_4] [i_5] [i_6] = ((arr_21 [i_3] [i_4] [i_5] [i_6] [i_5 - 1]) ? (min((arr_17 [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1]), var_14)) : var_10);
                            var_22 = ((((((arr_19 [i_3] [i_3] [i_4] [1] [i_6] [i_6]) ? ((var_7 ? (arr_18 [i_3] [i_4] [i_5 - 1] [i_6] [i_4]) : var_13)) : (arr_0 [i_6])))) ? (((((var_15 ^ (arr_14 [i_3] [i_4])))) ? 9 : var_9)) : (min(((((var_18 + 9223372036854775807) >> (var_4 - 193)))), (max(var_15, var_9))))));
                        }
                    }
                }
                arr_24 [17] [i_4] [i_4] = (--18446744073709551613);
                arr_25 [i_3] = (max(1969657300, ((var_11 + ((42417 ? 4266300320338481655 : var_17))))));
            }
        }
    }
    var_23 = var_3;
    var_24 = 243;
    var_25 = ((12443070639958862719 <= (((var_0 / ((74 ? 261120 : var_11)))))));
    #pragma endscop
}
