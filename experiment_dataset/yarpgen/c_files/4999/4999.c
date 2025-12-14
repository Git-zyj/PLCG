/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((1 ? (((!(var_0 & 0)))) : (((var_5 + 0) ? ((max(var_4, var_4))) : (!var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = var_2;
                var_12 = ((!((min((arr_4 [i_0]), (max(var_9, var_6)))))));

                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        var_13 = ((((max(65535, (arr_2 [i_2])))) ? -524288 : ((var_2 & (arr_8 [i_0] [i_2 + 1] [7] [i_3 - 2] [i_3])))));
                        arr_9 [i_0] [i_1] [i_2] [i_3] = (min((1 * 18316), (((max(126, 5134999740685220622)) % (arr_5 [i_0] [i_0])))));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_1] [i_0] [i_4] = ((!(((var_7 ? (arr_7 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1]) : var_1)))));
                        arr_14 [i_0] [i_0] [4] = (arr_1 [i_4]);
                        arr_15 [i_0] [i_0] [i_0] [i_2] [i_4] = (arr_12 [5] [i_0] [i_2 - 1]);
                    }
                    var_14 = ((var_4 ? ((min(var_0, (arr_7 [i_0] [i_1] [i_2] [i_2 - 2] [i_1] [i_2 - 1])))) : (((arr_11 [i_2 - 2] [i_2 + 1]) ^ var_2))));
                    arr_16 [i_0] [i_0] [i_2] = (((-10555 ? ((max(var_7, 62))) : (585770358 <= var_8))));
                    arr_17 [i_0] [i_1] [i_2] = max(((var_7 * (0 * var_3))), (((arr_4 [i_0]) ? (var_7 ^ var_5) : -868812735)));
                }
                arr_18 [i_0] = (((((var_8 ? (arr_12 [i_0] [10] [i_0]) : 0)) == 1)));
            }
        }
    }
    var_15 = var_9;
    #pragma endscop
}
