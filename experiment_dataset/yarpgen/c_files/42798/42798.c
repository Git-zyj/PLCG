/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((((var_3 ? var_3 : var_1))) ? (var_10 + 1) : -var_13)) - 1));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_4 [15] = ((+(min((arr_1 [i_0]), (arr_3 [i_0])))));
        arr_5 [i_0] = ((((!(arr_1 [i_0]))) || (((86487540880425601 ? ((var_0 | (arr_1 [i_0]))) : ((var_6 << (((arr_1 [i_0]) - 133)))))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (min((arr_3 [i_1]), ((((arr_0 [i_1]) | (arr_0 [i_1]))))));

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_16 += ((((((((arr_11 [i_1]) ^ (arr_9 [i_1] [i_1])))) ? (~var_3) : ((max((arr_0 [20]), var_7))))) == var_6));
            arr_12 [i_1] [i_2] = ((((((((arr_11 [i_1]) / (arr_1 [i_1])))) ? (((min(var_9, (arr_1 [i_1]))))) : (max((arr_10 [i_2]), var_11)))) & ((((arr_7 [i_1]) ? (~235) : ((((arr_1 [i_1]) || (arr_0 [i_2])))))))));
            arr_13 [i_1] = (((arr_1 [i_1]) <= (max(86487540880425601, (((var_5 & (arr_6 [i_1]))))))));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_17 = ((-((+((((arr_2 [i_3]) <= var_0)))))));
            var_18 = (max(var_18, (arr_3 [i_3])));
            arr_16 [i_1] [i_1] [i_1] = ((((((arr_6 [i_1]) & (arr_3 [i_1])))) ? (arr_3 [i_1]) : (((((arr_6 [i_3]) < var_14))))));
            arr_17 [i_1] = var_10;
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            arr_21 [i_4] = (max(((((var_8 == (arr_15 [i_1] [i_4]))))), var_9));
            var_19 = ((!((max((arr_1 [i_4]), var_8)))));

            /* vectorizable */
            for (int i_5 = 2; i_5 < 21;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        arr_29 [i_1] [i_6] [i_5] [i_1] = (((arr_14 [i_5 - 2] [i_4]) || (arr_14 [i_5 + 1] [i_4])));
                        var_20 = (max(var_20, (((var_14 * (arr_22 [i_1] [i_4] [18]))))));
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        arr_33 [i_1] [9] = (((arr_14 [i_1] [i_4]) < (arr_14 [i_5] [i_1])));
                        var_21 = (arr_7 [i_1]);
                    }
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        var_22 += (arr_32 [i_1]);
                        arr_37 [i_9] [i_4] = ((((arr_22 [i_1] [i_5 + 1] [i_9]) | (arr_6 [i_1]))));
                    }
                    var_23 -= (((((164223293 ? (arr_1 [i_5]) : (arr_10 [8])))) ? (((arr_30 [i_6] [i_5 + 1] [i_4] [i_1] [i_1]) ? (arr_28 [i_1] [i_4] [i_5] [i_5 - 1] [i_6]) : (arr_23 [i_1]))) : (((var_13 + 2147483647) >> (var_5 + 105)))));
                    arr_38 [i_1] [i_4] [i_5] [i_6] &= ((-(((arr_25 [i_1] [i_1] [i_1]) ? (arr_27 [i_1] [i_5 - 1] [14] [i_6] [i_4]) : var_1))));
                }
                var_24 ^= (((arr_23 [i_5]) < (arr_9 [i_4] [i_5])));
            }
        }
    }
    for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
    {
        var_25 = arr_11 [i_10];
        var_26 = (arr_18 [i_10] [i_10] [i_10]);
    }
    for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
    {
        var_27 = (arr_9 [i_11] [i_11]);
        var_28 = ((((((arr_7 [i_11]) ^ (max((arr_20 [i_11] [i_11] [i_11]), var_9))))) ? var_0 : var_7));
        var_29 = (((arr_40 [i_11]) & (arr_40 [i_11])));

        for (int i_12 = 1; i_12 < 20;i_12 += 1)
        {
            var_30 &= (arr_35 [i_11] [i_12 + 1] [i_12 + 2] [i_11] [i_12 + 2]);
            var_31 ^= ((((((arr_11 [11]) ? (((!(arr_32 [i_12 - 1])))) : (arr_43 [i_11])))) | (max(-1108161410, ((var_11 ? 6744087198724199810 : 107))))));
            var_32 = ((-((-(arr_34 [i_11] [i_12])))));
        }
        for (int i_13 = 3; i_13 < 19;i_13 += 1)
        {
            var_33 = (!(arr_47 [i_13] [i_13 + 1]));
            /* LoopNest 3 */
            for (int i_14 = 1; i_14 < 19;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 22;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            var_34 ^= var_3;
                            var_35 = (min((arr_34 [i_14] [i_14 + 2]), (((((var_10 ? var_11 : var_1))) ? ((((arr_47 [i_15] [i_16]) > (arr_10 [i_14 + 3])))) : (((!(arr_32 [i_13 + 2]))))))));
                            var_36 = (min(((var_5 ? (((arr_10 [i_11]) / var_6)) : (arr_22 [i_11] [i_14 - 1] [i_15]))), ((max(22407, (arr_57 [i_13 + 2] [i_13 - 2] [2] [i_13 + 2] [i_13 + 2] [i_13]))))));
                            var_37 = (arr_28 [i_13 - 2] [i_13 - 3] [i_13] [i_13 - 2] [i_13 + 3]);
                        }
                    }
                }
            }
            arr_59 [i_11] = (arr_10 [i_11]);
            var_38 = (min(var_38, ((((((arr_45 [i_11] [i_13] [i_13 + 3]) % (arr_45 [i_11] [i_13 - 1] [i_13 + 1])))) > (((var_10 * var_6) ? ((((arr_19 [i_11] [i_11]) >> (((arr_30 [i_11] [i_11] [i_11] [i_13 + 1] [14]) - 7310226743351611275))))) : ((~(arr_18 [i_11] [i_13] [i_13 + 1])))))))));
        }
        for (int i_17 = 0; i_17 < 22;i_17 += 1) /* same iter space */
        {
            var_39 = ((~((~((~(arr_23 [i_11])))))));
            var_40 = (min(var_40, (((-(((arr_54 [i_17]) ? (((arr_46 [i_11] [i_17] [i_11]) ^ var_0)) : (((((arr_26 [i_17] [4] [i_11] [i_11]) && (arr_36 [20] [18] [i_11] [i_11] [i_11] [i_11] [12]))))))))))));
        }
        for (int i_18 = 0; i_18 < 22;i_18 += 1) /* same iter space */
        {
            var_41 = arr_6 [i_11];
            var_42 = (min(var_42, (((((min(23438, -30119))) ? (((arr_15 [i_11] [i_11]) * 15757)) : (((arr_46 [i_18] [i_11] [i_11]) ? (arr_44 [i_11] [i_18]) : ((((arr_56 [i_11]) <= var_2))))))))));
            var_43 = (min(var_43, ((((((arr_7 [i_11]) << (((min((arr_39 [i_11]), (arr_27 [i_11] [i_11] [i_11] [i_18] [i_18]))) - 2861664469)))) < (((arr_49 [i_18] [i_18]) ? (arr_49 [i_11] [i_11]) : (arr_24 [i_11] [i_18]))))))));
        }
    }
    #pragma endscop
}
