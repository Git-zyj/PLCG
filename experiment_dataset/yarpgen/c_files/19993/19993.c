/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = ((((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : -2348239777631847212))) ? ((-8902 / (arr_1 [i_0] [i_0]))) : (((var_9 == (arr_1 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2] = (arr_2 [i_0]);
                    arr_10 [i_0] [i_1] [i_2] [i_2] = (var_0 == -var_12);
                    var_20 = 1739528543087121105;
                    arr_11 [i_0] [i_1] [i_2] = (255 == 1);
                }
            }
        }
        var_21 -= 0;
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_14 [i_3] = ((~((((-35 || (arr_13 [i_3]))) ? (((arr_13 [i_3]) ? (arr_13 [i_3]) : var_8)) : var_2))));
        arr_15 [14] |= ((1 + (((arr_12 [1]) ? var_18 : (arr_12 [0])))));
        arr_16 [i_3] = (arr_13 [i_3]);

        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                var_22 = (23 & 23);
                arr_21 [2] [i_4] [2] [i_3] = (arr_12 [i_3]);
                var_23 = (max((arr_12 [i_3]), (1 & 52634836)));
            }
            for (int i_6 = 2; i_6 < 21;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 21;i_8 += 1)
                    {
                        {
                            arr_28 [i_3] [i_3] [i_4] [i_6] [i_7] [1] [i_8 + 1] = ((((max(31453, (var_11 == -35)))) / 288230376151711743));
                            var_24 = (((((((arr_23 [i_3] [i_8]) || var_5)) ? ((max(var_7, -5))) : (((var_18 + 2147483647) >> var_6))))) ? (arr_26 [i_6] [i_4]) : ((max(1, (arr_23 [i_6 + 1] [i_8 - 2])))));
                            arr_29 [i_3] [i_3] [i_4] [i_6] [18] [i_6] [i_8 - 2] = ((~(((((arr_19 [i_7]) ? var_12 : 45)) % 1))));
                        }
                    }
                }
                arr_30 [i_3] [i_6] [i_6] [i_3] &= 1;
                var_25 = 1;
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        {
                            var_26 |= max((max((~var_13), ((34 ? var_17 : 20)))), ((max((arr_32 [i_3] [i_3] [i_6] [i_9] [i_10] [i_4]), 6205))));
                            var_27 = ((((arr_24 [i_3] [i_6 + 1] [i_6] [i_4] [21] [i_3]) + 2047)));
                        }
                    }
                }
                var_28 |= -3708370304;
            }
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                var_29 = (((((arr_19 [i_3]) ? (arr_19 [i_3]) : (arr_18 [i_3]))) >> (((!(arr_18 [i_11]))))));
                var_30 = (max((max(15, 576460752303423488)), (max((arr_18 [i_4]), (~1)))));
            }
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                var_31 = (((arr_37 [i_3] [i_4] [i_4]) == ((((1 == var_18) || (((-64 + (arr_19 [8])))))))));
                var_32 -= var_7;
            }
            var_33 = (max(((((max((arr_38 [i_3]), (arr_34 [3] [i_3] [i_4] [i_3] [i_4] [1] [i_4])))) ? ((11319732411229981513 + (arr_33 [8] [8] [i_3]))) : (((max(var_12, (arr_26 [i_3] [i_4]))))))), (((var_15 + -81719934) / (arr_18 [i_4])))));
            arr_40 [i_3] = ((~(15 & 65527)));
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
        {
            arr_43 [i_3] [i_3] = -1;
            var_34 -= (max((160 + var_13), (max(var_5, (arr_39 [i_3] [18] [18] [i_13])))));
            arr_44 [i_3] [16] [5] = ((-(max((((arr_31 [i_13] [i_3] [i_3] [i_3]) >> (var_1 - 1330497192))), (arr_24 [i_3] [i_3] [i_3] [i_3] [20] [i_13])))));
        }
        var_35 = (min(var_35, 4900193131780267199));
    }
    var_36 = (~var_9);
    #pragma endscop
}
