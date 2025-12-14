/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_0));
    var_11 |= var_0;
    var_12 *= (var_3 / ((-(var_7 * var_5))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 += (min((arr_3 [i_0]), (((((!(arr_2 [i_0]))) && ((min((arr_2 [i_0]), (-32767 - 1)))))))));
        arr_4 [i_0] = (arr_3 [i_0]);
        arr_5 [i_0] = (arr_3 [i_0]);
        arr_6 [i_0] [i_0] = (max((((-32767 - 1) & 25)), 1));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_14 = (((-(arr_0 [i_0] [i_1]))));
            var_15 = (((((9862678626652141486 == (!var_2)))) << ((((arr_7 [i_0] [i_0]) / var_9)))));
            var_16 = (min(var_16, 1));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_12 [i_0] [i_0] [4] = ((19796 ? 65535 : 1));
            var_17 = ((-(((arr_3 [i_0]) ? ((24987 ? 37225 : (arr_8 [i_2] [i_0]))) : 124))));
            var_18 ^= ((-(((arr_7 [i_2] [i_0]) * (arr_7 [i_0] [i_0])))));

            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                arr_15 [i_3] [i_3] = (arr_1 [i_2]);
                arr_16 [i_0] = ((-(((16384 != (arr_11 [i_3] [i_0]))))));
                var_19 = (min(var_19, ((min((((((arr_7 [i_0] [i_0]) + var_4)) * (((37196 * (arr_8 [i_0] [i_0])))))), (((var_2 * (arr_14 [9] [i_0] [i_2] [i_3])))))))));
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 10;i_4 += 1)
    {
        arr_20 [i_4] [i_4] = (255 & 10118);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {
                {
                    var_20 = (!var_0);
                    arr_25 [10] [i_4] [i_4] [i_4] = (((arr_23 [i_4]) ? 1 : ((((arr_17 [i_4]) <= 3818907833)))));
                }
            }
        }

        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            var_21 -= (!var_7);
            arr_28 [i_4] = (((arr_26 [i_4 - 2] [i_4]) ? (arr_26 [i_4 + 2] [i_4]) : -16887));
            arr_29 [i_4] [i_7] = (var_4 < var_4);
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            arr_33 [i_4] [i_8] [4] = ((15682360501741986667 ? 2764383571967564949 : 1));
            var_22 *= ((37223 ? var_1 : 255));
            var_23 = (((arr_23 [i_4]) ? -4798 : 3866690952));
        }
        for (int i_9 = 3; i_9 < 8;i_9 += 1)
        {
            var_24 = (min(var_24, (31 % 1)));
            arr_37 [i_4] [i_9] = ((((var_1 ? var_9 : (arr_22 [i_4] [i_9])))) ? (((15682360501741986686 >= (arr_26 [i_4] [i_4])))) : (var_2 != var_0));
            var_25 = (((arr_35 [i_4 - 2] [i_9 + 1]) < (arr_35 [i_9 + 1] [i_4 - 2])));
            var_26 += (((arr_22 [i_4] [1]) / 124));
        }
        arr_38 [i_4] = ((15682360501741986667 ? var_6 : (arr_21 [i_4])));
    }
    #pragma endscop
}
