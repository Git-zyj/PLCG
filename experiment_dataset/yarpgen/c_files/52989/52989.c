/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_20 &= (((((arr_2 [13] [i_0]) + 62376)) <= 82));

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            var_21 = (min(var_21, (var_2 == 473370532120915299)));
            var_22 = (min(var_22, (arr_2 [i_0] [i_1])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        var_23 = (arr_7 [i_1 - 1] [i_3 - 1] [i_3 - 1]);
                        var_24 = (arr_2 [i_1] [i_2]);
                        arr_13 [i_0] [i_0] [i_1] [i_0] = (arr_12 [i_2]);
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 13;i_6 += 1)
                    {
                        {
                            var_25 ^= (arr_20 [i_6 - 2] [i_6 + 1] [i_6 + 2] [i_6] [i_6 - 2] [i_6 - 3]);
                            var_26 = ((-(arr_3 [i_1 + 2] [i_1])));
                        }
                    }
                }
            }
        }
        var_27 = (min(var_27, (((((62376 ? -79 : (arr_2 [i_0] [i_0]))) != (arr_22 [i_0] [i_0] [11] [i_0] [i_0]))))));

        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            var_28 = (((((arr_0 [i_0]) % var_14))) && (arr_1 [i_7]));

            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                var_29 = (arr_6 [4] [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        {
                            var_30 = (arr_3 [i_0] [i_9]);
                            var_31 = (1 & var_15);
                            var_32 = 0;
                        }
                    }
                }
                var_33 = (((arr_11 [i_8] [i_7] [i_7] [i_7] [i_0]) == (((arr_27 [i_0] [i_7] [i_0] [i_8]) ? 20918 : (arr_0 [5])))));
            }
        }
        var_34 = -649409454743403310;
    }
    for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
    {
        var_35 = (-(((arr_32 [i_11] [i_11]) * ((((arr_5 [i_11] [i_11] [i_11] [i_11]) & (arr_29 [i_11] [i_11] [i_11] [i_11] [i_11])))))));
        var_36 = ((((max((arr_4 [i_11] [6] [i_11]), (arr_31 [i_11] [i_11] [i_11] [i_11] [8] [i_11])))) || ((((var_11 ? var_5 : 24891)) == (2991 ^ -1566407115)))));
        var_37 = var_14;
        var_38 = (((((arr_24 [i_11]) ? (arr_8 [i_11] [i_11]) : (arr_32 [i_11] [i_11]))) >> (((((arr_22 [i_11] [i_11] [i_11] [i_11] [i_11]) & (arr_22 [i_11] [i_11] [i_11] [i_11] [i_11]))) - 4514))));
        var_39 *= (14 ? 15121136894457895834 : 62544);
    }
    for (int i_12 = 2; i_12 < 17;i_12 += 1)
    {
        var_40 = ((~(((!8637065208377195092) ? (arr_37 [i_12 - 1]) : 10631853313158346648))));
        arr_39 [i_12] = arr_38 [i_12 - 2] [i_12 - 1];
        var_41 = -14179;
    }
    var_42 = var_15;
    #pragma endscop
}
