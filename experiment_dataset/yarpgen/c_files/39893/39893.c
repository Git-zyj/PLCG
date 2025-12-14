/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += 69;
    var_18 = ((((var_9 <= (!2434944290))) ? (((!((max(var_4, -116)))))) : var_13));
    var_19 = (max(((((var_13 ? var_6 : 2417685237)))), -var_16));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = (((1860022980 ? var_10 : (arr_0 [i_0]))));
        arr_2 [i_0] = ((((((((arr_1 [i_0] [i_0]) ? var_15 : (arr_0 [i_0])))) == var_4)) ? (((1860022999 ? 2491747145 : var_12))) : (((var_10 / (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            var_21 = (((var_16 || var_7) * ((116 ? ((-(arr_4 [i_2] [i_1]))) : ((min((arr_1 [i_1] [i_1]), var_5)))))));
            var_22 &= ((2434944266 ? (max(4294967295, (arr_5 [i_2 + 1] [i_2 + 1]))) : (((var_12 ? var_3 : (arr_5 [i_2 - 2] [i_2 - 1]))))));
        }
        var_23 = (((((2417685236 >= 2491747139) && (~-13)))) ^ -var_13);
    }
    for (int i_3 = 1; i_3 < 20;i_3 += 1)
    {
        var_24 = (max((min(var_13, (max(var_8, var_10)))), (((2417685232 ? (arr_8 [i_3 + 1]) : ((min(var_5, -2))))))));

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            arr_11 [i_3] [i_3] [i_3] = ((((min(var_0, (min((arr_10 [i_4] [i_3 - 1] [i_3]), 4294967280))))) ? (((+(min((arr_8 [i_4]), var_2))))) : (max((arr_8 [i_3 + 4]), 2491747124))));

            /* vectorizable */
            for (int i_5 = 2; i_5 < 23;i_5 += 1) /* same iter space */
            {
                var_25 = (!(arr_8 [i_5]));
                var_26 = ((!(arr_12 [i_3])));
                arr_15 [i_3] [6] [19] [i_5] = (!var_2);
                var_27 = (arr_14 [i_5 - 2] [i_4] [i_5] [i_4]);
            }
            for (int i_6 = 2; i_6 < 23;i_6 += 1) /* same iter space */
            {
                var_28 = ((!((max(4294967288, 1551626227)))));
                arr_20 [i_3] [i_3] [17] = ((4294967278 ? var_15 : (max((arr_13 [i_3 + 3] [i_3 + 2] [i_4] [i_6]), (arr_18 [i_3] [i_6 - 1] [i_4] [i_3])))));
            }
            for (int i_7 = 2; i_7 < 23;i_7 += 1) /* same iter space */
            {
                var_29 = max((!var_4), var_15);
                arr_23 [i_3] [i_3] [5] = (((arr_14 [i_3] [i_4] [i_7 - 2] [i_4]) != (min((max(4294967278, var_0)), ((var_16 << (((arr_8 [i_7 + 1]) - 54107))))))));
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    var_30 = (arr_22 [i_8] [16] [16]);
                    var_31 = ((-(min(37334, 1877282050))));
                    var_32 = var_8;
                    var_33 = (min(var_33, ((((((var_2 | ((((arr_13 [i_3 + 4] [1] [9] [i_9]) ? var_11 : var_2)))))) ? (1877282048 && -24) : (max((((arr_24 [20] [i_8]) ? var_9 : (arr_10 [i_3] [7] [i_9]))), (var_0 | var_2))))))));
                    var_34 = (!var_15);
                }
            }
        }

        for (int i_10 = 1; i_10 < 21;i_10 += 1)
        {
            var_35 = ((((((arr_14 [i_10] [22] [1] [i_3 + 4]) ? (arr_8 [i_3]) : (max((arr_9 [i_10] [i_10 + 1] [1]), 137438953471))))) ? (min(1, ((var_5 ? (arr_18 [i_3] [i_3 - 1] [i_10] [i_10]) : var_8)))) : 4294967286));
            arr_30 [10] [i_10] [18] &= ((((!((134217664 && (arr_7 [i_3] [i_3]))))) && -1));
            var_36 = ((-((((arr_7 [i_10 + 3] [i_3 - 1]) >= (arr_7 [i_10 - 1] [i_3 + 4]))))));
        }
    }
    var_37 = var_15;
    #pragma endscop
}
