/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_14);
    var_20 = ((-(0 * 0)));
    var_21 = var_18;

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_22 = (((((((arr_1 [i_0 - 2] [i_0 - 2]) + 2147483647)) << (var_4 - 1))) & -1));
        var_23 = (min(var_23, (((-(~2097088))))));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            var_24 = ((~(1 != var_8)));

            for (int i_3 = 3; i_3 < 13;i_3 += 1)
            {
                var_25 = (((2097088 != var_4) | (115 - var_18)));

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_26 = (((-(arr_7 [i_4] [i_2 + 1]))));
                    arr_18 [i_1 + 1] [i_4] [i_1 - 1] [i_1] = ((!(((var_4 / (arr_9 [i_1]))))));
                    var_27 = (min(var_27, (((!((((arr_4 [i_2 - 1] [i_4]) ^ (arr_8 [i_3 + 3] [i_1] [i_1])))))))));
                    var_28 = ((((((arr_12 [i_2 - 1] [i_3 - 2] [i_1 + 1]) > (arr_12 [i_2 - 1] [i_3 - 2] [i_1 + 1])))) != (var_12 + -368027982)));
                }
                for (int i_5 = 4; i_5 < 16;i_5 += 1)
                {
                    var_29 -= ((!(var_1 && -1)));
                    var_30 = ((-(-127 - 1)));
                }
                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {
                    var_31 = ((((((arr_13 [i_1 + 1] [i_1 + 1] [i_1 - 1]) <= (arr_13 [i_1 + 1] [i_1 + 1] [i_1 - 1])))) > (((arr_13 [i_1 + 1] [i_1 + 1] [i_1 - 1]) ^ var_4))));
                    var_32 ^= ((~((var_10 + (arr_10 [i_1 + 1] [i_3 - 3] [i_6 - 1])))));
                }
                var_33 = (!((((arr_3 [i_1 + 1]) * var_12))));
                var_34 = ((((0 / (arr_17 [i_1 - 1] [2] [i_1 - 1]))) >= ((((arr_7 [i_1 - 1] [14]) != var_15)))));
            }
            var_35 = ((~((~(arr_19 [i_1 + 1])))));
        }
        for (int i_7 = 3; i_7 < 15;i_7 += 1)
        {
            var_36 = (max(var_36, (((1863087691 | (((arr_4 [i_1 + 1] [i_1 - 1]) / (arr_10 [i_1] [i_1 - 1] [i_1]))))))));
            var_37 = (((!var_12) / (var_1 / var_14)));
            var_38 |= 1;
            var_39 += ((((var_18 << (var_5 - 1407423041))) << (((arr_7 [i_1 + 1] [i_7 + 1]) & (arr_7 [i_1 + 1] [i_7 - 1])))));
        }
        var_40 = (max(var_40, (!var_17)));
        arr_25 [i_1 - 1] = ((~(var_15 ^ var_7)));
        var_41 ^= (-12 <= 179);
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_42 ^= ((~(0 && 1)));
        var_43 = (max(var_43, (+-4294967276)));
        var_44 &= (((!var_1) < (~18446744073707454528)));
        var_45 |= (((1382242339792805813 * -var_13) - 16));
    }
    var_46 = (min(var_46, var_0));
    #pragma endscop
}
