/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220553
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
    var_13 = ((/* implicit */_Bool) var_9);
    var_14 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((var_11) / (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))))), (max((((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned char) var_9))))), (((unsigned long long int) var_7))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [(signed char)10] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(-1)))) ? (0) : (var_11)))), (max((var_7), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [(unsigned short)5] [(unsigned char)2])) || (((/* implicit */_Bool) arr_1 [(short)9] [(short)0])))))))));
        var_15 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [(_Bool)1] [18LL])) > (((/* implicit */int) arr_1 [i_0] [i_0]))))), (((unsigned long long int) arr_0 [7ULL] [(unsigned char)8]))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 14; i_1 += 4) 
    {
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) arr_5 [3LL]))));
        var_17 -= (((!(((/* implicit */_Bool) var_1)))) && (((/* implicit */_Bool) var_10)));
    }
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        arr_10 [(short)4] = ((/* implicit */short) var_7);
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) ((short) ((1023) | (((arr_8 [6]) ^ (((/* implicit */int) var_0)))))));
                                var_19 += ((/* implicit */unsigned long long int) (((((~(arr_8 [i_2]))) + (2147483647))) >> ((((~(((/* implicit */int) arr_13 [i_2] [6U] [(unsigned short)9] [5ULL])))) + (53678)))));
                                arr_21 [(signed char)14] [5] [6ULL] [(signed char)16] [7] = ((/* implicit */unsigned long long int) max(((unsigned char)2), ((unsigned char)254)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */unsigned int) (unsigned short)37331)), (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                                var_21 |= ((/* implicit */_Bool) (~(max((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_19 [5ULL] [(unsigned char)10] [(unsigned char)15] [2LL] [6ULL])), (var_10)))), ((-(arr_7 [5ULL] [15])))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_20 [14] [(unsigned char)6] [7ULL] [11ULL] [(unsigned short)7] [12ULL])), (8119854981937845692ULL)))) || ((!(((/* implicit */_Bool) (unsigned short)28204))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_9 = 3; i_9 < 13; i_9 += 3) 
    {
        var_23 = ((/* implicit */long long int) (-((~(-23)))));
        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) min((min((((((/* implicit */unsigned long long int) var_8)) + (var_3))), (((/* implicit */unsigned long long int) ((var_12) / (((/* implicit */int) arr_11 [10ULL] [12] [(unsigned short)6]))))))), (((/* implicit */unsigned long long int) ((signed char) arr_11 [17ULL] [i_9 - 3] [i_9 - 1]))))))));
        var_25 = ((/* implicit */int) (-(max((arr_22 [13ULL] [i_9 - 2] [i_9 - 3] [7U] [i_9 + 1]), (arr_22 [(unsigned char)2] [i_9 - 2] [i_9 + 1] [(unsigned char)16] [i_9 - 1])))));
        var_26 = ((/* implicit */unsigned short) (~(((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
        /* LoopSeq 4 */
        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 2) /* same iter space */
        {
            var_27 += ((/* implicit */short) var_11);
            var_28 ^= ((/* implicit */int) (+((~(var_6)))));
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [0] [(unsigned short)13] [17LL] [(_Bool)1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) max((arr_1 [(short)0] [17ULL]), (arr_31 [(short)5]))))));
            var_30 ^= ((/* implicit */unsigned long long int) ((int) ((arr_18 [i_9 - 3] [16ULL] [(unsigned short)3] [15ULL]) ^ (arr_18 [i_9 - 3] [13LL] [(short)12] [(signed char)0]))));
            /* LoopSeq 2 */
            for (unsigned char i_11 = 1; i_11 < 12; i_11 += 4) 
            {
                var_31 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (-(var_12)))))))));
                var_32 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((17033640180987873924ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))));
            }
            for (short i_12 = 0; i_12 < 14; i_12 += 2) 
            {
                var_33 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((int) (signed char)67))))) || (((/* implicit */_Bool) var_8))));
                var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_9 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_6)))))))) : (max((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_29 [4ULL] [9U])), (var_8)))), (min((var_6), (((/* implicit */unsigned long long int) arr_1 [(unsigned char)10] [(signed char)14]))))))));
                var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (arr_16 [i_9 - 3] [i_9 - 1] [(signed char)2]) : (arr_16 [i_9 - 3] [i_9 + 1] [(short)1])))), (max((arr_9 [i_9 - 2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))))))))));
                var_36 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [7ULL] [(unsigned short)14] [10LL] [(_Bool)1] [12LL])) + (-1601966255)))) ? (((((/* implicit */int) arr_29 [8] [(signed char)13])) % (((/* implicit */int) (unsigned char)251)))) : (((/* implicit */int) arr_29 [i_9 + 1] [i_9 - 3]))))));
            }
        }
        /* vectorizable */
        for (unsigned char i_13 = 0; i_13 < 14; i_13 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 3) 
            {
                for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 3) 
                {
                    {
                        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (var_3))))));
                        var_38 = ((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_9 - 3] [i_9 + 1] [i_9 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_9 - 2] [i_9 - 1] [i_9 + 1]))) : (var_3)));
                        var_39 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(var_11)))) == (((unsigned long long int) var_10))));
                        /* LoopSeq 1 */
                        for (int i_16 = 0; i_16 < 14; i_16 += 3) 
                        {
                            var_40 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_9 - 2] [i_9 - 1] [i_9 - 2]))) : (arr_16 [i_9 - 3] [(short)13] [i_9 + 1])));
                            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_11 [i_9 - 1] [i_9 + 1] [i_9 - 2])) : (((/* implicit */int) (short)30990))));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_17 = 0; i_17 < 14; i_17 += 2) 
            {
                for (int i_18 = 1; i_18 < 12; i_18 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_19 = 0; i_19 < 14; i_19 += 3) 
                        {
                            var_42 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_9 + 1] [i_9 - 2] [(signed char)12] [(unsigned char)2] [i_9 - 2]))) | (arr_50 [i_9 + 1] [i_9 - 3] [(unsigned char)2] [5LL])));
                            var_43 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_15 [7ULL] [4ULL] [i_18 - 1] [13]))));
                        }
                        var_44 = ((/* implicit */long long int) ((((/* implicit */int) var_4)) >> (((arr_49 [i_9 + 1] [(unsigned char)3] [i_18 - 1] [5ULL]) - (6851422850576419161LL)))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_20 = 0; i_20 < 14; i_20 += 2) 
        {
            var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_32 [i_9 + 1] [(signed char)11] [(signed char)4] [i_9 + 1]))));
            var_46 = ((((/* implicit */_Bool) arr_7 [i_9 + 1] [i_9 + 1])) ? (arr_7 [i_9 - 2] [i_9 + 1]) : (arr_7 [i_9 - 2] [i_9 - 3]));
        }
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            arr_63 [i_9] = ((/* implicit */unsigned short) arr_54 [(short)10] [(unsigned char)12] [(unsigned char)9] [3ULL] [(unsigned short)1] [(short)1] [6LL]);
            var_47 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_28 [i_9 - 1] [i_9 - 1])) ? (arr_14 [i_9 - 3] [6ULL] [i_9 - 3]) : (((/* implicit */int) var_0)))), (((/* implicit */int) max((((/* implicit */short) arr_28 [i_9 - 1] [i_9 + 1])), (var_1))))));
            var_48 = ((/* implicit */unsigned short) var_9);
        }
    }
}
