/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                var_16 -= (min(236, 0));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_17 = -905199229934961312;
                        var_18 = (max(var_18, ((((!239531499022985823) ^ ((var_11 ? (arr_7 [i_1 - 3] [i_0] [i_1 - 3]) : (arr_4 [i_3]))))))));
                        var_19 -= ((var_12 >> (4272 - 153)));
                        var_20 = (~var_5);
                    }
                    for (int i_4 = 4; i_4 < 10;i_4 += 1)
                    {
                        var_21 = ((max((((-2147483647 - 1) ? 1 : -1376685219656875855)), (var_12 - var_8))));
                        arr_13 [i_2] [i_2] = (max((((((var_6 ? var_1 : var_10)) << 1))), (max((arr_5 [9]), (var_13 && var_5)))));
                    }

                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 9;i_5 += 1)
                    {
                        var_22 *= ((2304472743 ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 - 4])));
                        var_23 = (arr_5 [i_2]);
                        var_24 = (max(var_24, (arr_3 [i_1] [i_2] [i_5 - 2])));
                        var_25 = (var_2 || var_3);
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        var_26 -= var_10;
                        var_27 = (arr_1 [i_1 - 1] [i_2]);
                    }
                    for (int i_7 = 0; i_7 < 0;i_7 += 1)
                    {
                        var_28 *= ((((((((arr_2 [i_7 + 1]) > var_14))) >> (((arr_4 [i_1]) - 31619)))) / (((arr_18 [i_1 - 1] [i_7 + 1] [i_1]) ? (arr_18 [i_1 + 2] [i_7 + 1] [i_1]) : 22))));
                        var_29 = ((((max(7010734975881183188, var_12))) || (arr_8 [i_7] [i_1 - 2] [i_2] [i_7 + 1])));

                        for (int i_8 = 1; i_8 < 10;i_8 += 1)
                        {
                            var_30 = (((185 && 2304472726) ? ((((max(var_14, (-9223372036854775807 - 1)))) ? (((min(1, 1)))) : (arr_8 [i_8 - 1] [i_7 + 1] [i_2] [i_1 + 3]))) : 1));
                            var_31 -= 174;
                        }
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_32 = (1509850522 >= 104);
                            var_33 = (((((max(176, 37297)))) ? 1 : (~56273)));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 8;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 9;i_11 += 1)
                        {
                            {
                                var_34 = (((!var_7) ? ((min(((!(arr_12 [i_2] [i_1 - 2] [i_2] [i_2] [i_10] [i_2]))), (var_6 && 1)))) : (arr_24 [i_11 - 1] [i_11 - 2] [i_11 - 2] [i_11] [i_11] [i_11 + 2])));
                                var_35 -= ((((var_9 ? (arr_11 [1] [i_0] [i_1] [i_2] [i_10] [1]) : var_0))));
                            }
                        }
                    }
                    arr_32 [i_0] [i_1] [i_2] [1] = (max((arr_11 [i_0] [i_2] [i_2] [i_1] [5] [i_0]), (!1)));
                }
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    var_36 = ((!((((min((arr_33 [i_0] [i_1 - 3] [i_1] [i_12]), var_1))) < 1))));
                    var_37 *= (min(-2147483647, 3775015284));
                }
                var_38 -= ((((max(1, (arr_33 [2] [i_1] [9] [i_0]))))) ? (arr_16 [i_1] [i_1] [i_1] [i_1 + 2]) : (min((max(var_4, 4294967289)), ((min(3338, var_3))))));
                var_39 = ((((60796 - 134217728) == (arr_6 [3] [i_1] [i_1] [i_1]))) ? (((!(max((arr_17 [i_0] [i_0] [i_0] [i_1]), 1))))) : (arr_12 [i_0] [i_1 + 2] [i_1 - 3] [i_0] [i_0] [i_1 - 1]));
            }
        }
    }

    for (int i_13 = 0; i_13 < 15;i_13 += 1)
    {

        for (int i_14 = 1; i_14 < 13;i_14 += 1)
        {
            var_40 *= (!(arr_38 [i_13] [i_14]));
            var_41 *= (((17 < (min((arr_38 [i_13] [i_14]), var_10)))));
        }
        var_42 *= var_11;
        var_43 -= ((((((((arr_39 [i_13] [i_13]) - 1990494553))) ? ((((arr_36 [i_13]) ? (arr_36 [i_13]) : var_2))) : (min((arr_38 [i_13] [i_13]), 62199)))) == (var_7 / 1)));
    }
    var_44 -= 338013013;
    var_45 = max((!0), -358835844);
    #pragma endscop
}
