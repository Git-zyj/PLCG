/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max(187, -1944528648);

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] = min((arr_0 [i_0]), 248);
        var_15 = (min(var_15, ((((((!(((-1544 ? 1550739713680137741 : -1)))))) == var_10)))));
        arr_3 [i_0] [i_0] &= 0;
        var_16 = (min(var_16, var_2));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_17 = (min(var_17, ((min(var_7, ((-(var_6 > var_2))))))));
        arr_8 [i_1] = (((((arr_6 [i_1]) ? 7907198606336991673 : ((((arr_5 [5] [6]) ? var_0 : (arr_5 [i_1] [i_1 - 1])))))) < (!var_13)));
        var_18 ^= (~127);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 9;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 9;i_5 += 1)
                        {
                            {
                                var_19 = (max((arr_10 [i_1]), (((arr_10 [i_1]) ? (arr_10 [i_1]) : (arr_10 [i_1])))));
                                arr_19 [i_1] [i_2] [i_3 - 1] [i_1] [i_5 + 3] = ((((((!(arr_16 [8] [8] [8] [i_4 - 2] [1]))))) <= ((var_1 ? (arr_12 [i_3] [i_4] [i_4] [i_4 + 3]) : (arr_16 [i_1] [i_1] [i_1] [i_4 + 3] [i_4])))));
                                arr_20 [i_1] [i_1] [i_3] [i_4] [i_3] = ((~(((arr_11 [i_1]) ? (max(-2484783046540579849, 0)) : ((var_9 ? (-9223372036854775807 - 1) : 664352509))))));
                                var_20 = (min(var_20, ((((arr_12 [i_1] [3] [i_1] [i_1]) ? (((arr_6 [i_2]) - (max(16777215, (arr_15 [10]))))) : (((max((arr_18 [i_1] [6] [i_1 - 1] [i_1 + 2] [6]), (arr_5 [i_3 - 1] [i_5 + 1]))))))))));
                            }
                        }
                    }
                    arr_21 [i_1 + 2] [1] [i_1] [i_1] = (max((max((arr_9 [i_1 + 2] [i_1] [i_3]), var_8)), (arr_13 [i_1] [7] [i_3])));
                    var_21 = ((((((min(100, 713305764))) ? 22567 : (((arr_4 [i_1] [i_1]) ? var_11 : (-32767 - 1)))))) ? (((((arr_9 [i_1 + 1] [i_3] [i_3]) != (arr_13 [i_3] [i_2] [i_1]))))) : (min(var_5, (((arr_14 [i_1] [5] [i_3]) & 2147483647)))));
                    var_22 -= (((32767 ? var_3 : (arr_12 [i_3 - 1] [i_3 - 1] [i_1 + 2] [i_1 + 1]))));
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
    {
        var_23 = (max(var_23, -713305765));
        var_24 = (max(var_24, ((((10539545467372559942 ? (((arr_9 [i_6] [4] [4]) & (arr_12 [i_6] [9] [i_6] [i_6 + 2]))) : (((-1 ? var_5 : -1)))))))));
    }
    var_25 = 92;
    var_26 = ((!(max(var_10, (!var_3)))));
    #pragma endscop
}
