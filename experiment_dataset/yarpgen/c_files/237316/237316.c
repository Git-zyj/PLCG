/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 19472;
    var_16 = (min(var_16, (~-19472)));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = (((min((arr_0 [i_0] [i_0]), (arr_1 [i_0] [i_0]))) == ((((((~(arr_1 [i_0] [i_0]))) <= (74 ^ 1)))))));
        var_18 = (max(var_18, ((max(106, -5495926725063009554)))));
        var_19 = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            var_20 = (((arr_0 [i_2 + 4] [i_1]) ? (((165 + (arr_1 [6] [i_1])))) : ((7473980018910261121 ? (arr_7 [i_1] [i_2 + 1] [i_2 - 1]) : 17892828134651164075))));
            var_21 = (min(var_21, ((((arr_6 [i_2 + 1] [i_2 - 1] [i_1]) / (arr_7 [i_2 + 1] [i_2 - 1] [14]))))));
            var_22 = (9349409964477520589 * -50);
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            arr_12 [i_1] [i_1] [i_3] = 5;

            for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
            {
                var_23 = (max(var_23, -2090023281));
                var_24 = (max(var_24, ((((((((17892828134651164075 ? 25075 : 253952))) ? (var_6 >= 1) : (arr_6 [i_1] [i_3] [1]))) >= ((var_10 | (!var_11))))))));
                var_25 = (min(var_25, ((max(((((arr_10 [i_4] [i_1]) / 1))), ((-(min(var_11, (arr_4 [i_4]))))))))));
                arr_16 [i_4] [i_1] = (~-253971);
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
            {
                var_26 = (arr_8 [i_1]);
                arr_19 [i_5] = ((63463 ? (arr_14 [i_1] [i_3] [4]) : (arr_14 [i_1] [i_3] [i_3])));
                var_27 ^= ((3 % (1 % 39)));
                var_28 = (max(var_28, ((((((16839331604662560337 ? 127 : 1121501860331520))) ? (arr_15 [i_5] [i_3] [i_1]) : ((var_5 | (arr_13 [i_3]))))))));
            }
            for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_29 = ((1 >= (arr_13 [i_7])));
                            var_30 += ((!(((~(arr_10 [i_1] [i_7]))))));
                        }
                    }
                }
                var_31 = (max(var_31, ((((((1 >> (((arr_11 [i_1] [i_6]) - 67))))) || 120)))));
                arr_28 [i_6] [i_3] = max((arr_4 [i_3]), ((((arr_17 [i_6] [i_6] [i_3] [i_1]) && (arr_27 [i_6] [i_6] [i_1] [i_1])))));
                var_32 -= ((((((~(arr_20 [i_6] [i_1]))) + 2147483647)) << ((((-7546303328072686041 & (arr_1 [i_1] [i_6]))) - 145840401828348929))));
            }
            var_33 = (max(var_33, (!var_6)));
        }
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            var_34 = (max(var_34, var_8));
            arr_32 [i_1] [i_9] = ((((((max(304269437, var_14)) / (arr_8 [i_9])))) ? (arr_11 [i_9] [i_1]) : (((22 * var_0) ? ((var_4 ? 32767 : var_2)) : var_6))));

            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                var_35 = ((~((~(arr_21 [i_1] [i_10])))));
                arr_35 [i_1] [i_9] [i_10] = -31744;
                var_36 = (min(var_36, (((((max((arr_17 [i_10] [i_9] [i_9] [i_1]), (arr_17 [i_1] [i_10] [i_9] [i_1])))) <= (min((arr_6 [i_1] [i_9] [i_10]), (((arr_0 [i_9] [i_10]) * -96)))))))));
                var_37 = var_2;
            }
        }
        var_38 = ((((min((arr_3 [i_1] [i_1]), (((var_7 + 9223372036854775807) << (532575944704 - 532575944704)))))) >= ((+(((arr_7 [i_1] [10] [10]) ? 17892828134651164075 : var_2))))));
    }
    var_39 = var_4;
    #pragma endscop
}
