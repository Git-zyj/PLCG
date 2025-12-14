/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_10 |= (((arr_2 [i_0] [i_0]) ^ 11547));
        var_11 = (((var_6 - var_7) < ((9223372036854775801 + (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_12 = ((var_8 ? (2724761125 + 2305843009213693951) : ((((((min((arr_3 [i_1] [10]), (arr_3 [4] [2]))))) + 2724761144)))));

        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            var_13 = (min(var_13, ((min(var_0, (--1570206171))))));
            var_14 = 2724761100;
            var_15 = (max((arr_4 [i_2 - 1] [11]), ((((arr_6 [i_1]) < (arr_6 [i_1]))))));
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_16 = (arr_3 [i_1] [i_3]);

            for (int i_4 = 2; i_4 < 13;i_4 += 1)
            {

                /* vectorizable */
                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {
                    var_17 = (min(var_17, (((~(arr_14 [i_5 + 3] [i_5] [i_5] [i_5 + 3]))))));
                    var_18 = (arr_16 [i_1] [i_1] [i_5] [2] [i_1] [2]);
                    var_19 = (((((var_9 ? 1570206179 : 1570206178))) && 1570206171));
                }
                arr_18 [i_1] [i_1] = (-(min(2724761105, (((-(arr_16 [i_1] [i_1] [i_4] [i_4] [i_4] [i_4])))))));
                /* LoopNest 2 */
                for (int i_6 = 4; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_20 = ((-(((arr_20 [i_6 - 2] [i_6 + 3] [2] [i_4] [i_3] [i_3]) - (min((arr_20 [7] [i_3] [i_4] [i_6] [i_7] [i_7]), 167))))));
                            var_21 ^= ((!(arr_15 [i_1] [i_3] [i_6 - 1])));
                            var_22 = (max(var_22, (arr_13 [i_3] [i_3] [i_3] [i_7])));
                        }
                    }
                }
                var_23 = (min(-12490, (~1570206166)));
                var_24 = (min(var_24, (((~((~(arr_20 [i_1] [i_1] [3] [3] [i_4 - 2] [i_3]))))))));
            }
        }
        var_25 ^= ((~(arr_21 [i_1] [i_1] [i_1] [i_1] [i_1])));
    }
    var_26 = ((min(-1664502785, (var_2 < var_4))));

    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        var_27 = ((((min((arr_26 [i_8]), (((!(arr_26 [i_8]))))))) ? ((min(18446744073709551615, (arr_25 [i_8])))) : 49749));
        var_28 = (~(min(32767, 1570206149)));
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_29 = (max(var_29, ((min((~var_0), (min(((var_0 >> (229 - 200))), (!1570206171))))))));
        arr_30 [i_9] [i_9] = 1570206186;
        var_30 = (min(var_30, ((max((((var_5 ? var_3 : (arr_27 [6] [16])))), ((min((var_2 == var_4), (1 >> 0)))))))));
    }
    var_31 = var_5;
    #pragma endscop
}
