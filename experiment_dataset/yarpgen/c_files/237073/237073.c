/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 *= ((((!(arr_0 [12]))) ? (((arr_0 [4]) ? 1 : (arr_1 [10]))) : ((((arr_1 [10]) && 29)))));
        arr_3 [1] [i_0] = (((((((arr_1 [i_0]) == var_0)))) % (~-29)));
        arr_4 [i_0] [10] = (!(((29 / (arr_2 [i_0] [i_0])))));
        arr_5 [i_0] = ((2147483647 % (((((arr_2 [i_0] [i_0]) ? -30 : (arr_0 [i_0]))) - ((-29 ? (arr_0 [i_0]) : var_14))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        var_17 = (((arr_6 [i_1 - 2]) <= (arr_6 [i_1 + 1])));

        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                arr_12 [4] [4] |= (119 + 84);
                var_18 = (min(var_18, var_6));
                arr_13 [10] |= ((~(((-2147483647 - 1) ^ 20))));
                var_19 = (min(var_19, (arr_9 [18])));
            }
            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                var_20 &= var_14;
                var_21 &= (((!(-127 - 1))));

                for (int i_5 = 2; i_5 < 18;i_5 += 1)
                {
                    arr_18 [i_2] [1] [i_2] [i_2] = (((arr_11 [i_2]) ? (arr_10 [i_2] [i_2] [i_2] [i_1]) : 1));
                    var_22 ^= ((109 ? (!var_5) : -10548));
                    var_23 ^= (((arr_10 [i_5] [i_5] [i_5] [i_2 - 1]) ? -828631953 : -40));
                }
            }
            for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
            {

                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    var_24 *= (((arr_19 [i_7] [i_2] [i_7]) - (arr_20 [i_1])));
                    arr_23 [i_1] [16] [i_2] [16] [i_7] = ((-(arr_22 [17] [i_2 - 1] [1] [i_6 - 1] [i_7] [i_2])));
                }
                arr_24 [i_1] [i_2] [i_2] [i_6] = ((arr_7 [8] [8]) | (((!(arr_7 [i_6] [i_1])))));
            }
            for (int i_8 = 1; i_8 < 17;i_8 += 1) /* same iter space */
            {
                arr_27 [i_2] [7] [7] [i_8] = (arr_17 [i_2] [i_1 - 2] [i_1] [i_2]);
                var_25 *= arr_9 [14];
            }
            var_26 = (min(var_26, 32));
        }
    }
    /* vectorizable */
    for (int i_9 = 4; i_9 < 12;i_9 += 1)
    {
        var_27 -= ((var_8 ? ((var_11 ? 0 : (arr_10 [i_9] [1] [12] [i_9]))) : var_13));
        var_28 &= (((((arr_2 [i_9] [4]) / 1)) <= 1));
        var_29 = var_14;
    }
    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        arr_34 [i_10] &= ((1 * (arr_7 [i_10] [i_10])));
        var_30 = (min(var_30, (((1 << (117 - 91))))));
        var_31 &= ((-((((max(var_3, var_5))) ? 1 : ((1 ? -40 : (arr_7 [i_10] [3])))))));
        var_32 = (max(var_32, (min((min((arr_19 [i_10] [i_10] [i_10]), var_8)), 9))));
        var_33 ^= ((min(var_12, 2147483639)));
    }
    var_34 *= (max(var_4, var_15));

    for (int i_11 = 0; i_11 < 21;i_11 += 1)
    {

        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {
            var_35 = (min(var_35, ((min((((((var_10 ? (arr_35 [i_12]) : (arr_38 [i_11]))) >= (((arr_35 [i_11]) ? 3 : 0))))), (arr_36 [i_12]))))));
            var_36 = (min(var_36, (((1 % (arr_40 [i_12] [i_11]))))));
        }
        arr_41 [i_11] |= 50;
        var_37 = ((-(arr_36 [9])));
    }
    /* vectorizable */
    for (int i_13 = 4; i_13 < 24;i_13 += 1)
    {
        arr_44 [i_13] [i_13] |= (-(arr_42 [i_13 - 2] [i_13 - 2]));
        arr_45 [i_13] [i_13] = arr_42 [i_13 - 3] [i_13 - 3];
    }
    /* LoopNest 3 */
    for (int i_14 = 4; i_14 < 11;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 15;i_16 += 1)
            {
                {
                    var_38 = (min(-30, ((var_14 & (arr_6 [i_15])))));
                    arr_56 [i_15] [i_15] [8] = (-17426 <= 98);
                }
            }
        }
    }
    var_39 &= 1;
    #pragma endscop
}
