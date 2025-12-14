/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_4 ? var_3 : ((min(3701, 61835))))));
    var_12 = (max(var_12, (((~(var_2 ^ var_9))))));
    var_13 = ((~((((9 ? var_6 : 3731))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (((((-2039238303 + (arr_2 [i_0])))) ? (arr_0 [i_0] [i_0]) : ((var_1 ? (arr_0 [i_0] [i_0]) : 9))));
        var_14 = ((((var_4 ? (arr_2 [i_0]) : 3701)) < (arr_0 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_14 [i_1] [i_1 - 1] = (((var_8 ? var_9 : 61835)));
                        arr_15 [i_0] [i_1 + 2] [i_0] [i_2 - 1] [i_1] [i_3] = 95;
                        var_15 = (((1813018574 / 29092) ? (-29456 - var_4) : (arr_0 [i_0] [i_0])));
                        var_16 = (max(var_16, (((((((arr_11 [i_0] [i_1 - 1] [i_2 - 2] [i_0]) ? (arr_9 [i_2 + 1] [i_1 + 1] [i_1] [i_0]) : var_0))) ? var_5 : (((arr_1 [i_3]) - 3715)))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            var_17 = (max((max((arr_19 [i_4] [i_4] [i_5 + 3]), (((arr_18 [i_4] [i_5 - 1]) ? var_10 : 61821)))), (min(0, 642781473))));
            var_18 = ((((((((min(var_2, (arr_18 [i_5 + 3] [i_4]))))) >= var_8))) - var_2));
            var_19 = (((arr_19 [i_5 + 1] [i_5] [i_5 - 1]) < (-8 < 29099)));
            arr_20 [i_4] [i_5 + 1] = (((((~(var_3 - 21)))) ? -20471 : (((!(arr_18 [i_5 + 1] [i_4]))))));
        }

        /* vectorizable */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            var_20 = (arr_18 [i_6] [i_6]);
            arr_23 [i_6] [i_6] = ((-20190 ? (((-27600 ? var_1 : (arr_19 [i_4] [i_4] [i_4])))) : ((var_8 << (33554416 - 33554390)))));
            var_21 = (arr_19 [i_4] [i_4] [i_6]);
            arr_24 [i_6] = -28;
        }
        for (int i_7 = 3; i_7 < 22;i_7 += 1)
        {
            arr_28 [i_4] = var_3;
            var_22 = var_8;
            var_23 = (((((min(var_9, 8)) ? (arr_25 [i_4] [i_4] [i_7 - 1]) : -127))));
        }
        /* vectorizable */
        for (int i_8 = 1; i_8 < 22;i_8 += 1)
        {
            var_24 = ((var_9 ? 4095305294 : (arr_26 [i_4] [i_8 - 1])));
            var_25 += ((var_1 ? var_10 : (arr_21 [i_8 + 1])));
        }
        arr_32 [i_4] = (~1);
        var_26 = (((arr_31 [i_4] [i_4] [i_4]) ? ((((arr_19 [i_4] [i_4] [i_4]) >= var_1))) : ((((~32768) <= (((3671 || (arr_16 [i_4])))))))));
        arr_33 [i_4] = ((var_5 ? ((3663 ? (arr_17 [i_4] [i_4]) : (arr_19 [i_4] [i_4] [i_4]))) : (arr_17 [i_4] [i_4])));
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
    {
        arr_37 [i_9] = ((((min(((var_8 ? (arr_19 [i_9] [i_9] [i_9]) : var_9)), var_2))) ? ((((var_3 > (arr_17 [i_9] [i_9]))))) : ((-var_5 ? ((-9 ? -31078 : var_8)) : (((min(var_7, (arr_22 [i_9] [i_9])))))))));
        var_27 = (min(var_27, ((((((var_8 ? -31084 : var_4)) - var_9))))));
    }
    var_28 = ((var_0 ? ((((var_4 ? var_6 : -20471)))) : (max(var_1, (var_10 - var_0)))));
    #pragma endscop
}
