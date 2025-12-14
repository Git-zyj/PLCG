/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((1153492156 ^ (arr_0 [i_0]))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = ((201 ? (max((arr_0 [i_0]), 48901)) : (arr_4 [i_0] [i_1] [i_0])));
            var_10 += (((((var_6 ? (arr_3 [i_0] [i_1] [i_1]) : -86174490))) ? ((-1140826333 ? (arr_0 [i_1]) : (arr_0 [i_1]))) : (((0 ^ (var_4 * var_5))))));
        }

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_11 [i_0] [i_2] [i_0] = ((((max(var_3, (arr_10 [i_2] [i_2] [i_2])))) >= (((((1 ? 1 : 65534))) ? var_1 : (max(8866918563456210989, 1))))));
                var_11 = (min(var_11, ((max((!0), (((arr_3 [i_0] [i_0] [i_0]) >= ((max(1, 1))))))))));
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_12 = ((8866918563456210989 ? 0 : 13));
                var_13 = (((var_0 ? 4542515158387681784 : 2314936126)));
                var_14 = min(((!(arr_13 [i_2] [i_4] [i_2]))), ((!(!209))));
                var_15 = (max(var_15, (((var_4 ? (!16777215) : var_9)))));
            }
            for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
            {

                /* vectorizable */
                for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                {

                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        var_16 = (38 - var_6);
                        var_17 = (((arr_14 [i_6] [i_2] [i_2] [i_0]) >> (var_1 - 1922917781)));
                        var_18 = (((arr_15 [i_0] [i_0] [i_0]) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (!75)));
                    }
                    arr_23 [i_0] [i_2] [i_2] [i_6] = (~(arr_3 [i_0] [i_0] [i_5]));
                }
                for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                {
                    var_19 |= (((arr_15 [i_2] [i_5] [i_8]) ? (arr_25 [i_8] [i_5] [i_0]) : 2));
                    var_20 |= ((~(!var_3)));
                    arr_28 [i_0] [i_2] [i_0] [i_0] [i_0] = (arr_7 [i_0] [i_0] [i_5]);
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        {
                            var_21 = var_4;
                            arr_35 [i_2] = ((((max((arr_32 [i_0] [i_2] [i_5] [i_9] [i_2]), -488953386))) ? ((((!(arr_32 [i_2] [i_2] [i_5] [i_9] [i_2]))))) : ((~(arr_32 [i_0] [i_2] [i_5] [i_0] [i_2])))));
                        }
                    }
                }
            }
            for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
            {
                var_22 = ((max((arr_6 [i_2] [i_2] [i_11]), (arr_6 [i_2] [i_11] [i_11]))));
                arr_38 [i_2] = (max((arr_33 [i_0] [i_0] [i_2] [i_2] [i_11]), ((-693853957 ? 2387544310310774931 : 68719476735))));
            }
            var_23 = (((((max(var_6, 40)) ? 1 : (arr_30 [i_0] [i_2] [i_2] [i_2])))));
            var_24 = (min(var_24, (((min(1, (arr_27 [i_2]))) && ((((arr_27 [i_0]) ? 2140575761 : 184)))))));
        }
        var_25 = (min(var_25, (((65535 * ((-(arr_25 [i_0] [i_0] [i_0]))))))));
    }
    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        arr_42 [i_12] [i_12] = 1;
        var_26 = ((((var_8 && 1) ? ((-9 ? (arr_37 [i_12] [i_12] [i_12] [i_12]) : var_5)) : (min(4028119093048086846, 120)))));
    }
    for (int i_13 = 0; i_13 < 18;i_13 += 1)
    {
        var_27 ^= ((-(((arr_25 [i_13] [i_13] [i_13]) ? (arr_25 [i_13] [i_13] [i_13]) : (arr_25 [i_13] [i_13] [i_13])))));
        var_28 = (-2147483647 - 1);
    }
    for (int i_14 = 0; i_14 < 11;i_14 += 1)
    {
        arr_48 [i_14] = (((!(arr_36 [i_14] [i_14]))));
        var_29 = (max(var_29, (((((~(arr_25 [i_14] [i_14] [i_14]))) / (((((var_1 ? var_3 : 0))) ? (arr_31 [i_14] [i_14] [0] [i_14] [i_14] [i_14]) : (!24448))))))));

        for (int i_15 = 0; i_15 < 11;i_15 += 1)
        {
            arr_51 [i_14] [i_15] = 45;
            var_30 = (min((arr_10 [i_14] [i_14] [i_15]), (max(0, 5199300657536293753))));
        }
    }
    var_31 = var_1;
    var_32 = (-var_8 / var_6);
    var_33 += var_1;
    #pragma endscop
}
