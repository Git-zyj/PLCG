/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_12, var_14));
                                arr_13 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3 - 1] [i_4] = (-127 - 1);
                            }
                        }
                    }
                    var_17 = (max(var_17, ((((((var_6 << (((arr_11 [i_0] [i_2] [i_2]) - 2356280991))))) ? (min((((arr_3 [i_0]) & (arr_11 [i_0] [i_2] [i_2]))), (arr_6 [i_0] [i_2]))) : var_15)))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        arr_17 [i_5] = ((~(((min(1, 121))))));
        arr_18 [i_5] = var_4;

        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    {
                        arr_28 [i_5] [i_5] [i_5] [i_5] [i_5] = ((((((!var_8) & ((max(var_1, 103)))))) ? 60 : ((((min(var_12, (arr_7 [i_5] [i_5] [i_5] [i_5] [1] [i_7])))) ? 37 : (arr_21 [i_5] [i_5] [i_5])))));
                        var_18 -= ((~((~(var_9 && var_13)))));
                    }
                }
            }
            var_19 = max((((!(arr_14 [i_5] [i_5])))), (arr_25 [i_5] [i_5] [i_6] [i_6]));
        }
        for (int i_9 = 2; i_9 < 23;i_9 += 1)
        {
            var_20 = max(((var_1 ? (min(var_10, var_7)) : (((min(var_15, 127)))))), ((((((var_5 ? 429163568 : var_15))) && ((min(var_1, var_12)))))));

            for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
            {
                arr_36 [i_5] [0] |= ((((!((max(var_1, var_14))))) ? (min((arr_11 [i_9 - 1] [2] [i_9 - 1]), (((var_4 >> (var_7 - 3890697817275677812)))))) : ((((var_1 <= 1) >> ((((var_9 ? 150 : var_13)) - 147)))))));
                arr_37 [i_5] [i_5] [i_10] [20] &= (arr_24 [i_5] [i_5] [i_5] [i_10] [i_10]);
                arr_38 [i_5] [12] [i_5] |= (max((arr_34 [i_5] [i_5] [i_5]), ((~(min(var_12, (arr_2 [i_5])))))));
            }
            for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 23;i_13 += 1)
                    {
                        {
                            arr_47 [i_5] [i_9] [1] [i_12] [20] [i_5] [i_5] = var_2;
                            arr_48 [i_5] [i_9] [i_11] [i_12] [i_13] = ((arr_44 [i_9] [i_12] [i_13]) ? (105 <= var_1) : ((+((((arr_1 [i_5]) > -38))))));
                        }
                    }
                }
                var_21 = (min(var_6, (max(((((arr_42 [i_5] [i_5] [i_5] [i_11]) == 16630027387043924428))), var_7))));
            }
            for (int i_14 = 0; i_14 < 24;i_14 += 1) /* same iter space */
            {

                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    arr_53 [i_5] [i_14] [i_5] [i_9] [i_5] = var_10;
                    var_22 -= min(((max(483819966, 198))), (arr_15 [2]));
                }
                arr_54 [i_5] [i_5] [i_5] [i_5] = var_1;
                arr_55 [i_5] [i_9] = (min(((((arr_43 [i_9 + 1] [i_9 - 1] [i_14]) && (arr_43 [i_9 + 1] [i_9 - 1] [i_9])))), ((17469610465857140017 + (arr_43 [i_9 + 1] [i_9 - 1] [i_9 + 1])))));
                arr_56 [i_5] [i_9 - 2] [i_5] = (((-(max((arr_25 [i_9 - 1] [i_9 + 1] [i_9] [i_9]), (arr_16 [i_5]))))));
                arr_57 [i_9] [i_5] = ((+((var_4 ? (max((-127 - 1), -777800473)) : var_8))));
            }
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 22;i_17 += 1)
                {
                    {
                        var_23 = var_11;
                        arr_64 [i_5] [i_9] [i_17] = ((~(max((arr_32 [i_5]), (arr_4 [i_5] [i_9 + 1] [i_9 + 1])))));
                        arr_65 [22] [i_5] [i_16] [i_5] [22] = ((((~(var_1 != 1483823648))) != (((!((max((arr_58 [i_5] [7] [7]), var_15))))))));
                        arr_66 [i_5] = ((!((((~var_9) + (((~(arr_10 [i_5] [i_5] [i_16] [i_17 + 1])))))))));
                    }
                }
            }
        }
        for (int i_18 = 1; i_18 < 1;i_18 += 1)
        {
            arr_70 [i_5] [1] |= (max((max(0, ((var_15 ? var_9 : (arr_24 [i_5] [i_5] [i_5] [i_5] [0]))))), (((max(var_12, (arr_21 [i_18] [i_18] [22])))))));
            var_24 = (min(var_24, ((max(((((min(0, 253))) ? (((min(42, 106)))) : 977133607852411599)), ((15 ? (max((arr_29 [1]), 2358595458543858338)) : (arr_46 [i_18 - 1] [i_18 - 1]))))))));
        }
    }
    var_25 |= (max((max(((max(52, 0))), var_0)), (((!((max(255, var_1))))))));
    var_26 |= var_14;
    #pragma endscop
}
