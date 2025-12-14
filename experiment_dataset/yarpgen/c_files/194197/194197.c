/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (~-1);
                arr_5 [i_0] [i_0] [i_1] = var_4;
                arr_6 [4] &= (min(((((!(arr_2 [6]))) ? ((max(1, 1))) : ((min((arr_1 [i_0] [i_0]), (arr_3 [i_0] [i_1] [i_1])))))), ((min((arr_2 [6]), (arr_2 [1]))))));
            }
        }
    }
    var_18 = (min(var_18, (((((min(var_15, var_1))) * var_15)))));

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_19 = (max((arr_7 [i_2]), ((var_1 / (min(1, (arr_7 [i_2])))))));
        var_20 = (((min(((min(1, 28))), (arr_8 [i_2])))) ? (((((-(arr_9 [i_2])))) ? var_16 : (max(var_16, -8811300310033965172)))) : (((~(min(var_4, var_13))))));
        arr_10 [i_2] [i_2] = (min((((!(arr_8 [i_2])))), ((((min((arr_9 [i_2]), var_13))) ? (var_10 ^ 878119164928390098) : (~var_1)))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_15 [i_3] = ((~(((var_9 == (max((arr_13 [i_3]), var_15)))))));
        var_21 *= (min((arr_12 [i_3]), ((((36253 ? var_6 : (arr_13 [i_3])))))));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            arr_20 [i_3] [i_3] [i_3] |= var_11;
            arr_21 [i_3] [9] = (((arr_14 [i_4] [5]) ? (arr_11 [i_4]) : ((var_16 ? (arr_18 [i_3] [i_3] [i_3]) : (arr_18 [i_3] [8] [i_3])))));
            arr_22 [i_3] [i_3] = ((((arr_9 [i_3]) ? var_13 : (arr_14 [i_3] [i_3]))));
            var_22 &= ((-7310855874039932485 ? var_4 : var_16));

            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                arr_25 [15] = (((arr_24 [i_5 - 1] [i_5 - 1] [i_5 - 1]) ? ((((!(arr_17 [1]))))) : ((~(arr_14 [3] [i_4])))));
                var_23 |= (!36253);
            }
            for (int i_6 = 2; i_6 < 17;i_6 += 1)
            {
                arr_30 [1] [i_4] [1] [1] |= var_3;
                var_24 = (min(var_24, (((var_6 ? (arr_23 [i_6] [i_4] [i_4]) : var_5)))));
                var_25 &= var_6;

                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    var_26 = (min(var_26, ((((arr_23 [i_7] [i_4] [i_6 + 2]) ? (arr_23 [i_3] [i_6] [i_6 + 1]) : (arr_28 [i_6 - 2] [i_6 - 2]))))));
                    arr_33 [i_3] [i_3] [i_6] [i_3] = (~var_16);
                }
            }
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                arr_40 [i_3] [i_3] [13] [i_9] &= (arr_14 [i_3] [0]);
                var_27 |= (((((arr_7 [i_9]) + (arr_34 [i_3] [i_8])))) ? ((min(((-(arr_9 [i_3]))), ((var_17 ? (arr_11 [i_3]) : 222))))) : ((+(max((arr_12 [i_8]), (arr_37 [i_3] [1] [i_3] [i_3]))))));
            }
            var_28 = 168;
        }
        var_29 = (max(var_29, ((min((((2194703682 ? 44923 : (arr_8 [14])))), 932228502887870923)))));
    }
    for (int i_10 = 1; i_10 < 12;i_10 += 1)
    {
        var_30 = (max(var_30, (((~((((!(arr_37 [i_10] [i_10] [i_10] [i_10]))) ? ((var_9 ? (arr_36 [i_10]) : (arr_29 [i_10] [i_10] [i_10] [7]))) : var_13)))))));
        var_31 = ((((min(37735, 878119164928390088))) ? ((((!(arr_9 [i_10 - 1]))))) : (~var_10)));
        arr_44 [i_10] = ((~(arr_18 [i_10] [5] [5])));
        arr_45 [i_10] [i_10] = (((((min(1, (arr_16 [i_10] [i_10]))) ? var_8 : ((((arr_38 [i_10] [i_10] [9]) || var_7)))))));
    }
    var_32 = ((!(((var_2 ? (((var_1 ? var_8 : var_11))) : 8811300310033965177)))));
    var_33 = ((96 == (min((149 / -878506533253368396), var_2))));
    #pragma endscop
}
