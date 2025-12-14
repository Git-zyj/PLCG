/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((max(var_9, var_8))), (max((max(var_11, var_13)), var_9))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (((min((min((arr_1 [i_0]), (arr_2 [i_0]))), (arr_2 [i_0]))) >> (arr_1 [11])));
        var_17 ^= ((((min((arr_0 [1]), (max((arr_0 [i_0]), (arr_0 [i_0]))))))) < (max((arr_0 [i_0]), (min(72057594037927935, (arr_1 [11]))))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_18 -= (max(((max((arr_1 [3]), (arr_4 [i_0])))), (arr_0 [i_1])));
            arr_6 [i_0] [i_1] [i_0] = ((max((max((arr_2 [i_0]), (arr_1 [i_1]))), (arr_2 [i_0]))) - ((((((((arr_4 [i_1]) << (arr_4 [i_1])))) >= (min((arr_4 [i_0]), (arr_5 [5] [i_1] [5]))))))));
            var_19 = (min(var_19, ((max((max((min((arr_0 [i_0]), (arr_5 [i_0] [i_0] [i_0]))), ((((arr_4 [i_0]) == (arr_5 [i_0] [i_0] [i_1])))))), (min((arr_5 [i_0] [i_0] [1]), (max((arr_0 [12]), (arr_5 [i_0] [i_0] [10]))))))))));
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_20 = (max((arr_8 [i_0] [i_1] [i_2] [12]), (max((((123 * (arr_4 [i_3])))), (((arr_9 [i_0] [i_1] [i_3]) % (arr_5 [i_3] [i_3] [i_3])))))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = (min((min((((arr_10 [i_2 - 2] [i_2 - 2] [i_0]) & (arr_13 [i_0] [i_1] [i_0] [i_3] [i_0] [i_4]))), (min(57159, 18446744073709551615)))), ((min(((((arr_14 [i_4] [i_1] [i_0] [i_1] [i_0]) != (arr_2 [9])))), (arr_8 [i_4] [i_4] [i_4] [i_4]))))));
                            arr_17 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_5 [i_0] [6] [i_4]);
                            var_21 += (((arr_7 [9] [i_1]) < (((((((arr_11 [0] [i_2] [i_2] [i_4 - 1]) < (arr_11 [7] [i_1] [i_3] [i_4 + 3]))))) - (((arr_2 [i_2]) - 18446744073709551605))))));
                        }
                    }
                }
            }
            arr_18 [i_0] = (arr_4 [i_0]);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
        {
            var_22 += (arr_22 [3]);
            arr_23 [i_0] [i_0] = (8191 < 0);
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
        {
            var_23 -= (arr_5 [i_6] [10] [i_0]);
            var_24 ^= (((arr_22 [i_0]) / (arr_9 [i_6] [i_6] [i_6])));
            var_25 = (((arr_9 [i_0] [i_6] [i_6]) > (arr_8 [i_6] [i_6] [i_6] [i_6])));
            var_26 -= (arr_22 [i_0]);
        }
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    {
                        var_27 = (((((((arr_32 [21] [i_8]) - (arr_34 [i_10] [1] [i_8] [i_7])))) & (min((arr_31 [i_8] [6] [i_9] [i_10]), (arr_29 [1] [i_8] [i_8]))))) * ((((1785868987 < ((13749702905719011039 >> (-26836 + 26889))))))));
                        var_28 = (max(((((max((arr_34 [i_10] [i_9] [i_8] [i_7]), (arr_30 [i_7] [i_8]))) == ((((arr_27 [i_7] [i_7]) / (arr_36 [i_8]))))))), (arr_27 [12] [i_10])));
                        var_29 = (arr_30 [i_9] [i_8]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                {
                    arr_43 [i_11] [i_7] [i_7] = (((arr_42 [i_7] [i_11] [i_12] [i_11]) || (arr_29 [11] [i_11] [i_12])));
                    arr_44 [0] [i_7] [i_11] = ((((max((((arr_34 [i_7] [i_7] [i_7] [i_7]) && (arr_38 [i_7] [13]))), (((arr_31 [6] [i_11] [i_11] [i_11]) < (arr_35 [i_7] [i_7] [i_7] [i_7])))))) << (((((((arr_33 [i_7] [15]) < (arr_32 [i_7] [i_7])))) == ((max(240, 57347))))))));
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
    {

        for (int i_14 = 3; i_14 < 21;i_14 += 1) /* same iter space */
        {
            var_30 = (min((((((((arr_38 [i_13] [i_13]) == (arr_45 [i_13])))) != ((min((arr_36 [i_13]), 57324)))))), (max(((min((arr_40 [i_14 - 3] [i_14 - 3] [1] [i_13]), (arr_34 [i_13] [i_13] [i_13] [i_13])))), (min((arr_48 [i_14 - 2] [i_14] [i_14 - 1]), (arr_30 [i_13] [i_13])))))));
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 20;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 22;i_16 += 1)
                {
                    {
                        var_31 = (8212 >> 0);
                        var_32 = (arr_52 [i_16] [i_15 + 1] [i_14] [i_13] [i_13]);
                    }
                }
            }
            var_33 = (max(var_33, ((((max(18446744073709551615, 8189)) * (((min((arr_53 [16]), (arr_54 [i_14] [i_13] [i_13]))))))))));
        }
        for (int i_17 = 3; i_17 < 21;i_17 += 1) /* same iter space */
        {
            var_34 = (min((arr_45 [i_13]), ((min((arr_52 [i_13] [i_13] [i_13] [i_13] [12]), (arr_37 [i_17] [i_17]))))));
            var_35 = (arr_48 [i_17] [i_17] [i_13]);
        }
        arr_57 [i_13] [12] = (max((arr_34 [i_13] [i_13] [9] [i_13]), (min(((((arr_35 [i_13] [i_13] [i_13] [i_13]) > (arr_30 [i_13] [0])))), (max((arr_30 [i_13] [i_13]), (arr_49 [i_13] [i_13] [i_13])))))));
        var_36 = (((min(30, (arr_42 [i_13] [i_13] [i_13] [6]))) * ((((((max((arr_48 [i_13] [i_13] [18]), (arr_46 [i_13] [12])))) && (arr_54 [i_13] [i_13] [i_13])))))));
    }
    var_37 = (((((((min(57346, 4)))) - (max(8071189909722249085, -7100995595445811589)))) * ((min((min(var_8, var_14)), ((min(var_12, var_7))))))));
    var_38 = ((var_2 || (((max(-1146680940, 36028659580010496)) == var_0))));
    var_39 = (var_3 / var_7);
    #pragma endscop
}
