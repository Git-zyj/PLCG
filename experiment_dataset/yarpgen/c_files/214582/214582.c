/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_17 = (min(var_17, 425667405));
        arr_2 [2] &= ((((((arr_0 [1] [i_0]) + var_4))) || var_14));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] = (arr_1 [2] [i_1]);

        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_12 [i_1] [12] |= (((var_13 + (arr_3 [i_2]))));
            var_18 += ((-1494 ? 0 : 84));
            arr_13 [10] [i_2] [i_2] &= (((arr_3 [i_2]) ? (arr_3 [i_1]) : 39981));
            arr_14 [i_2] = var_3;
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_19 = (((((((((arr_10 [i_1] [i_3]) ? 1789340773074469987 : 11967))) ? ((((arr_6 [i_1]) ? (arr_15 [i_1] [i_3]) : var_1))) : var_0))) || var_3));
            arr_18 [i_1] [i_3] = (min((arr_6 [i_3]), (((3 > (arr_6 [i_1]))))));
            arr_19 [i_1] [i_3] = (~95);
            arr_20 [i_1] = 4294967295;
        }
    }

    for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
    {
        var_20 = var_4;
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 6;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    arr_30 [i_4] [i_5] |= (((((((24576 ? 0 : var_11))) ? ((65531 ? 18446744073709551593 : 0)) : 233)) < 24576));
                    arr_31 [i_4] = (max(21970, (((!((!(arr_11 [i_5]))))))));
                    arr_32 [i_4] [i_4] [i_5] [i_6] = (((((var_14 ? (((14026944089443857923 ? (-127 - 1) : 247))) : var_5))) ? ((((arr_5 [i_5 + 4]) ? (arr_5 [i_5 + 2]) : (arr_5 [i_5 + 3])))) : 4294967295));
                }
            }
        }
    }
    for (int i_7 = 1; i_7 < 9;i_7 += 1) /* same iter space */
    {
        arr_37 [i_7] = (max(((((arr_21 [i_7 + 1]) ? (arr_25 [i_7 + 1]) : (arr_25 [i_7 - 1])))), 6254826446686804675));
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 8;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 6;i_9 += 1)
            {
                {
                    arr_43 [i_7] [i_7] [i_7] [i_7] = (min((min(var_3, 0)), ((((~var_3) <= (var_7 && var_8))))));
                    var_21 = (min(var_21, (((((((arr_11 [i_8]) + var_0))) ? ((((arr_11 [i_8]) ? var_13 : (arr_11 [i_8])))) : ((1 ? 9 : var_9)))))));
                }
            }
        }

        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            var_22 = (max(var_22, (arr_11 [1])));
            var_23 = 268435455;
            var_24 = ((247 | (max(var_14, (14594 || var_13)))));
            var_25 = (min(var_25, ((min(((-(arr_6 [i_7 - 1]))), (17255030639522826018 >= var_3))))));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            arr_50 [0] |= (((((var_16 || (arr_49 [1] [i_7] [i_11])))) & (11 - var_15)));
            arr_51 [i_7] [i_7] = (((arr_10 [i_7] [i_7]) <= (1 == 0)));
            arr_52 [i_11] [i_7] [i_7] = ((+(((arr_17 [i_7] [i_11]) ? (-2147483647 - 1) : 6))));
        }
        arr_53 [i_7] = ((((max((arr_49 [i_7] [i_7] [i_7]), (min(var_0, 0))))) ? ((var_6 % (max(var_14, var_8)))) : (arr_40 [i_7] [i_7])));
    }
    var_26 = (min(var_26, (~var_9)));

    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        var_27 = (arr_1 [i_12] [i_12]);
        var_28 = ((!(+-750659337)));
        var_29 = var_8;
    }
    #pragma endscop
}
