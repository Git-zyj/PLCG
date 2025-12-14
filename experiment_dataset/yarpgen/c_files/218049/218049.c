/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_10 = ((-0 ? 25060 : (((arr_1 [15]) ? -5050612627513277737 : (12 <= 8192)))));
                var_11 = (max(var_11, ((max(var_4, (((arr_1 [i_1 - 1]) ? 3584 : 9)))))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_12 = (max(var_12, (((((min(45390, 45390))) ? (arr_4 [i_1 - 1]) : var_6)))));
                    var_13 = ((((max((max(var_5, 16325)), 57344))) ? 16329 : ((((var_4 ? (arr_0 [i_1]) : var_7))))));
                }
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    var_14 = (arr_3 [i_0]);
                    var_15 = ((((!(arr_10 [i_1 - 1] [i_3] [i_3 - 1]))) ? var_6 : (!8192)));
                    var_16 = (((((arr_4 [i_1 + 1]) ? var_0 : 45374)) << ((((((((arr_6 [i_0] [i_3]) ? var_1 : 3475510323))) | (max((arr_9 [i_0] [i_1] [i_3] [i_0]), 18446744073709551614)))) - 18446744073709551607))));
                }
                arr_11 [i_0] [i_0] [i_1 + 3] = (((arr_5 [i_0] [0] [i_1 + 1] [i_1]) ? (((var_1 ? (((min((-32767 - 1), 13400)))) : (min(var_2, -16329))))) : (15 + 16316)));
                var_17 *= var_8;
            }
        }
    }

    for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_18 = ((-16 ? (((((min(var_8, 0))) ? (((3046901824125070308 ? 4 : (arr_2 [i_4] [i_4])))) : (arr_6 [i_4 + 1] [i_4 - 1])))) : 18446744073709551612));
        arr_14 [i_4 + 1] [i_4] = (max((~var_0), ((-var_0 ? ((var_0 ? var_5 : var_6)) : var_5))));
        var_19 = ((~(min(var_8, (arr_12 [i_4 - 1] [i_4])))));
    }
    for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] = (max((max(((min(21, var_1))), 6)), ((18446744073709551596 ? (max(8169, 12)) : (((57360 ? 11 : var_6)))))));
        arr_20 [10] [10] = (min(-32449, -13754));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 10;i_6 += 1) /* same iter space */
    {
        var_20 = ((!(var_3 != var_7)));
        var_21 |= ((~(~2843773838015221952)));
    }
    for (int i_7 = 1; i_7 < 10;i_7 += 1) /* same iter space */
    {
        var_22 = (min(var_22, (!1)));
        arr_27 [2] = (~-16329);
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                {
                    var_23 += 0;
                    var_24 = ((min(1, 2012091080)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            {
                arr_40 [i_10] [i_10] [i_11] = (((((((-8018 ? 1962303338 : 2481757223)) / (arr_25 [1])))) ? ((~(8128 ^ var_0))) : ((-((min(8129, var_4)))))));
                var_25 = (-(var_5 | var_1));
            }
        }
    }
    #pragma endscop
}
