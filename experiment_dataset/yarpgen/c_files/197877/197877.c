/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((!(~var_13)))) >= ((-(((32767 < (-32767 - 1))))))));
    var_15 = ((~(min((min(var_3, var_2)), (var_9 << var_0)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_16 = ((!(((((var_1 + (arr_1 [i_0]))) / (max(var_4, 107536558)))))));

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                var_17 = (((((~((min(-32763, var_8)))))) ^ -3061574351));
                arr_8 [i_1] [i_1] = (max((min((var_2 < -32751), (!var_0))), (((-32767 - 1) < 2704199412))));
                var_18 = min((((min((arr_0 [i_2]), (arr_1 [i_2]))) + ((((arr_7 [i_2] [i_1] [i_0]) || (arr_2 [i_0])))))), (((!(8557 + 32767)))));
            }
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                var_19 = (max(((36542 << (56979 - 56978))), (min((min(var_7, var_9)), ((-1466010131 + (arr_5 [i_0])))))));
                var_20 = ((!((min((max(520093696, 1)), ((min((arr_1 [i_1]), var_4))))))));

                /* vectorizable */
                for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
                {
                    arr_14 [i_4] [i_3 + 3] [1] [1] = ((-(87371035 % -7936816524221832112)));
                    var_21 = (min(var_21, (((~((-(arr_13 [i_0]))))))));

                    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        var_22 = (((!var_8) == -var_13));
                        var_23 = ((~(var_7 + 1)));
                        arr_17 [i_5] [i_1] = (((((arr_1 [12]) / (arr_10 [i_0]))) - (((arr_7 [i_0] [i_0] [i_0]) / (-2147483647 - 1)))));
                        arr_18 [i_5] [i_1] [i_3] [i_4] [5] = ((var_11 + ((~(arr_4 [i_0] [i_1] [i_0])))));
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        var_24 = (max(var_24, -1));
                        var_25 = (min(var_25, (!5970209363379446172)));
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                    {
                        var_26 = ((-((-(arr_10 [i_1])))));
                        var_27 = (max(var_27, (--2220179084501654971)));
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_28 = (min(var_28, (((-32751 >= 2945316090) * (arr_5 [i_0])))));
                        arr_27 [i_1] [i_8] [i_4] [i_8] = ((!(((arr_12 [i_0] [i_1] [i_3 - 2] [i_4 + 1]) < (arr_21 [i_0] [i_0] [i_1] [i_3] [0] [i_8] [i_8])))));
                    }
                    arr_28 [i_0] [11] [0] = ((-(((arr_2 [i_0]) % var_2))));

                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        var_29 = ((((arr_12 [i_0] [i_1] [i_3] [i_4]) + (arr_19 [i_9] [i_4 - 1] [i_1] [i_1] [i_0] [i_0]))) - (~25));
                        arr_31 [i_1] [i_3] |= ((-(-30936 == var_5)));
                        var_30 = (max(var_30, (((-2189246564 || (!15))))));
                        var_31 = (((~var_3) - (((-(arr_6 [11] [i_1] [i_3]))))));
                        var_32 = (var_2 << (-1 > var_10));
                    }
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        var_33 = ((+(((var_4 + 2147483647) << (((arr_29 [i_10] [i_4 - 1] [i_0] [i_0] [i_0]) - 91))))));
                        arr_36 [i_10] [i_1] [i_3] = ((-(4955844529764535586 * 2105720725)));
                        arr_37 [i_0] [i_10] [i_3 + 1] [i_4] [i_4] = (((!63865) || (182 ^ 4955844529764535605)));
                        var_34 = (min(var_34, (((((var_5 * (arr_25 [i_0] [i_4 - 1] [i_3] [i_1] [i_0]))) * (var_3 < var_5))))));
                    }
                }
                /* vectorizable */
                for (int i_11 = 1; i_11 < 16;i_11 += 1) /* same iter space */
                {
                    var_35 -= (((4141038641 + 0) % (var_3 + var_9)));
                    var_36 = -0;
                }
                /* vectorizable */
                for (int i_12 = 1; i_12 < 16;i_12 += 1) /* same iter space */
                {
                    var_37 = ((!(!5742693401702827237)));
                    arr_42 [i_0] [i_12] = ((~(!var_11)));
                }
            }
        }
        for (int i_13 = 0; i_13 < 17;i_13 += 1)
        {
            var_38 = (max(var_38, (((!((max((108 + -32744), ((((arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_13]) == (arr_6 [i_13] [i_0] [i_0]))))))))))));
            var_39 = (min(var_39, (((((((max(var_11, 3061574360)) + 13450))) && ((min(228, (max(1472921219, var_5))))))))));
            arr_47 [i_0] [i_0] = (min((((((arr_24 [i_13]) - (arr_20 [i_0]))) == (127 + var_5))), ((!(var_9 + var_10)))));
            var_40 = ((-((min((((arr_2 [i_0]) < (arr_4 [i_13] [i_0] [i_0]))), (var_9 == var_0))))));
            arr_48 [i_0] = ((~((((var_2 < 2220179084501654970) || (var_5 / -32766))))));
        }
        arr_49 [i_0] = ((~((((!2893433453) == -1)))));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 19;i_14 += 1)
    {
        var_41 *= ((((var_8 / (arr_50 [i_14]))) == (((!(arr_50 [i_14]))))));
        var_42 = (min(var_42, (((-((-32765 ^ (arr_50 [i_14]))))))));
    }
    #pragma endscop
}
