/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207318
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((signed char) (~(((/* implicit */int) var_13)))));
                var_14 = ((((((/* implicit */_Bool) arr_2 [i_1 - 2])) && (((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) max((3924321470556634969LL), (min((((/* implicit */long long int) arr_2 [i_0])), (var_1)))))) : (((max((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_9))) & (max((((/* implicit */unsigned long long int) var_4)), (var_6))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_15 = ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_0)))) : (max((var_5), (var_2))))) ^ (((/* implicit */unsigned long long int) var_11)));
                                var_16 = ((/* implicit */long long int) ((var_10) + (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_12))))) - (arr_14 [i_2] [i_2] [i_2] [i_3] [i_4] [i_2])))));
                                var_17 = ((/* implicit */long long int) 539948155589016643ULL);
                                var_18 = ((/* implicit */short) (!(max((((var_1) < (((/* implicit */long long int) var_11)))), (((((/* implicit */long long int) ((/* implicit */int) var_8))) > (arr_11 [i_4] [16ULL] [i_1] [i_0])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 4 */
    for (long long int i_5 = 2; i_5 < 14; i_5 += 1) /* same iter space */
    {
        var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))) / (((((/* implicit */_Bool) arr_18 [i_5 - 1])) ? (arr_18 [i_5 + 2]) : (var_7)))));
        var_20 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) var_11)), (var_7))) << (((((((/* implicit */_Bool) arr_19 [i_5 - 2] [i_5 - 2])) ? (var_1) : (arr_19 [i_5 + 3] [i_5]))) + (1223007436164430640LL)))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((3924321470556634961LL) >= (-3924321470556634930LL)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (var_11))))))));
        var_22 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) | (((((/* implicit */_Bool) arr_19 [i_5 - 1] [i_5])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
        var_23 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_19 [i_5] [i_5 + 2])) == (arr_18 [i_5 - 2])))), (((unsigned long long int) var_6))));
    }
    for (long long int i_6 = 2; i_6 < 14; i_6 += 1) /* same iter space */
    {
        arr_22 [i_6 + 2] [i_6] = ((/* implicit */unsigned long long int) min((min((-3924321470556634959LL), (-3924321470556634970LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_20 [i_6]) | (arr_20 [i_6])))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) != (var_10))))))));
        /* LoopNest 3 */
        for (short i_7 = 1; i_7 < 15; i_7 += 3) 
        {
            for (long long int i_8 = 2; i_8 < 15; i_8 += 1) 
            {
                for (unsigned int i_9 = 2; i_9 < 17; i_9 += 1) 
                {
                    {
                        var_24 = ((/* implicit */short) min((((arr_19 [i_6 - 1] [i_6 - 1]) - (arr_19 [i_6 - 1] [i_7 + 3]))), (arr_17 [i_6 + 4])));
                        var_25 *= ((((arr_23 [i_6 - 2] [6ULL] [i_8 + 1]) > (arr_23 [i_6 + 1] [4ULL] [i_8 + 2]))) ? (((((/* implicit */_Bool) arr_23 [i_6 + 3] [(_Bool)1] [i_8 + 2])) ? (((/* implicit */unsigned long long int) arr_20 [i_6 + 2])) : (arr_23 [i_6 + 3] [4LL] [i_8 + 3]))) : (((/* implicit */unsigned long long int) max((arr_20 [i_6 - 2]), (var_0)))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_10 = 2; i_10 < 15; i_10 += 3) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 1) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 2) 
                {
                    {
                        var_26 = ((/* implicit */unsigned int) var_11);
                        arr_40 [i_6 - 2] [i_10 + 3] [i_11] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_11)) * (var_6)));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_13 = 2; i_13 < 14; i_13 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_8))));
        var_28 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_6)))) && ((!(((/* implicit */_Bool) var_10))))));
    }
    for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 2) 
    {
        /* LoopNest 3 */
        for (short i_15 = 0; i_15 < 25; i_15 += 1) 
        {
            for (short i_16 = 2; i_16 < 24; i_16 += 2) 
            {
                for (int i_17 = 0; i_17 < 25; i_17 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_18 = 0; i_18 < 25; i_18 += 4) /* same iter space */
                        {
                            arr_55 [i_15] [i_17] [i_17] [i_17] [i_18] [3ULL] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((long long int) arr_50 [i_16 - 2] [i_15] [i_16 - 2]))) + (((((/* implicit */_Bool) ((arr_54 [i_14] [i_15] [i_15]) ? (var_5) : (var_6)))) ? (3ULL) : (((var_2) >> (((var_7) - (11646624159027046746ULL)))))))));
                            var_29 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_50 [i_14] [i_15] [i_16]), (arr_50 [i_14] [i_15] [i_16 - 2])))) ? (arr_47 [20ULL] [i_16 - 2]) : (((/* implicit */long long int) ((/* implicit */int) ((var_10) < (arr_44 [i_15])))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((17848982477618740138ULL) <= (18446744073709551604ULL))))) & (max((arr_48 [i_14] [i_15] [i_16 - 1] [i_17]), (var_5)))))));
                        }
                        for (long long int i_19 = 0; i_19 < 25; i_19 += 4) /* same iter space */
                        {
                            var_30 = min((arr_56 [i_14] [i_14] [i_14] [i_17] [i_19]), (var_6));
                            arr_58 [i_14] [i_14] [i_16] [(_Bool)1] [i_17] [i_15] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_44 [i_16 + 1]) >> (((arr_44 [i_16 - 2]) - (15513122760219505332ULL)))))) ? ((-(((/* implicit */int) arr_53 [i_15] [i_15] [i_16 + 1] [i_16] [i_16 - 2])))) : ((-(arr_51 [i_15] [i_14] [i_14] [i_15])))));
                            var_31 = ((/* implicit */unsigned long long int) ((int) min((((((/* implicit */_Bool) var_8)) ? (arr_43 [i_14]) : (var_7))), (((/* implicit */unsigned long long int) var_8)))));
                        }
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))) != (max((2153667046865932270ULL), (arr_52 [i_14] [i_15] [i_17] [i_15]))))))) * (var_7))))));
                    }
                } 
            } 
        } 
        var_33 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_13))))) | (((((/* implicit */_Bool) var_2)) ? (arr_56 [i_14] [11ULL] [i_14] [i_14] [i_14]) : (((/* implicit */unsigned long long int) var_1))))))) ? (((((((/* implicit */_Bool) arr_47 [i_14] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [23] [i_14] [23] [i_14] [i_14]))) : (arr_49 [i_14] [i_14] [i_14]))) / (arr_44 [i_14]))) : (min((((arr_43 [i_14]) & (var_7))), (min((var_9), (((/* implicit */unsigned long long int) var_4)))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_20 = 3; i_20 < 17; i_20 += 1) 
    {
        arr_61 [i_20] [i_20] = (-(var_1));
        var_34 = ((/* implicit */short) arr_52 [i_20] [i_20 - 1] [(short)4] [i_20]);
        var_35 |= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_56 [i_20] [i_20 + 2] [i_20 - 2] [(short)19] [8ULL]) << (((arr_44 [i_20]) - (15513122760219505373ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_20 - 1] [(short)12] [i_20 + 2]))) : (((((/* implicit */_Bool) (short)-26532)) ? (((/* implicit */unsigned long long int) 3924321470556634976LL)) : (var_9)))));
        /* LoopSeq 1 */
        for (short i_21 = 1; i_21 < 16; i_21 += 2) 
        {
            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_46 [(unsigned short)0])));
            var_37 = ((/* implicit */unsigned int) ((((arr_46 [8ULL]) / (((/* implicit */long long int) 603481501U)))) + (((/* implicit */long long int) ((/* implicit */int) var_3)))));
        }
    }
    for (unsigned int i_22 = 0; i_22 < 18; i_22 += 2) 
    {
        arr_68 [i_22] [11LL] = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) ((arr_47 [i_22] [i_22]) < (((/* implicit */long long int) var_11))))), (((((/* implicit */long long int) arr_66 [8ULL])) - (arr_50 [i_22] [i_22] [i_22]))))) >> (((((arr_32 [i_22] [i_22] [i_22] [i_22]) & (arr_28 [i_22]))) - (3648508903543154815LL)))));
        var_38 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_4)) <= (((/* implicit */int) var_13)))) ? (((/* implicit */int) max((arr_67 [i_22] [i_22]), (arr_67 [i_22] [i_22])))) : (((((/* implicit */_Bool) var_13)) ? (arr_66 [i_22]) : (((/* implicit */int) var_8))))));
        var_39 = ((/* implicit */_Bool) max((((11082924451473579880ULL) * (18446744073709551613ULL))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_30 [i_22] [i_22]))))) + (max((var_5), (((/* implicit */unsigned long long int) var_13))))))));
        var_40 = ((/* implicit */int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_42 [i_22])), (var_5))), (var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_6) > (min((var_2), (((/* implicit */unsigned long long int) var_12)))))))) : (max((((/* implicit */long long int) arr_38 [i_22])), (var_0)))));
    }
    var_41 = ((((/* implicit */_Bool) ((var_10) / (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_11)), (var_1)))) : (var_9));
}
