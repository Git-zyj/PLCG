/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_4;
    var_15 += (min(0, 0));
    var_16 += var_1;
    var_17 = var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (min(((1 ? (((33355 / (arr_0 [i_0])))) : (max((arr_1 [i_0]), 18446744073709551615)))), ((((arr_1 [i_0]) > (arr_1 [i_0]))))));
        var_19 = ((+(max((15 ^ 8257), -8258))));
        var_20 = 8257;
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        var_21 = (min(((max((arr_3 [i_1] [i_1 + 2]), (arr_3 [7] [i_1 - 1])))), (arr_2 [i_1 + 1])));
        arr_4 [i_1] = -8279;
        arr_5 [i_1] [i_1] = (max((((arr_2 [i_1]) | (arr_1 [i_1 + 1]))), var_6));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_22 += (((var_12 ? (arr_7 [i_2]) : (arr_7 [i_2]))));
        arr_8 [i_2] = ((-(min(((-8268 ? var_1 : (arr_3 [i_2] [i_2]))), ((min(var_11, var_3)))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {
        var_23 = (min(var_23, (arr_3 [1] [1])));
        arr_11 [i_3] = -8253;
        var_24 += ((var_12 ? 8257 : (arr_0 [i_3])));

        for (int i_4 = 3; i_4 < 6;i_4 += 1)
        {
            var_25 += (((arr_10 [i_4 - 3]) ? (arr_10 [i_4 + 3]) : (arr_10 [i_4 + 2])));
            var_26 += 8276;
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 9;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_27 += (arr_3 [i_5 - 1] [i_5 - 1]);
                            var_28 = (min(var_28, ((((arr_12 [i_3]) ? ((-8243 / (arr_7 [i_3]))) : (arr_6 [i_7] [i_6]))))));
                            var_29 = 8236;
                            arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = (((arr_12 [i_5 + 1]) ? (arr_0 [i_4 + 4]) : (arr_12 [i_5 + 1])));
                        }
                    }
                }
            }
            arr_22 [i_3] [i_3] [i_4] = (arr_9 [i_3]);
        }
        for (int i_8 = 2; i_8 < 8;i_8 += 1)
        {
            arr_25 [i_3] [i_3] = (arr_3 [i_8 - 1] [i_8 + 1]);
            var_30 = (var_2 != var_0);
        }
        var_31 += ((-8257 ? ((((arr_19 [6] [i_3] [6]) || (arr_3 [i_3] [i_3])))) : -8259));
    }
    #pragma endscop
}
