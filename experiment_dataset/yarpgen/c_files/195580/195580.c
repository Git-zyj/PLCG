/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_16 = (((arr_1 [i_0 + 2] [i_0 - 3]) ? (arr_1 [i_0 + 1] [i_0 - 3]) : (arr_1 [i_0 + 2] [i_0 - 1])));
        var_17 -= ((~(arr_1 [i_0 - 1] [i_0 - 3])));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 18;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_8 [i_1] = (((((var_12 ? 255 : (arr_0 [i_2] [i_2])))) ? (((arr_1 [i_2] [i_1 - 3]) ? 18446744073709551614 : 15403)) : ((((arr_1 [i_1] [5]) ? (arr_7 [i_1] [i_2]) : 18)))));
            arr_9 [i_1] = (!(arr_1 [i_1 - 1] [i_1 - 2]));
            var_18 = ((((var_4 ? (arr_3 [i_2]) : (arr_0 [1] [1])))) % ((-7 ? (arr_1 [i_1] [i_1]) : (arr_5 [i_1] [i_2]))));
            var_19 = (((arr_0 [i_1 + 1] [i_1 + 1]) ? (arr_0 [i_1 - 3] [i_2]) : (arr_0 [i_1 - 1] [i_2])));
        }

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_20 = var_9;
            var_21 += var_11;
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 16;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            arr_23 [i_1] [i_4] = (!15413);
                            var_22 = arr_6 [i_1];
                            var_23 = (min(var_23, -93375037594560004));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                        {
                            arr_28 [i_1] [i_6] [15] [i_4] [19] [i_1] = ((!(arr_5 [i_1] [i_1 + 2])));
                            var_24 = (((arr_20 [i_4] [i_4] [1] [i_4]) ? (((!(arr_1 [i_1] [i_4])))) : (arr_17 [i_1 - 3] [i_5] [i_6] [i_6])));
                            var_25 += ((((((-32747 + 2147483647) >> (-15429 + 15446)))) ? (((-9223372036854775782 <= (arr_10 [i_5])))) : var_14));
                            arr_29 [i_4] [i_6] [i_5] [i_6] [i_8] |= (~var_10);
                        }
                        arr_30 [i_1] [i_4] [i_1] [i_5] [i_5] = (arr_17 [i_1] [i_1] [i_5] [10]);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 3; i_9 < 18;i_9 += 1) /* same iter space */
    {
        var_26 |= (arr_25 [14] [i_9] [i_9 - 1] [14] [i_9] [i_9 + 2] [i_9 - 3]);
        var_27 = ((~(arr_2 [i_9])));
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        for (int i_11 = 3; i_11 < 23;i_11 += 1)
        {
            {
                arr_39 [i_11] [13] |= (~(max(var_11, (arr_37 [i_11 - 1] [i_11 - 1]))));
                arr_40 [1] [i_11] = (min((arr_37 [i_10] [i_11]), (min(15409, (min(9222809086901354496, 35))))));
                arr_41 [i_10] = ((!(((var_3 - (arr_33 [i_11 - 2] [i_11 - 2]))))));
            }
        }
    }
    #pragma endscop
}
