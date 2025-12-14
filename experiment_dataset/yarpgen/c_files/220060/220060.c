/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((min(-var_9, var_10)))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    {
                        var_17 = ((!(arr_5 [12] [i_1])));
                        arr_11 [i_0] [i_0] [i_0] [5] [i_1] [8] = (((((var_8 ^ ((32762 ? (arr_3 [i_0 + 1] [i_2 + 1] [i_0]) : var_4))))) ? (min((((var_7 != (arr_1 [i_2])))), (((arr_0 [i_0 - 1]) ? (arr_0 [i_3]) : (arr_5 [0] [i_0 + 2]))))) : ((((arr_5 [i_0] [i_1]) ? ((max(-32751, -32749))) : (((var_8 || (arr_3 [i_1] [i_1] [i_0])))))))));
                        var_18 &= (((arr_2 [12] [i_2] [i_3 + 2]) ? (arr_2 [6] [16] [i_0 + 1]) : (((arr_2 [14] [14] [14]) & (arr_2 [10] [10] [i_2 - 2])))));
                    }
                }
            }
        }
        var_19 = (max(var_19, (arr_7 [10] [i_0] [i_0] [i_0])));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_14 [i_4] = (32753 && 32751);
        var_20 &= ((-32735 ? (!32757) : -32763));
    }
    for (int i_5 = 4; i_5 < 22;i_5 += 1)
    {
        arr_19 [i_5] = (((arr_18 [i_5 - 1]) ? ((((!(arr_18 [i_5 - 4]))))) : (((arr_18 [i_5 - 2]) ? (arr_18 [i_5 - 4]) : (arr_18 [i_5 - 1])))));
        var_21 = var_10;
        var_22 = (!32763);

        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            var_23 = (((((-32764 < (arr_17 [i_5] [i_6])))) || ((((arr_20 [i_6] [i_6]) ? ((((32751 || (arr_22 [i_5] [i_6]))))) : (max(var_0, (arr_15 [i_5] [0]))))))));
            var_24 = (min(var_24, ((min((arr_16 [1]), -32765)))));
        }
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            var_25 = ((((-(arr_15 [i_5] [i_7]))) / (arr_24 [i_5 - 2] [i_5])));
            var_26 = (max(((32761 ? 32757 : -32763)), (((!(((-32754 ? -32764 : 32765))))))));
            arr_26 [i_5] [i_5] = (((((arr_23 [i_5 - 2] [i_5 + 2]) < (arr_23 [i_5 - 1] [i_5 + 1]))) || (((arr_17 [i_5 - 3] [i_5 - 4]) && (arr_21 [i_7] [i_5 + 1])))));
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 0;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 23;i_10 += 1)
                    {
                        {
                            arr_34 [i_5] [i_5] [i_5] [i_8] [1] [i_10 + 1] = (((min(var_11, var_2)) % (((32751 ? (arr_24 [i_8 - 1] [i_5]) : var_12)))));
                            var_27 = (((((((min(-32754, -32749)))) <= ((-32762 * (arr_22 [i_5] [i_7]))))) ? ((((32754 < (((var_10 ? (arr_21 [6] [6]) : -32751))))))) : (max((max(-32755, (arr_31 [i_5]))), 32723))));
                            arr_35 [i_10] [i_9] [i_5] [i_8] [i_5] [20] [i_5 + 1] = ((!(((arr_16 [i_5]) || ((min(var_4, 32728)))))));
                        }
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 24;i_13 += 1)
                {
                    for (int i_14 = 4; i_14 < 20;i_14 += 1)
                    {
                        {
                            var_28 = (max(var_28, 32720));
                            var_29 = (max(var_29, ((((arr_33 [10] [10] [i_13] [20] [i_13] [14]) / (arr_45 [i_5 - 3] [i_11] [2] [i_13] [i_14]))))));
                            var_30 = (max(var_30, ((max((((((-32767 || (arr_20 [i_14] [19])))) + 32749)), ((32729 ? (arr_41 [i_11] [8] [i_14]) : var_8)))))));
                        }
                    }
                }
            }
            var_31 = var_6;
        }
        var_32 = (max(((((arr_21 [i_5] [i_5 + 1]) || -32767))), (((arr_33 [i_5] [i_5 - 1] [i_5 + 2] [i_5 - 2] [i_5] [i_5]) ? (arr_21 [i_5] [i_5 - 2]) : (arr_21 [i_5 - 1] [i_5 + 1])))));
    }
    var_33 = ((!((max(var_6, ((var_15 ? 32724 : var_3)))))));
    #pragma endscop
}
