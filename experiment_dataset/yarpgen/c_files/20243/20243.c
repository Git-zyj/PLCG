/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = (-1 * 73);
        arr_2 [i_0] [i_0] = 111905535118187539;
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 12;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {
                    var_20 = ((-1 ? 190 : -111905535118187540));

                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        arr_14 [i_1 - 3] [i_1] [1] [1] [i_2] = (!235);
                        arr_15 [i_1] [i_2] [i_3 - 1] [i_4] = 1;
                        var_21 = (223 > 121);
                        var_22 = ((!((!(arr_13 [i_1])))));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            var_23 = (max(var_23, (((109 * (arr_4 [i_3 - 1]))))));
                            arr_22 [i_5] [i_2] [i_2] [i_1] = (arr_6 [i_1 - 4] [i_2]);
                            var_24 = (max(var_24, (arr_6 [6] [8])));
                        }

                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_25 = (min(var_25, ((((((arr_8 [i_1] [i_1] [5]) == (arr_21 [i_2] [3] [i_3]))) ? (arr_10 [1]) : 255)))));
                            arr_25 [i_2] [i_1] [i_3] [i_2] [i_2] = ((((((arr_5 [i_1] [i_1]) ? 3484679137 : (arr_3 [i_3])))) ? -21 : (arr_3 [i_1])));
                            var_26 = (min(var_26, (((~(arr_12 [i_7] [i_3 - 1] [i_2] [i_1 - 1]))))));
                        }
                        for (int i_8 = 3; i_8 < 13;i_8 += 1)
                        {
                            arr_29 [7] [7] [i_2] [i_5] [i_5] = ((0 ? ((2049051887 ? 1 : (arr_19 [i_2] [i_5] [i_2]))) : ((-(arr_5 [i_8] [i_3 - 1])))));
                            var_27 = ((1 ? 104 : (((arr_19 [i_2] [i_2] [i_3 - 1]) ? 8796093022208 : 1))));
                            arr_30 [i_2] [13] [i_3 - 1] [i_2] = (arr_10 [i_2]);
                        }
                        arr_31 [12] [i_2] [i_3] [i_5] |= (!22);
                    }
                }
            }
        }
        arr_32 [i_1 - 2] = (((arr_7 [i_1 - 3] [0]) ? (arr_7 [i_1 - 3] [2]) : (arr_7 [i_1 - 3] [1])));
    }
    var_28 = (min(var_28, (((!((max(((1 ? var_7 : 1)), 0))))))));
    #pragma endscop
}
