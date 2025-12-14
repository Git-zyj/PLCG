/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += ((max(var_15, var_4)) <= var_0);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_17 = (max(var_17, var_5));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_10 [i_1] [i_1] [i_1] [i_0] = -12;
                var_18 = (arr_3 [18] [i_1 + 2]);
            }
            var_19 = (min(var_19, var_13));

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                arr_13 [6] [i_1] = (((((!(arr_11 [i_3] [i_1] [i_3] [i_1])))) != 0));
                var_20 += ((-(max((min((arr_1 [i_0]), (arr_4 [i_0] [i_1] [i_0]))), (!9610884950302690872)))));
            }
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {

                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    arr_22 [i_0] [6] [i_4] [6] [8] [i_4] = ((((min(((max(32762, var_3))), ((var_15 ? (arr_7 [i_0]) : var_2))))) ? (max((arr_20 [i_4] [i_4] [i_0] [i_6 + 1] [i_0] [15]), (arr_20 [i_0] [i_4] [i_5] [i_6 - 1] [i_4] [i_0]))) : ((((var_13 || (!16687)))))));

                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_21 = arr_14 [i_7] [17];
                        var_22 = (min(var_22, ((((((arr_3 [i_5] [i_5]) ? var_3 : 69)) + (arr_16 [i_6 + 1] [i_4]))))));
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_23 = (arr_3 [i_0] [i_6]);
                        arr_27 [3] [i_4] [11] = (max((((174476241 % var_14) / (((arr_19 [i_4]) ? var_2 : 90)))), ((((12922997891451698072 ? -1790087592 : (arr_3 [15] [i_4]))) & ((max((arr_25 [i_0] [10] [i_0]), (arr_16 [i_4] [i_4]))))))));
                    }
                    var_24 = var_5;
                    var_25 = ((((25773 ? var_5 : (min(7, var_7)))) / (arr_23 [11] [i_0] [i_5] [i_0] [i_0])));
                    var_26 |= (((arr_26 [17] [i_6] [i_5] [i_6 + 2] [i_6 + 1]) > (((arr_20 [i_6] [i_5] [i_5] [18] [i_0] [i_0]) | (((max(var_12, var_0))))))));
                }
                var_27 += (min((max(7833, (min(var_6, var_8)))), (-1477880008 % 15497)));
                arr_28 [i_5] [i_5] [i_4] [i_5] = ((((((arr_26 [i_0] [i_4] [i_4] [i_4] [i_4]) ? var_9 : (arr_26 [15] [i_0] [i_4] [i_4] [i_5])))) ? ((((arr_21 [i_0] [i_4] [i_4] [i_5]) ? ((var_10 ? (arr_23 [i_0] [i_0] [i_4] [i_4] [i_5]) : var_12)) : ((224 % (arr_2 [14])))))) : var_11));
                var_28 = ((~((((arr_7 [i_0]) || var_15)))));
            }
            var_29 = 11499318040083428927;
        }
        arr_29 [i_0] = (((min((!15851), 4415))) ? ((max(((-22056 ? -16707 : var_1)), 1))) : -720660870126808848);
    }
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        arr_32 [4] |= var_14;
        arr_33 [13] [i_9] = (arr_14 [1] [i_9]);
        arr_34 [i_9] [4] |= ((((max((min((arr_19 [4]), (arr_4 [i_9] [i_9] [i_9]))), (((var_13 ? var_0 : 10334)))))) ? ((16348 * ((((arr_17 [0] [i_9] [0] [0]) && var_5))))) : ((((0 ? var_9 : var_3)) * (arr_12 [i_9] [i_9] [i_9] [i_9])))));
    }
    #pragma endscop
}
