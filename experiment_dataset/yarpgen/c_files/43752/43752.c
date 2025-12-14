/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [15] [i_0] = ((((((min(21, 33)) != (arr_1 [i_0])))) > (((((var_1 ? (arr_0 [6] [i_0]) : -10710))) ? var_5 : (((!(arr_0 [i_0] [i_0]))))))));
        arr_3 [i_0] = ((-10710 > (((!(~var_4))))));
        var_19 &= -var_3;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_20 = -var_5;
        var_21 |= (((((~((var_5 ? (arr_1 [i_1]) : (arr_0 [i_1] [i_1])))))) ? var_2 : (max((-3749852642831281276 & var_1), (~var_15)))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_22 = ((4730513349400973295 | ((50 ? 8191 : 0))));
                            arr_18 [i_6] [i_3] [i_4] [i_5] [3] = (arr_15 [i_2] [i_3] [i_4 - 1] [i_5] [i_6 + 2]);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 12;i_8 += 1)
                {
                    {
                        var_23 += max(((min(3621330641, var_4))), 1);
                        var_24 = ((((arr_6 [i_8 + 2]) ? (arr_6 [i_8 - 1]) : (arr_6 [i_8 - 1]))));
                        var_25 = 11446199777864436156;
                        arr_24 [1] [i_3] [10] [i_7] = (max((max(112, (arr_14 [i_8 - 1] [i_8 + 2] [i_8 + 4] [i_8 + 2]))), (!2926663490934169641)));
                        arr_25 [i_2] [i_7] [i_2] [i_2] = -26;
                    }
                }
            }

            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                var_26 = (min(var_26, var_15));

                for (int i_10 = 3; i_10 < 15;i_10 += 1)
                {
                    var_27 = ((!(((~(~31794))))));
                    arr_32 [i_10] [i_2] [i_3] [i_9] [i_9] [i_10 + 1] = (max(-var_7, -17648));
                    arr_33 [i_10] = ((~((((arr_23 [i_10] [i_10 - 2] [i_10 - 3] [i_10 + 1]) != (arr_16 [i_10] [i_10] [i_10 + 1] [i_10 + 1] [i_10]))))));
                }
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        var_28 = (min(var_28, (((+((764 ? (arr_28 [i_12] [i_11] [i_9] [i_3] [i_2]) : -125)))))));
                        var_29 &= ((arr_35 [7]) ? (~27715) : (~-var_14));
                    }
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        var_30 = min(((((!var_11) || ((max(-3749852642831281276, 0)))))), (min(var_8, (var_13 | var_3))));
                        arr_41 [i_3] [i_9] [i_11] [i_13] = ((-81 ? var_2 : 25714));
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        arr_44 [i_2] [i_2] [i_2] [i_14] [2] [i_11] [2] = 939568778;
                        var_31 |= ((((15388 ? 0 : 109)) * 37832));
                    }
                    var_32 = (min(var_32, ((((((max(var_0, var_4)))) ? ((min(-var_0, (arr_31 [i_3] [i_11])))) : 9053676702560523499)))));
                    var_33 = ((~180) ? (((426949059 ^ var_0) ^ var_5)) : (((939568777 ? 76 : 10709))));
                }
                var_34 = -10710;
            }
            var_35 ^= (((((max(var_9, var_11)) - (max(var_17, (arr_13 [i_2] [i_2] [i_2] [i_2])))))));
        }
        var_36 &= ((((var_2 ? (arr_1 [i_2]) : (((max(36401, 247)))))) | var_4));
    }
    for (int i_15 = 0; i_15 < 16;i_15 += 1) /* same iter space */
    {

        for (int i_16 = 0; i_16 < 16;i_16 += 1)
        {
            var_37 &= (((((-(arr_39 [i_15] [i_15] [i_15] [i_16] [i_16])))) ? var_15 : (arr_37 [i_15] [14] [14] [i_15] [14] [14])));
            var_38 &= (-3409007358038356130 % -79);
            var_39 = (((37832 % ((16200494282485520546 ? 32945 : 10364364301005026161)))));
        }
        arr_52 [i_15] = (max(((max((var_18 - 0), -15388))), ((((((-32767 - 1) / (arr_42 [i_15] [i_15] [i_15] [i_15] [i_15])))) + (max(225, -3409007358038356130))))));
    }
    var_40 = (!var_9);
    var_41 = var_18;
    #pragma endscop
}
