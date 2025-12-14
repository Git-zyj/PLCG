/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = (min(var_16, (((-32767 - 1) < (arr_1 [i_0])))));
        var_17 = (min((arr_0 [i_0]), -171044012));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = (var_5 < var_13);
                    var_18 = (min(70, (((!(((-(arr_8 [i_0] [i_0] [i_2])))))))));
                    var_19 *= ((~(arr_1 [i_2])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_20 = ((var_4 ? (arr_7 [i_3] [i_3]) : (arr_5 [i_3] [i_3] [i_3])));

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_21 = (((arr_11 [i_3]) ? (!var_15) : (arr_2 [i_4] [i_4])));
            var_22 = (~10558582313427702967);
            arr_15 [i_4] = (var_6 | 65529);
        }
        for (int i_5 = 2; i_5 < 23;i_5 += 1)
        {
            var_23 = ((var_7 ? (arr_3 [i_5 + 2]) : (arr_14 [i_5 + 1])));
            var_24 = (min(var_24, ((((arr_7 [i_3] [i_5]) ? var_6 : -4868100771553093488)))));

            for (int i_6 = 3; i_6 < 21;i_6 += 1)
            {
                arr_21 [i_3] [i_6] = ((((((arr_18 [i_6] [i_6] [i_6] [i_5]) ? var_5 : 32767))) ? (var_1 / var_0) : (((~(arr_17 [17] [i_6] [17]))))));
                var_25 = (max(var_25, ((((arr_19 [i_3]) / (arr_19 [i_5]))))));
                arr_22 [i_6] [i_6] [i_6] [i_5] = ((!(((var_7 ? var_1 : (arr_1 [i_3]))))));
            }
        }
    }

    for (int i_7 = 2; i_7 < 19;i_7 += 1)
    {
        var_26 = (min(var_26, ((min((arr_24 [1]), (((arr_24 [i_7]) % 1222517675)))))));
        var_27 = (((((((min(var_7, (arr_8 [i_7] [i_7] [i_7])))) | 32767))) ? var_12 : (min((arr_7 [i_7 - 1] [i_7 - 2]), (arr_11 [i_7 - 1])))));

        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    {
                        var_28 += (arr_31 [i_7] [i_7] [i_7] [i_7] [i_7]);
                        arr_34 [i_7] [i_7] [i_7 - 1] [i_7] [i_7] [i_7] |= ((((arr_32 [i_9] [i_10] [i_10] [i_10 - 1] [i_10 - 1]) ? (min(var_9, (arr_32 [i_7] [i_7] [i_7 - 1] [i_7 - 1] [i_7]))) : var_12)));
                    }
                }
            }
            var_29 = (min(var_29, (184 || 223)));
            var_30 = 1707031846039228881;
        }
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            arr_37 [i_7 - 1] [i_11] [i_11] = (min((((~((min(1, 65)))))), (min(-32763, ((var_6 * (arr_33 [i_11] [i_7] [i_11] [i_7] [i_7] [i_7])))))));
            var_31 = (min(var_31, (((-var_13 ? ((((min(-10, 32767))) ? (((min(var_4, 1)))) : (min(-10, 1112562601463133437)))) : ((((var_10 ? (arr_7 [i_7] [i_7]) : -7917489415723230159)) / -var_3)))))));
            arr_38 [i_7] = (((((-var_8 + ((16 ? var_5 : (arr_6 [i_11] [i_7] [i_11])))))) ? 1 : 190));
            arr_39 [i_11] = ((~((-333 ? -937673716 : (arr_4 [i_7 - 1] [i_11])))));
        }
        arr_40 [i_7] = ((((((var_9 % (arr_12 [i_7] [i_7 - 2])))) ? (arr_7 [i_7] [i_7 - 2]) : (arr_33 [i_7] [i_7] [i_7] [i_7] [i_7 + 1] [i_7 + 1]))));
        var_32 = (((arr_5 [i_7 - 1] [9] [i_7 - 2]) * -1));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 10;i_12 += 1)
    {
        var_33 = ((((var_5 * (arr_10 [i_12]))) < (arr_2 [i_12] [i_12])));
        var_34 = ((29 % (arr_29 [i_12] [i_12] [i_12])));
        var_35 = var_4;
    }
    for (int i_13 = 0; i_13 < 24;i_13 += 1)
    {
        var_36 = (min(12425, (~33)));
        var_37 = var_11;
        arr_46 [i_13] = (min(((~(arr_7 [i_13] [i_13]))), -1598051045));
    }

    for (int i_14 = 0; i_14 < 19;i_14 += 1)
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 19;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                {
                    var_38 = (min(var_38, 30964));
                    var_39 = (arr_25 [i_14] [i_15]);
                }
            }
        }
        arr_56 [5] = var_2;
    }
    #pragma endscop
}
