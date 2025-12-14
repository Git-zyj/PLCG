/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, (((!((min(21301, (min(16853, (arr_5 [i_0] [i_1] [i_2] [i_0])))))))))));
                    arr_8 [i_0] [i_0] [i_0] = ((!(221 | var_12)));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_18 = min(var_15, 65535);
                        var_19 = (((((((max(21314, (arr_1 [i_0])))) ? (arr_9 [i_0] [i_1] [i_2] [i_3]) : 65535))) ? 839826158042142773 : ((((((62986 == (arr_2 [i_0])))) - var_12)))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] = 65529;
                        arr_12 [i_2] = ((21301 ? (((~0) - (arr_7 [i_0] [i_0]))) : (((90 ^ ((65535 >> (var_1 - 58928))))))));
                        var_20 = (arr_2 [i_0]);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_21 = var_15;
                        arr_15 [i_0] [i_1] [i_1] [i_2] [i_2] [i_0] = (arr_5 [i_0] [i_1] [i_2] [i_4]);
                    }
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_22 = ((((max(39191, var_1))) << (((arr_10 [i_0] [i_1] [i_2] [i_5]) - 17182925464589214055))));
                        var_23 &= ((((((!(arr_3 [i_0] [i_1])) || 80)))));
                    }
                    for (int i_6 = 4; i_6 < 12;i_6 += 1)
                    {
                        var_24 = (min(var_24, (arr_13 [i_0] [i_1 - 1] [i_2])));
                        var_25 = ((((max((arr_3 [i_1] [i_0]), (((arr_9 [i_0] [i_1 - 1] [i_2] [i_6]) ? 839826158042142773 : (arr_5 [i_2] [i_2] [i_2] [i_2])))))) ? (min((((arr_14 [i_0] [i_1] [i_0] [i_6]) << 0)), -29)) : var_3));
                        var_26 = (arr_3 [i_2] [i_0]);
                    }
                    var_27 = var_2;
                }
            }
        }
    }
    var_28 = var_6;
    #pragma endscop
}
