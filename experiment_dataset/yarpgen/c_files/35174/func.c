/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35174
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 4 */
    for (long long int i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_17 = max((((/* implicit */long long int) ((int) max((arr_6 [i_2] [i_1 + 2] [8]), (arr_9 [i_0 - 3] [11] [i_1 - 1] [1] [10LL] [i_3]))))), ((-((+(arr_5 [i_0] [i_0 - 1] [i_0] [i_0 - 4]))))));
                        var_18 = ((/* implicit */int) max((var_18), ((+(((int) arr_7 [i_0] [i_2] [i_3]))))));
                        arr_10 [i_2 - 1] [i_2] = (+((-((-(arr_9 [i_0 - 4] [i_0] [i_1] [i_2 + 1] [i_2] [i_3]))))));
                        arr_11 [i_0] [i_0] [i_0] [i_2] [2] = ((/* implicit */int) min((arr_1 [i_0 - 1]), (min((((((/* implicit */_Bool) arr_5 [i_3] [i_2] [i_1 - 1] [i_0 - 3])) ? (var_9) : (((/* implicit */long long int) var_16)))), (((/* implicit */long long int) ((arr_9 [i_0 - 3] [i_0] [i_1] [i_1] [i_2] [i_3]) | (arr_4 [i_0]))))))));
                        var_19 &= ((/* implicit */int) ((((/* implicit */long long int) ((int) arr_4 [i_0 - 1]))) ^ (((((/* implicit */_Bool) ((long long int) var_0))) ? (((/* implicit */long long int) ((int) arr_3 [9LL] [i_2] [i_0 - 3]))) : ((+(arr_2 [i_3])))))));
                    }
                } 
            } 
            arr_12 [i_0] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) arr_9 [i_0 - 3] [1] [i_0] [i_0] [i_0] [6LL])) / (arr_1 [i_0 + 2])))) ? (((/* implicit */long long int) arr_3 [i_0] [i_0] [i_1])) : ((+(arr_0 [i_1 + 2]))))) / (((/* implicit */long long int) ((int) arr_4 [i_0 + 1])))));
        }
        var_20 = ((/* implicit */int) max((var_20), (max((((arr_6 [i_0 + 1] [11] [i_0]) ^ (arr_6 [i_0] [i_0 - 1] [i_0]))), (arr_6 [i_0 + 1] [i_0 + 1] [i_0])))));
        var_21 = ((((var_8) + (2147483647))) << (((((((((/* implicit */_Bool) ((long long int) arr_6 [9] [i_0 - 2] [i_0]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [2] [2LL] [i_0] [i_0])) ? (arr_7 [i_0 + 2] [7] [i_0]) : (arr_9 [i_0] [i_0] [i_0 - 1] [6LL] [i_0 - 3] [i_0])))) : (min((var_15), (arr_1 [i_0 - 3]))))) + (295887572LL))) - (4LL))));
    }
    for (long long int i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */int) ((long long int) ((long long int) max((arr_14 [i_4]), (arr_14 [15])))));
        arr_15 [i_4] = max((max((max((((/* implicit */long long int) arr_13 [i_4])), (var_9))), (((((/* implicit */long long int) arr_14 [i_4])) - (var_9))))), (((/* implicit */long long int) max((arr_13 [i_4]), (((arr_13 [i_4]) + (arr_14 [i_4])))))));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
    {
        arr_19 [i_5] |= (+(((int) arr_16 [i_5])));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            for (long long int i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                {
                    arr_24 [i_7] [i_6] [i_7] = ((/* implicit */long long int) (+((+(arr_22 [i_6] [i_6] [i_7] [i_6])))));
                    var_23 = ((/* implicit */long long int) (~(((int) 1552708724))));
                }
            } 
        } 
    }
    for (long long int i_8 = 0; i_8 < 16; i_8 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) min((min((arr_23 [i_8] [i_8] [i_8] [6]), (((/* implicit */long long int) arr_22 [8] [i_8] [10] [10])))), (((((/* implicit */_Bool) arr_21 [i_8] [3LL] [3LL])) ? (arr_23 [8] [i_8] [i_8] [i_8]) : (((/* implicit */long long int) arr_22 [i_8] [i_8] [i_8] [i_8]))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */long long int) arr_14 [i_8])) / (arr_17 [i_8]))) <= (((((/* implicit */_Bool) arr_14 [i_8])) ? (arr_17 [i_8]) : (arr_23 [i_8] [12] [i_8] [i_8]))))))) : (((((arr_25 [6]) / (arr_20 [i_8]))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 889119964072652206LL)) || (((/* implicit */_Bool) -1643838601))))))))));
        /* LoopSeq 2 */
        for (long long int i_9 = 0; i_9 < 16; i_9 += 4) 
        {
            var_25 = ((max((min((arr_13 [i_8]), (arr_16 [i_8]))), (arr_26 [i_8] [i_9]))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_8] [i_9])) ? (arr_18 [i_8] [i_8]) : (((/* implicit */long long int) arr_22 [i_8] [i_8] [i_8] [i_8])))))))));
            var_26 = min((((/* implicit */long long int) min((arr_26 [0LL] [i_8]), (arr_26 [i_8] [i_9])))), ((+(arr_18 [i_8] [i_9]))));
        }
        /* vectorizable */
        for (long long int i_10 = 2; i_10 < 13; i_10 += 1) 
        {
            var_27 = (((!(((/* implicit */_Bool) arr_30 [i_8])))) ? (arr_21 [i_10 + 2] [i_10] [i_10]) : (arr_21 [i_10 - 2] [i_10 + 3] [i_10 + 2]));
            arr_33 [i_10 - 2] = ((/* implicit */long long int) ((arr_23 [i_10 + 2] [i_10 - 2] [i_8] [i_10]) <= (arr_23 [i_10 + 2] [i_10 + 3] [i_8] [i_10])));
            /* LoopSeq 3 */
            for (int i_11 = 0; i_11 < 16; i_11 += 1) 
            {
                var_28 = ((/* implicit */int) ((arr_18 [i_10 + 2] [i_10 - 2]) / (((/* implicit */long long int) (-(arr_21 [7] [i_10 + 3] [i_11]))))));
                /* LoopSeq 2 */
                for (int i_12 = 1; i_12 < 14; i_12 += 2) 
                {
                    var_29 = ((((/* implicit */_Bool) arr_30 [i_10 + 3])) ? (arr_30 [i_10 - 1]) : (arr_30 [i_10 + 3]));
                    /* LoopSeq 2 */
                    for (long long int i_13 = 0; i_13 < 16; i_13 += 4) 
                    {
                        arr_40 [i_8] [i_10] [i_8] [i_13] = ((((/* implicit */_Bool) arr_26 [1LL] [13])) ? (arr_27 [i_12 + 1]) : (((/* implicit */long long int) ((((arr_14 [9]) + (2147483647))) << (((((var_1) + (75156345080457803LL))) - (11LL)))))));
                        var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_12 - 1] [i_10 - 2] [i_13] [i_12 - 1]))));
                        arr_41 [i_13] [i_13] [i_12 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_8] = ((/* implicit */int) (+(arr_25 [i_10 - 2])));
                    }
                    for (int i_14 = 0; i_14 < 16; i_14 += 2) 
                    {
                        var_31 = ((/* implicit */int) ((long long int) var_9));
                        var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) arr_36 [i_11] [i_11] [i_10 + 2])))));
                        arr_45 [i_8] [i_11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_26 [i_10 + 3] [i_10]))));
                    }
                    var_33 = arr_34 [i_12 - 1];
                    arr_46 [i_11] [15] [i_11] [i_11] [6] = ((((((/* implicit */_Bool) 1643838592)) && (((/* implicit */_Bool) 1267612247960808008LL)))) ? (((/* implicit */long long int) arr_35 [i_8] [i_8] [i_8] [i_8])) : (arr_27 [i_8]));
                    var_34 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_37 [i_8] [i_11] [12LL]) - (arr_31 [i_8])))) ? (arr_42 [i_10 + 3] [i_10 + 1] [i_8] [i_10 + 3] [i_8]) : (((/* implicit */long long int) arr_34 [i_12 - 1]))));
                }
                for (long long int i_15 = 0; i_15 < 16; i_15 += 2) 
                {
                    var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) var_6))));
                    var_36 = ((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_10 - 2] [i_10 - 2] [i_15])) ? (arr_37 [i_10 - 2] [i_10 + 1] [i_10]) : (arr_37 [i_10 - 2] [i_10 - 2] [i_11])));
                    var_37 = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) arr_14 [i_8])))));
                    var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_11])) || (((/* implicit */_Bool) arr_21 [i_10] [11LL] [i_10 + 3])))))));
                }
            }
            for (long long int i_16 = 0; i_16 < 16; i_16 += 1) 
            {
                arr_54 [i_16] [i_16] = arr_43 [i_16] [i_10 + 3] [i_10 - 2] [i_10 + 1] [i_10 + 1];
                arr_55 [i_8] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_8] [11LL] [i_10 + 1] [9] [i_16])) ? (arr_35 [i_10 + 2] [i_10 + 3] [i_10 + 3] [i_10 - 1]) : (arr_43 [5LL] [i_10 + 1] [i_10 + 1] [10] [i_8])));
            }
            for (int i_17 = 0; i_17 < 16; i_17 += 3) 
            {
                arr_60 [10LL] [10LL] [10LL] [i_17] = ((/* implicit */int) ((((long long int) var_4)) <= (((/* implicit */long long int) arr_30 [i_10 + 1]))));
                arr_61 [i_8] [11] [i_17] = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_8] [i_10] [i_17] [i_17])))))) ^ ((-(arr_42 [i_8] [i_8] [i_17] [i_8] [i_8]))));
                var_39 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_28 [i_8] [i_8]))));
            }
            var_40 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_21 [i_10 + 1] [i_10 + 1] [i_10 + 1]))));
        }
    }
    /* LoopNest 3 */
    for (long long int i_18 = 0; i_18 < 17; i_18 += 4) 
    {
        for (long long int i_19 = 0; i_19 < 17; i_19 += 1) 
        {
            for (long long int i_20 = 1; i_20 < 16; i_20 += 1) 
            {
                {
                    arr_71 [i_19] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_63 [i_18])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (((((/* implicit */_Bool) arr_70 [i_18] [i_18] [3])) ? (((/* implicit */long long int) arr_65 [i_19])) : (arr_67 [4LL] [i_20 - 1]))))), (((/* implicit */long long int) arr_70 [4] [i_19] [i_20]))));
                    var_41 = min((((/* implicit */long long int) ((((/* implicit */_Bool) 1643838601)) ? (((int) -8509602072478287020LL)) : (((((/* implicit */_Bool) 4357530175315991182LL)) ? (-1) : (arr_68 [i_19] [i_19] [i_19] [4LL])))))), (((long long int) 6505945641502809915LL)));
                }
            } 
        } 
    } 
    var_42 = ((/* implicit */int) var_7);
}
