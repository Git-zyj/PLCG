/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_0 [i_0] [i_0]) ? ((((39940 ? 39931 : (arr_0 [i_0] [6]))) & 913)) : (min(25595, (arr_0 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_1] [1] [i_0] = ((((!(((var_5 ? 1 : 4503462188417024))))) ? ((((((arr_5 [i_0] [i_0]) ? var_8 : (arr_6 [0] [i_1] [i_0])))) ? (arr_9 [i_0] [i_1] [i_2]) : 3698608273015284084)) : ((((!(arr_2 [i_0] [i_2])))))));
                    arr_11 [i_1] [1] [i_2] [i_1] = (((((var_0 ? 1 : (min(var_4, var_11))))) ? var_0 : (arr_0 [9] [i_1])));
                    arr_12 [i_1] [i_1] [i_2] [i_1] = var_0;
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, (arr_14 [i_0] [i_0])));
                                var_14 = ((min((((arr_0 [i_2] [i_1]) ? (arr_0 [i_0] [i_3]) : var_11)), var_2)));
                                arr_18 [i_1] [i_1] [i_2] = (arr_2 [i_3] [i_1]);
                            }
                        }
                    }
                    arr_19 [i_1] = (arr_5 [i_0] [i_0]);
                }
            }
        }
        var_15 &= ((-((((min(var_2, 10))) ? (arr_8 [i_0] [0]) : var_9))));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_22 [i_5] [i_5] = (((arr_21 [3]) ? ((var_10 ? 4031771070 : (arr_21 [3]))) : var_1));
        arr_23 [1] = 1076798963;
        var_16 = (min(var_16, ((min((arr_20 [i_5]), ((((!(arr_20 [i_5]))) ? ((((arr_20 [i_5]) && (arr_20 [i_5])))) : var_11)))))));
    }
    var_17 = (((var_10 ? ((var_0 ? 3307 : var_11) : (40000 - 643479030)))));

    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
    {
        var_18 &= ((((min((arr_17 [i_6] [i_6] [i_6] [i_6] [i_6]), (((!(arr_6 [i_6] [i_6] [i_6]))))))) ? ((((4294934528 != (((arr_25 [i_6]) ? 2964975092740967768 : 39927)))))) : (arr_0 [i_6] [7])));

        for (int i_7 = 2; i_7 < 8;i_7 += 1)
        {
            arr_31 [i_6] = (((arr_2 [i_6] [i_7]) > (!914)));
            var_19 = (39940 + 11690);
        }
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            arr_34 [i_6] [i_8] [i_6] &= var_1;

            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                arr_38 [i_9] [i_8] [i_9] = (arr_26 [i_6]);
                var_20 = ((!(!26575)));
            }
        }
    }
    for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
    {
        arr_41 [i_10] |= var_2;
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                {
                    var_21 = ((-(((!(arr_37 [i_10] [0] [i_12] [i_12]))))));

                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        var_22 = var_3;
                        var_23 = (((((arr_45 [8]) ? var_9 : 58363)) >> ((((((((arr_14 [i_11] [i_12]) ? 18446744073709551615 : var_1))) ? ((var_0 << (((arr_39 [i_13]) - 19418)))) : (((arr_7 [i_13]) | (arr_15 [i_10] [i_11] [i_12] [i_10] [i_11]))))) - 1409286127))));
                    }
                }
            }
        }
    }
    var_24 = (((min(((var_5 ? -6223 : -1899939504)), var_0)) == ((-((var_11 ? var_10 : var_11))))));
    var_25 = (((var_2 ? ((var_4 ? var_5 : var_8)) : var_11)));
    #pragma endscop
}
