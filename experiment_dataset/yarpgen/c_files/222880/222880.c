/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_6);
    var_18 = (min((~var_3), (((var_7 % var_10) % var_1))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_19 = (min(var_19, ((max(((((arr_0 [i_0]) != ((~(arr_4 [i_0])))))), ((var_4 ? (!var_11) : (var_14 == var_13))))))));

            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                var_20 *= ((((max(var_5, ((var_7 + (arr_5 [i_0])))))) ? var_16 : (((arr_8 [i_2 - 1] [i_2 - 1] [i_1] [i_2 - 1]) ? (arr_1 [i_2] [i_0]) : (((arr_5 [i_0]) ? var_4 : (arr_2 [i_0] [i_0] [i_2 - 1])))))));
                var_21 += var_1;
            }
        }
        for (int i_3 = 3; i_3 < 16;i_3 += 1)
        {
            var_22 = ((((min((~var_9), (min(var_13, var_12))))) ? (max(((max(var_2, var_14))), (max((arr_7 [i_3] [i_3] [i_3]), var_8)))) : ((((1 >> 1) ? (arr_5 [14]) : (arr_4 [i_0]))))));
            arr_12 [4] [i_3] [i_3 - 2] = (((((((arr_0 [i_0]) * -24223)) != (!var_14))) ? -var_16 : (((var_5 ? (min(var_9, (arr_6 [i_3 - 3] [i_3] [i_0] [i_3]))) : (!var_8))))));
            var_23 = (max(var_23, (((var_14 ? ((~(1 + 3858988104))) : (((((((arr_4 [i_3]) ? (arr_7 [i_0] [i_0] [i_0]) : var_7))) ? (arr_3 [i_3 - 3] [5]) : ((max((arr_0 [i_3 - 2]), var_9)))))))))));
        }
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            arr_15 [i_4] [i_4 + 3] = ((((var_3 || (min(var_3, 1)))) ? ((((arr_5 [i_4 + 1]) * (arr_5 [i_0])))) : (min((min(var_8, var_9)), ((var_14 ? var_8 : var_7))))));
            arr_16 [i_4] = arr_0 [3];
            var_24 = (max(var_24, ((max((max((arr_6 [i_4 - 1] [i_4 + 3] [i_4 + 3] [10]), (arr_6 [i_4 + 2] [i_4 + 3] [i_4 + 2] [14]))), var_15)))));
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_25 *= (min(var_9, ((((((arr_13 [i_5]) ? (arr_9 [i_0] [i_0]) : var_7)) >= (((min(var_7, var_0)))))))));
            arr_19 [i_0] = (max((max((((var_4 ? (arr_18 [i_0]) : var_13))), (min(var_4, var_1)))), ((max((max((arr_9 [2] [i_0]), var_11)), ((min(8905, var_2))))))));
        }
        arr_20 [i_0] [i_0] = ((var_6 ? (min((((~(arr_4 [i_0])))), ((var_14 ? 1 : var_10)))) : var_2));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                arr_31 [i_8] [i_6] [i_7] [i_6] = arr_6 [i_6] [1] [i_6] [i_8];
                var_26 = (((!1) & (((!(arr_17 [i_6] [i_7] [i_8]))))));
                arr_32 [i_6] [i_6] [i_8] = (((~0) % ((var_11 ? var_8 : var_14))));
            }

            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                var_27 = (((((5118937850410453293 ? var_10 : var_0))) || (arr_34 [i_6] [i_7] [i_9])));
                var_28 = (arr_0 [i_6]);
                var_29 = (((arr_4 [i_7]) || (arr_4 [i_6])));
            }
            arr_35 [i_7] [i_7] [i_6] = 938214698;
            var_30 += ((((arr_14 [i_6]) && var_2)));
            var_31 ^= (-27347 % 1);
        }

        for (int i_10 = 3; i_10 < 6;i_10 += 1)
        {
            var_32 = (((arr_29 [6] [i_10 + 1] [1] [i_10 - 1]) ? var_9 : ((var_15 ? var_5 : var_12))));

            for (int i_11 = 2; i_11 < 9;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    var_33 = (max(var_33, ((((arr_39 [i_10] [i_10 - 2] [i_11 - 2]) ? (arr_39 [i_6] [i_10 - 3] [i_11 - 1]) : (arr_39 [i_6] [i_10 + 3] [i_11 - 1]))))));
                    var_34 = (~var_4);
                    arr_42 [i_11] [i_11] [i_11] [i_12] = 2147483647;
                    var_35 -= var_7;
                }
                arr_43 [i_6] [i_11] [i_10 + 3] = ((570944517978293601 ? ((var_10 ? var_6 : 1650)) : var_5));
                arr_44 [i_10] [i_10] [i_11] [i_11] = (!var_2);
            }
            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {
                var_36 = var_3;
                var_37 &= (((arr_14 [i_10 + 2]) != (arr_14 [i_10 - 2])));
            }
            var_38 = ((!(arr_3 [i_10 - 3] [i_10 + 4])));
        }
        for (int i_14 = 0; i_14 < 10;i_14 += 1)
        {
            var_39 = ((!(arr_48 [i_14])));
            var_40 = (arr_28 [i_6] [i_6] [i_6] [i_6]);
        }
        for (int i_15 = 0; i_15 < 10;i_15 += 1)
        {
            var_41 = (~1);
            arr_52 [i_6] [1] [i_15] = (arr_21 [i_6]);
        }
        var_42 = (min(var_42, ((((arr_10 [i_6] [i_6] [i_6]) ? 24238 : (arr_28 [i_6] [i_6] [i_6] [i_6]))))));
    }
    #pragma endscop
}
