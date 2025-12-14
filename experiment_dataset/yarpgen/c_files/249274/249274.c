/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (min(var_18, (((!(((((var_7 ? var_6 : 1915497737905412770)) + var_1))))))));
        var_19 |= var_15;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_20 += (((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1])));
        arr_4 [i_1] = ((((((arr_2 [0] [i_1]) > (arr_3 [i_1])))) == (arr_3 [i_1])));
        var_21 = (((var_16 && 1) ? (((var_10 || (arr_3 [i_1])))) : (arr_2 [i_1] [i_1])));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_22 = ((((((35599 % 29911) + 1))) ? ((max((arr_7 [i_2]), var_9))) : (((max(var_15, var_8))))));
                                var_23 = (min(((min((arr_13 [i_2] [4] [4] [i_5 - 1] [i_2] [i_2]), (arr_13 [i_2] [i_2] [i_4] [i_3] [1] [i_4])))), 773674848));
                                arr_17 [2] [2] [i_4] [13] [2] = ((((((35639 ? (arr_11 [i_2]) : var_12))) % (var_2 ^ 35658))));
                                var_24 &= (((min(1, var_10)) ? (12358770135915465080 / 1) : (max((arr_12 [i_5 + 1] [i_6 + 1] [i_6]), (arr_12 [i_5 + 2] [i_6 + 1] [12])))));
                            }
                        }
                    }
                }
                var_25 = (max(var_25, 1));
            }
        }
    }
    #pragma endscop
}
