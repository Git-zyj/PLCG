/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_19 = (max(var_19, (((((+((1 ? (arr_1 [3]) : 26582)))) * (((-(min(779894000, 1469012170))))))))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_5 [i_1] = max((min((arr_4 [i_1]), (arr_4 [i_1]))), (((!(((57453 ? var_15 : (arr_2 [i_1] [i_1]))))))));
            var_20 = (max(var_20, (((arr_3 [i_0]) ? (((((1 ? (arr_0 [i_0] [i_1]) : 3467227530))) ? (arr_0 [i_0] [i_1]) : ((-(arr_2 [i_0] [i_1]))))) : ((max(-7799086525447525523, 115)))))));
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_8 [i_0] [i_2] = ((-(arr_1 [i_0])));
            var_21 |= ((((min((arr_2 [i_0] [i_2]), 1))) ? ((-var_16 ? ((-(arr_1 [i_0]))) : (((arr_3 [i_0]) ? (arr_1 [i_0]) : 14216669980499275731)))) : var_12));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
        {
            var_22 = (((arr_3 [i_0]) ? var_7 : (arr_3 [i_0])));
            var_23 = (((arr_9 [i_0] [i_0] [i_0]) ? (arr_6 [i_0] [i_3] [i_3]) : (arr_9 [i_0] [i_0] [i_0])));
            arr_11 [i_0] [i_3] = var_15;
            var_24 -= ((~(arr_3 [i_0])));
            arr_12 [i_0] [i_3] = ((arr_3 [i_0]) ? (arr_3 [i_3]) : (arr_3 [i_0]));
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
        {
            arr_17 [i_0] [i_0] [i_0] = ((((max(((var_9 ? var_12 : (arr_16 [i_0]))), ((min(var_15, 15503)))))) <= var_9));
            var_25 = ((var_13 ? ((~((var_14 ? var_12 : var_12)))) : (((((((arr_9 [i_0] [i_0] [i_0]) ? var_4 : var_16))) || ((!(arr_16 [i_0]))))))));
        }
        var_26 = (~((max(var_12, var_9))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
            {
                var_27 = (((38 + -7799086525447525524) + (((var_18 ? (arr_16 [i_5]) : var_15)))));
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            var_28 = (max(var_28, (((-(arr_35 [i_8 + 1] [i_8] [i_8] [i_6] [i_6]))))));
                            var_29 = (max(var_29, ((((!0) ? var_7 : -26625)))));
                            arr_36 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = (((arr_22 [i_5] [i_5] [i_9]) ? var_3 : (arr_22 [i_5] [i_6] [i_5])));
                        }
                    }
                }
                var_30 = (((arr_4 [i_5]) <= (arr_4 [i_5])));
            }
            for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
            {
                var_31 = (max(var_31, ((((((var_7 ? var_2 : (arr_37 [16] [i_6] [5])))) ? (arr_18 [14]) : (4230074093210275866 + 177))))));
                var_32 = (min(var_32, ((((((var_8 && (arr_25 [i_6])))) != ((((arr_3 [i_5]) != var_13))))))));
                var_33 = var_10;
                arr_39 [i_5] [i_6] [i_10] [i_10] = (((arr_21 [i_5]) % (((var_18 ? (arr_22 [i_5] [i_5] [i_5]) : var_15)))));
            }
            for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
            {
                arr_42 [i_5] [i_5] [i_6] [i_11] = (4294967293 ? 751 : 2472134492);
                arr_43 [i_5] [i_5] [1] = ((174 ? ((-(arr_18 [i_11]))) : (arr_22 [i_5] [i_6] [i_11])));
                var_34 -= 1;
                arr_44 [i_11] [i_6] = 10786859617916987309;
            }
            arr_45 [i_5] [i_5] [i_6] = (arr_6 [i_5] [i_6] [i_5]);
            var_35 = (min(var_35, (((((((arr_34 [i_5] [i_5] [16] [i_6] [i_5]) ? (arr_20 [i_6] [i_5]) : 5623781071576717794))) ? (arr_32 [i_5] [i_6] [i_5] [i_6]) : (arr_22 [i_5] [i_5] [i_6]))))));
            var_36 = (((arr_14 [i_5] [i_5] [i_5]) ? 105 : 985676470));
        }
        for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
        {
            arr_49 [i_12] = ((!(arr_10 [i_12] [i_12])));
            var_37 = ((!(arr_22 [i_5] [i_5] [i_5])));
            var_38 |= 18446744073709551615;
        }
        for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
        {
            var_39 = var_6;
            arr_54 [i_13] = (2047 % 144063096);
            var_40 |= (arr_4 [i_5]);
            var_41 = (arr_40 [i_13] [i_13] [i_5]);
        }
        var_42 *= (var_15 && 3110816530);
    }
    var_43 = 0;
    #pragma endscop
}
