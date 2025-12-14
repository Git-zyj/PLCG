/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (min(var_8, (((!((max(var_0, var_5))))))));
    var_12 = ((var_3 ? (max((((var_0 >> (var_7 - 8583)))), var_1)) : -var_8));
    var_13 -= (max((min(-var_8, var_0)), ((((!var_5) ^ (var_4 * var_9))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_10 [5] [i_1] [5] [i_1] = (max((arr_0 [i_0] [i_0]), (((var_10 || (arr_1 [4]))))));
                        var_14 -= (((((var_2 ? (((var_1 < (arr_4 [i_2])))) : (((var_2 < (arr_9 [i_3] [9] [i_3] [i_3] [i_3] [9]))))))) ? (~var_10) : (arr_4 [i_0])));
                    }
                }
            }
        }
        arr_11 [i_0] = (max(((min((arr_0 [i_0] [i_0]), (arr_1 [i_0])))), ((((((arr_0 [i_0] [i_0]) > (arr_1 [i_0])))) ^ (arr_1 [i_0])))));
        var_15 = (max(var_15, (((((((arr_1 [i_0]) / (arr_4 [i_0])))) == (((((var_9 ? (arr_9 [i_0] [i_0] [4] [i_0] [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_0] [10])))) ? (((arr_0 [i_0] [i_0]) ? (arr_5 [i_0] [i_0]) : var_1)) : ((var_8 >> (((arr_8 [i_0] [i_0] [i_0] [9] [i_0]) - 4593)))))))))));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        var_16 = var_8;

        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            arr_18 [i_4] [i_4] [1] = (~((max((arr_15 [i_4] [i_5]), (arr_14 [i_4])))));

            /* vectorizable */
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                arr_21 [i_4] [i_4] [i_4] [i_4] = (arr_17 [i_4]);
                var_17 = (((arr_12 [i_4] [i_6]) || (((var_5 * (arr_14 [11]))))));
            }
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                arr_25 [i_7] [i_7] [2] [i_7] &= (arr_24 [i_4] [i_4] [i_4] [i_4]);
                arr_26 [i_4] [i_4] = (min(((((arr_24 [i_4] [i_5] [i_7] [i_7]) ? (arr_24 [i_4] [i_4] [i_4] [i_4]) : (arr_24 [i_7] [i_7] [i_4] [i_4])))), (arr_16 [i_4])));
                arr_27 [i_4] [i_5] [i_4] = ((((((((arr_23 [i_7] [i_4] [i_7] [i_4]) ? (arr_13 [i_4]) : (arr_24 [i_4] [i_4] [i_4] [i_4])))) ? ((((arr_17 [i_4]) > (arr_17 [0])))) : var_4)) != (((!(arr_20 [i_7] [i_7] [i_7] [i_7]))))));
            }
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            var_18 = (min(var_18, (((((((min((arr_19 [0]), (arr_13 [i_4])))) % (arr_28 [i_4] [i_4] [i_4]))) == ((~((var_9 ? (arr_28 [i_8] [i_8] [i_8]) : (arr_20 [i_4] [i_4] [i_4] [i_8]))))))))));
            var_19 = (((1 < -112) ? (((((arr_29 [i_4]) && var_4)) ? (arr_20 [i_8] [i_8] [i_8] [i_8]) : var_8)) : (((((!var_6) <= ((~(arr_31 [i_4])))))))));
            var_20 = (max(var_20, (((((((((var_8 ^ (arr_31 [4])))) ? var_4 : ((var_7 * (arr_12 [4] [i_8])))))) - var_5)))));
        }
        var_21 = (i_4 % 2 == 0) ? (((((((arr_15 [i_4] [i_4]) > (arr_17 [i_4]))) ? (arr_17 [i_4]) : (((arr_20 [i_4] [i_4] [i_4] [i_4]) - var_1)))) << ((((~(((arr_31 [i_4]) ? (arr_15 [i_4] [i_4]) : var_4)))) + 69)))) : (((((((arr_15 [i_4] [i_4]) > (arr_17 [i_4]))) ? (arr_17 [i_4]) : (((arr_20 [i_4] [i_4] [i_4] [i_4]) - var_1)))) << ((((((~(((arr_31 [i_4]) ? (arr_15 [i_4] [i_4]) : var_4)))) + 69)) - 73))));
        var_22 = (min(var_22, (((((arr_14 [i_4]) <= (arr_14 [i_4])))))));
        var_23 = (((arr_12 [i_4] [i_4]) ? var_10 : 18));
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
    {
        arr_34 [i_9] [i_9] = ((((((arr_22 [i_9] [i_9] [i_9]) ? var_9 : (arr_23 [i_9] [i_9] [i_9] [i_9])))) ? (arr_29 [i_9]) : (max((arr_28 [i_9] [i_9] [i_9]), (((arr_32 [i_9]) ? (arr_14 [i_9]) : (arr_32 [i_9])))))));
        arr_35 [i_9] = ((((((((!(arr_17 [i_9])))) ^ (((arr_32 [i_9]) ? (arr_13 [i_9]) : (arr_22 [1] [i_9] [i_9])))))) ? ((((arr_12 [8] [i_9]) + (arr_12 [4] [i_9])))) : (max((arr_33 [i_9]), var_1))));
        arr_36 [i_9] = (((((((((arr_28 [i_9] [i_9] [i_9]) % var_7))) ? (arr_17 [i_9]) : (((((arr_19 [i_9]) == (arr_23 [i_9] [i_9] [i_9] [i_9])))))))) ? ((((min(2357436888, 2))) ^ (max((arr_20 [i_9] [i_9] [i_9] [i_9]), var_10)))) : ((-(arr_30 [i_9] [i_9] [4])))));
        var_24 += (((((arr_28 [i_9] [i_9] [i_9]) && (arr_28 [i_9] [i_9] [i_9]))) && ((((arr_29 [i_9]) ^ (arr_29 [i_9]))))));
    }
    #pragma endscop
}
