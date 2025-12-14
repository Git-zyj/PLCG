/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_16 = (max(var_16, (((var_4 >= ((((!(((-2360945440629793545 ? -13 : 4908))))))))))));
            var_17 = var_13;
            var_18 = ((-(((var_13 <= ((341971437 ? 55628 : (arr_2 [i_0]))))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 23;i_4 += 1)
                    {
                        {
                            arr_14 [i_0] = ((var_8 >= (((16478 ? 55608 : 23932)))));
                            var_19 = ((((1 ? -1073741824 : (arr_2 [i_0]))) != (((2044783535 ? 2041096576 : var_9)))));
                            var_20 = -23933;
                            var_21 = ((var_4 ? 2041096566 : ((min(var_7, -2147483622)))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_22 += ((((((max(20366, 9927))))) ? (((-32748 - (arr_11 [i_0 + 1] [20] [i_5] [i_5] [i_5])))) : ((var_2 & (var_5 & -1)))));
            arr_17 [i_0] [i_0] [i_5] = ((~(1073741804 || var_10)));
            arr_18 [i_0] [i_5] [i_5] = ((((((arr_12 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1]) - (arr_12 [i_0 + 2] [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1])))) - (max((32767 + 197011348), -var_10))));
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 22;i_7 += 1)
            {
                var_23 = arr_19 [i_7 - 1];
                var_24 = var_4;
            }
            arr_25 [i_0] [i_0] = (((!var_15) ? (((((arr_24 [i_6] [i_0] [i_0]) && -23922)))) : (arr_1 [i_0] [15])));
        }
        /* vectorizable */
        for (int i_8 = 2; i_8 < 21;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    {
                        arr_35 [i_10] [i_9] [i_0] [i_0] [9] = (~(arr_12 [i_0] [i_0] [i_8 - 2] [i_9] [i_9] [i_10]));
                        var_25 = (~var_5);
                    }
                }
            }
            var_26 = (arr_26 [i_0]);
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 21;i_13 += 1)
                    {
                        {
                            arr_47 [i_0] [i_8] [i_8] [i_12] [i_0] = var_12;
                            var_27 = (var_11 || var_1);
                            var_28 += 0;
                        }
                    }
                }
            }
        }
        var_29 = 2274947094;
        arr_48 [i_0] = 148;
        var_30 = ((+(((((2253870720 ? (arr_29 [13] [i_0] [i_0]) : 0))) ? 75 : (!var_2)))));
        arr_49 [i_0] = (((arr_28 [i_0]) ? var_15 : ((~((var_10 ? var_1 : (arr_33 [14] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 19;i_14 += 1)
    {
        arr_52 [i_14] [i_14] = (arr_44 [i_14] [i_14] [i_14] [i_14] [22]);
        arr_53 [i_14] = (!404506058);
    }

    for (int i_15 = 0; i_15 < 16;i_15 += 1)
    {
        var_31 = var_4;
        arr_57 [i_15] = (31 && var_15);
    }
    var_32 = (max(var_32, var_3));
    #pragma endscop
}
