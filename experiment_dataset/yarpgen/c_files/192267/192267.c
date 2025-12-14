/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = min(((min(305104044, var_9))), 1524604828);
                    var_17 = min((((var_15 ? (arr_5 [i_0]) : var_6))), 10329);
                }
            }
        }

        for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
        {
            var_18 = ((!(((~(~-7960))))));
            var_19 = (max(var_19, (arr_3 [i_0])));
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {
                        var_20 = ((-((((arr_14 [i_6]) > 1524988114)))));
                        var_21 = (min((min((arr_13 [i_4]), (arr_13 [i_0]))), (((-127 - 1) / (arr_13 [i_6])))));
                    }
                }
            }

            for (int i_7 = 1; i_7 < 15;i_7 += 1)
            {

                /* vectorizable */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    arr_26 [i_7] [i_7] [i_4] [i_4] [2] [i_4] = 127;
                    arr_27 [i_0] [i_4] [i_7] [8] |= ((arr_16 [i_7 - 1] [i_7 + 1] [i_7 + 1]) ? (arr_16 [i_7 + 1] [i_7 - 1] [i_7 - 1]) : (arr_16 [i_7 - 1] [i_7 + 1] [i_7 + 1]));
                    var_22 |= (arr_11 [i_7 - 1] [i_7 + 1] [i_7 - 1]);
                }
                arr_28 [i_0] [i_0] [i_7] = ((+((min((arr_16 [i_7 - 1] [i_7 - 1] [13]), 37)))));
            }
            /* LoopNest 2 */
            for (int i_9 = 3; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    {
                        var_23 |= ((-(~-38)));

                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            arr_38 [10] [i_4] |= ((((-(min(5725, 1226623271))))) ? 9794 : ((0 ? 158750048 : (2919037531 | -75))));
                            var_24 = (max(var_24, (((((((-127 - 1) >= (!1)))) >= (((((arr_10 [i_0]) / (arr_30 [i_0] [i_4]))))))))));
                            arr_39 [i_10] = ((39112 ? ((min(0, (~74)))) : -30722));
                            var_25 = (min((((arr_11 [i_4] [i_4] [i_11]) ? (arr_11 [i_9 + 1] [i_4] [i_0]) : var_7)), ((min(1, var_1)))));
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            var_26 = (((arr_41 [i_9 - 3] [i_9 - 3] [i_9 - 2] [i_9] [i_9 + 1] [i_9 - 3]) ? (arr_11 [i_9 - 3] [i_9 - 3] [i_9]) : (arr_11 [i_9 - 3] [i_9 + 2] [0])));
                            var_27 = (max(var_27, 1524988114));
                            var_28 |= (((((arr_20 [i_9]) != var_13)) ? (arr_29 [i_4] [1] [i_10] [i_10]) : 2670344458));
                        }
                    }
                }
            }
        }
    }
    var_29 = (min(var_13, ((55741 ? 19149 : -7))));
    var_30 = (~41479);
    var_31 = ((~(min(1, var_12))));
    #pragma endscop
}
