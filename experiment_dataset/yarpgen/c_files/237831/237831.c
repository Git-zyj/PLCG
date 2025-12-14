/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_13, ((var_13 ? var_0 : ((min(var_6, var_9)))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = ((~(258280515653717609 % 18188463558055834006)));

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_16 = (((min(164, 4797492122714541099)) - (((258280515653717609 ? ((max(18367, 65526))) : -8120)))));

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                arr_11 [i_2] [i_1] [i_0] = (((min(var_2, (arr_5 [i_0] [i_0] [i_0]))) % ((min(var_11, var_12)))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 24;i_4 += 1)
                    {
                        {
                            var_17 = (((max(3384155974, var_2))) ? var_3 : (min((~var_9), (!var_6))));
                            var_18 = (max((arr_13 [i_1] [i_1] [i_1 - 1] [i_1]), (min((arr_8 [i_1 + 3]), var_11))));
                        }
                    }
                }
                var_19 = (arr_15 [i_1]);

                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    var_20 = 120;
                    var_21 = (((!(((var_2 ? var_5 : var_7))))));
                    var_22 = ((+(max((arr_6 [i_1 + 4] [i_1 + 3]), var_2))));
                    var_23 = ((((-((var_1 + (arr_16 [i_0] [i_0] [i_1 + 3] [i_1] [i_2] [i_5] [i_5])))))) ? (arr_18 [i_1 + 1] [i_1]) : (arr_17 [i_1] [i_1]));
                }
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    var_24 = ((((arr_6 [i_0] [i_1]) + 9223372036854775807)) << (((((~var_5) + 51600)) - 12)));
                    var_25 = (max(532558482025726071, (((4143904847 - (min(0, 0)))))));
                }

                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        arr_27 [i_0] [i_1] [i_0] [i_0] [i_0] = ((-(arr_19 [i_1 + 1] [i_1] [i_1] [i_1 + 3])));
                        var_26 = ((!(arr_15 [i_1])));
                        var_27 = ((!((((arr_14 [i_0] [i_1] [i_0] [i_7] [i_0]) / 255)))));
                    }
                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 24;i_9 += 1)
                    {
                        var_28 = 65533;
                        arr_31 [i_1] = (!3);
                    }
                    var_29 = (i_1 % 2 == zero) ? (((((((((arr_18 [i_1 + 1] [i_1]) + 2147483647)) >> (((arr_18 [i_1 + 4] [i_1]) + 12587))))) * (((arr_22 [i_2] [i_1 + 2] [i_1 + 3]) ? (arr_22 [i_1] [i_1 + 2] [i_1 + 3]) : var_2))))) : (((((((((arr_18 [i_1 + 1] [i_1]) + 2147483647)) >> (((((arr_18 [i_1 + 4] [i_1]) + 12587)) + 9632))))) * (((arr_22 [i_2] [i_1 + 2] [i_1 + 3]) ? (arr_22 [i_1] [i_1 + 2] [i_1 + 3]) : var_2)))));
                }
            }
        }
        var_30 = (min((((!((((arr_13 [i_0] [i_0] [i_0] [i_0]) + var_5)))))), ((-(arr_25 [i_0])))));
        arr_32 [i_0] = (arr_13 [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_10 = 3; i_10 < 20;i_10 += 1)
    {
        arr_37 [i_10] [i_10] = ((!(1779674425 / 219)));
        arr_38 [i_10] [i_10] = (-579050924 * 0);
        /* LoopNest 2 */
        for (int i_11 = 2; i_11 < 22;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 23;i_12 += 1)
            {
                {
                    var_31 = ((2047 ? 1402827552894447972 : 1));
                    arr_44 [i_10] = (((min((arr_30 [i_12] [i_11 - 2] [i_11] [i_10 + 2] [i_10]), ((var_3 ? var_7 : (arr_0 [i_10]))))) << ((((~(~var_10))) + 7393625855161281406))));
                }
            }
        }
    }
    var_32 = max((min((~var_13), var_9)), var_7);
    var_33 = (max(((((max(25974, -4564094360486448688)) == var_11))), var_1));
    #pragma endscop
}
