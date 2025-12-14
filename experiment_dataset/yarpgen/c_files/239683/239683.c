/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] = (min((arr_4 [i_1] [i_0] [i_0 + 3]), (((1353 ? 18769 : -1488990071)))));
                arr_6 [i_0] [i_1] [i_1] = ((-15169 ? 10973 : 130));
                var_16 = ((((((428529484 ? 2147483647 : -29154)))) ? (((arr_4 [i_0 - 1] [i_0] [i_1]) * 1)) : (((max((arr_2 [i_0 + 3] [i_1] [9]), (arr_2 [1] [i_0 + 3] [i_1])))))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        arr_9 [i_2] |= (min((arr_4 [2] [8] [i_2 - 1]), ((((arr_2 [i_2] [i_2 + 2] [i_2 + 2]) ? -2091 : (arr_2 [i_2 - 1] [i_2 + 1] [i_2 - 1]))))));
        arr_10 [i_2] = (arr_4 [i_2] [8] [i_2 + 1]);
        arr_11 [i_2] = (arr_2 [i_2] [i_2] [i_2]);
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 12;i_3 += 1) /* same iter space */
    {
        var_17 = (arr_12 [i_3 + 4]);
        var_18 = (min(var_18, (((arr_13 [i_3 + 2]) * (arr_13 [i_3 + 3])))));
    }
    for (int i_4 = 1; i_4 < 12;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 15;i_6 += 1)
            {
                {
                    arr_23 [i_4 + 1] [i_5] [i_4] [i_4] = ((((max(((((arr_15 [i_5] [i_6 - 3]) > -13009))), var_6))) ? (max((((arr_19 [i_4 + 3] [i_4 + 3]) ? (arr_21 [i_4 - 1] [i_4 - 1] [2]) : (arr_21 [i_4] [i_4] [i_6]))), var_7)) : (((arr_19 [i_6] [i_4]) ? (arr_14 [i_4 - 1]) : (arr_14 [i_5 + 1])))));
                    var_19 = (min(var_19, (((1488990070 ? 60 : 72)))));
                    arr_24 [i_4] [i_4 + 1] [i_5] [i_6 - 2] = (max((max((min(var_4, (arr_14 [i_4]))), ((((arr_14 [i_5]) <= var_0))))), (min(4018, 12988))));
                }
            }
        }
        arr_25 [i_4] [i_4 + 3] = (max(((~(arr_21 [i_4 + 1] [1] [i_4 - 1]))), (min((arr_19 [i_4 + 3] [i_4 + 4]), 65535))));
    }
    var_20 = (min(14, 33554431));
    var_21 = ((~((var_7 ? var_8 : 31))));
    #pragma endscop
}
