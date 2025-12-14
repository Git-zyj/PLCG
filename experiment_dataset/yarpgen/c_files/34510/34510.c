/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((min((min(2048, 4065)), var_1))) <= (((((~var_15) + 2147483647)) << (130 == var_17))));
    var_20 = ((~((var_5 ? -20 : 38))));
    var_21 = var_6;

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] = (((arr_7 [i_0] [i_2]) * (arr_7 [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_22 = ((((max(((max(194, 38))), ((249241802 ? -32766 : 3))))) ? (((-(((arr_0 [i_4]) ? (arr_2 [i_1]) : (arr_15 [i_0 + 2] [i_0 + 2] [i_2] [i_0] [i_0 + 2])))))) : (max((arr_13 [i_0] [i_1] [i_2] [i_1] [i_2] [i_0] [i_0 + 2]), (!4818)))));
                                var_23 = ((~(((!(arr_13 [i_4 + 3] [i_0] [i_0] [i_0] [i_0 - 3] [i_0] [i_0 + 3]))))));
                            }
                        }
                    }

                    for (int i_5 = 3; i_5 < 9;i_5 += 1)
                    {
                        arr_19 [i_0] [i_0] [i_1] [i_2] [i_5] = (!(((((max((arr_2 [i_0 + 3]), (arr_8 [i_0 - 2] [i_0])))) ? 32765 : 32765))));
                        var_24 = (((arr_15 [i_2] [5] [i_2] [i_0] [i_5]) - ((min(65532, (arr_15 [i_0] [i_0] [i_1] [i_0] [i_1]))))));
                    }
                }
            }
        }
        arr_20 [i_0] = (((min((arr_16 [i_0 - 2] [i_0 + 1] [i_0] [i_0] [i_0] [1] [i_0]), (arr_12 [i_0 + 3] [i_0]))) / (((max((max(60718, 32304)), 4))))));
        var_25 = 4;
        arr_21 [i_0] = (min(5, -32766));
        arr_22 [i_0] = ((~(~-266547891)));
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            var_26 = (max((arr_27 [i_6] [i_6] [i_6]), (max((~var_4), 4))));
            var_27 = (min(var_27, 27970));
        }
        /* vectorizable */
        for (int i_8 = 2; i_8 < 11;i_8 += 1)
        {
            arr_32 [i_6] [i_8 - 1] [i_8] = 4194175038;
            arr_33 [i_8 + 1] = 32765;
        }
        var_28 = ((!((max((arr_31 [i_6] [i_6] [i_6]), (arr_31 [i_6] [i_6] [i_6]))))));
        arr_34 [i_6] = ((266547890 ? (max(34359705600, ((((arr_28 [i_6] [i_6]) ? -32758 : 7))))) : ((((max(100792257, (arr_29 [i_6] [i_6] [i_6])))) ? 31519 : (((~(arr_26 [i_6] [i_6]))))))));
    }
    #pragma endscop
}
