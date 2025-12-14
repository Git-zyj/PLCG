/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (max(((-6 ? ((var_8 ? 13894 : var_2)) : 21455)), -633073560));
    var_12 = ((-((((21455 != -21456) || (((var_7 ? 102 : -21455))))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_13 = 21455;
                            arr_12 [i_0] [i_1] [i_1] [i_1] [i_0] = (382 / 19081);
                            var_14 += max((((!(arr_11 [i_3 + 1] [i_1] [i_2] [i_3] [i_3 + 3])))), (max((arr_7 [i_0] [i_4]), ((min(633073571, (arr_11 [i_0] [i_1] [i_2] [i_3] [i_3])))))));
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_15 [i_2] [i_2] [i_0] [i_3] [i_0] [i_1] [i_0] = (((((-633073560 + 2147483647) << (var_2 - 29073))) ^ -8));
                            var_15 += 94;
                            var_16 += (min((max((((arr_9 [i_2] [i_1] [i_2] [i_3]) ? -21455 : var_0)), 21455)), ((min((arr_2 [i_3 + 2]), (arr_2 [i_3 + 2]))))));
                            var_17 = ((21451 << (var_5 - 107)));
                        }
                        var_18 = -31083;
                        arr_16 [i_0] [i_1] [i_2] [i_2] [i_2] [i_0] = -633073560;
                        var_19 = ((((-50 == var_5) ? ((21455 ? (arr_7 [i_0] [i_0]) : (arr_14 [i_3] [i_3] [i_3]))) : (arr_5 [i_0] [i_3] [i_0]))));
                        var_20 = (max(var_20, ((0 ? 210 : -23472))));
                    }
                }
            }
            var_21 = (max(45, -6150));
            var_22 = (((arr_1 [i_0]) ? (arr_7 [i_1] [i_1]) : ((~(arr_11 [i_0] [i_0] [i_1] [i_0] [i_1])))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            arr_19 [i_0] [i_6] = 141;
            var_23 = (max(var_23, 33));
        }
        var_24 = (max((91 - -1197710004), (arr_8 [i_0] [i_0] [i_0] [i_0])));

        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                arr_25 [i_8] [i_0] [i_0] = (max((max(var_0, ((45 ? (arr_8 [i_8] [i_0] [i_0] [i_0]) : (arr_3 [i_8]))))), 56));

                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    var_25 -= var_2;
                    var_26 ^= var_2;
                    var_27 = (max(var_27, (min((max(-23487, ((var_2 ? 11 : 32)))), (((((633073560 ? 124 : -21463)) >= ((var_0 - (arr_28 [i_8] [i_8] [i_8]))))))))));
                }
            }
            for (int i_10 = 4; i_10 < 15;i_10 += 1)
            {
                var_28 = var_3;
                var_29 = var_2;
            }
            var_30 = (114 ^ -21460);
            var_31 = (min(var_31, ((((arr_22 [i_7] [i_7] [i_0] [i_0]) ? ((((175 ? (arr_31 [i_7]) : 122)) + (!var_8))) : ((((((-127 - 1) ? (arr_2 [i_0]) : (arr_9 [i_7] [i_0] [i_7] [i_0]))) <= (((var_8 < (arr_3 [i_0]))))))))))));

            for (int i_11 = 2; i_11 < 15;i_11 += 1)
            {
                arr_35 [i_0] [i_7] [i_0] [i_0] = (max(34, (!var_10)));
                var_32 = (min(var_32, (arr_34 [i_0] [i_7] [i_7])));
                var_33 = var_4;
                arr_36 [i_0] [i_7] &= (arr_8 [i_11 + 2] [i_7] [i_7] [i_0]);
            }
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                var_34 = var_9;
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        {
                            arr_43 [i_0] [i_13] [i_12] [i_7] [i_0] [i_0] = 32256;
                            arr_44 [i_0] [i_0] [i_12] [i_12] [i_0] &= -597161759;
                            var_35 = ((!((var_4 && (arr_11 [i_7] [i_7] [i_7] [i_0] [i_7])))));
                        }
                    }
                }
                var_36 += ((162 ? 248 : 16777212));
            }
            var_37 = (~-6150);
        }
        for (int i_15 = 4; i_15 < 16;i_15 += 1)
        {
            arr_48 [i_0] [i_0] [i_0] = (((~((min(var_5, -21455))))));
            var_38 = 127;
        }
        arr_49 [i_0] [i_0] = (23479 && var_5);
    }
    #pragma endscop
}
