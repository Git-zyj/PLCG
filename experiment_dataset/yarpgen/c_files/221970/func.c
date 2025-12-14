/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221970
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
    var_13 = ((/* implicit */unsigned char) var_6);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) arr_0 [i_0]);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_6 [i_2] [i_1] [(unsigned char)12] |= ((/* implicit */unsigned long long int) min((((/* implicit */signed char) arr_0 [i_1])), (((signed char) ((arr_2 [(unsigned char)17] [i_1] [i_0]) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_2])))))));
                    arr_7 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((var_8) < (4215971270198457852ULL)));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned char) (((~(((((/* implicit */_Bool) (signed char)-105)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) ^ (((unsigned long long int) (!(arr_2 [i_0] [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)105))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))) : (0ULL))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) (+(((/* implicit */int) arr_1 [i_3]))));
                                arr_22 [i_3] [i_4] [i_5] [i_6] [i_3] [i_7] = (signed char)105;
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_8 = 2; i_8 < 9; i_8 += 1) 
                    {
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) arr_19 [i_3] [i_5]))));
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) arr_25 [i_3] [i_4] [i_5] [i_8 + 1])) * (((/* implicit */int) arr_17 [i_3] [i_4] [i_5] [i_8] [i_8])))) : (((/* implicit */int) arr_1 [i_8]))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 2) 
                        {
                            arr_30 [i_3] [i_5] = ((/* implicit */unsigned char) ((_Bool) arr_27 [i_3] [i_3] [i_4] [i_5] [i_9] [i_10]));
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((_Bool) arr_25 [i_10] [i_4] [(unsigned char)8] [i_9])))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 2) 
                        {
                            var_21 &= ((/* implicit */unsigned char) ((arr_28 [(unsigned char)4] [i_4] [i_5]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_3] [i_5]))) : (var_6)));
                            var_22 = ((var_7) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5]))));
                            var_23 |= ((/* implicit */_Bool) ((((arr_4 [i_4] [i_9]) || (((/* implicit */_Bool) arr_9 [i_4])))) ? (((/* implicit */int) arr_8 [i_11])) : (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_24 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))))));
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (((((/* implicit */int) arr_33 [(signed char)8] [i_5] [6])) & (((/* implicit */int) (unsigned char)128)))))))));
                        }
                        arr_35 [i_3] = ((/* implicit */_Bool) (signed char)105);
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 3) 
                        {
                            var_25 &= ((/* implicit */int) ((signed char) 18446744073709551613ULL));
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)43)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_3] [i_4] [i_5] [i_12] [i_13] [i_13]))))))));
                        }
                        for (signed char i_14 = 0; i_14 < 10; i_14 += 3) 
                        {
                            arr_46 [i_3] [9] [i_12] [i_14] = ((/* implicit */unsigned long long int) arr_4 [4ULL] [i_4]);
                            var_27 = ((/* implicit */_Bool) var_5);
                            arr_47 [i_3] [i_4] [i_5] [i_5] [i_3] [8ULL] [i_3] = arr_8 [i_3];
                            arr_48 [i_3] = ((/* implicit */signed char) arr_40 [i_3] [4] [i_5] [i_12] [i_12]);
                        }
                        var_28 = (-(((/* implicit */int) arr_3 [(_Bool)1] [i_4] [i_5])));
                        arr_49 [i_3] [i_3] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (+(-830042341)));
                        var_29 = ((/* implicit */_Bool) arr_34 [i_3] [i_3] [i_4] [i_5] [i_3] [i_3] [7ULL]);
                        var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_43 [i_3] [i_4] [0])) ^ (((/* implicit */int) arr_1 [3ULL])))))));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 1) 
        {
            var_31 = arr_40 [i_3] [i_3] [i_3] [(_Bool)1] [i_3];
            /* LoopSeq 3 */
            for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 3) 
            {
                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3])))))) > (arr_40 [i_3] [i_15] [i_15] [i_15] [i_16])));
                var_33 = ((/* implicit */unsigned char) arr_29 [i_16] [i_16] [i_3] [i_15] [i_3] [6ULL] [i_3]);
            }
            for (unsigned long long int i_17 = 4; i_17 < 7; i_17 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 3) 
                {
                    var_34 = ((/* implicit */unsigned char) ((arr_24 [i_17] [i_17 - 1] [(unsigned char)0] [i_17 - 1] [i_17] [i_17 - 3]) ? (((/* implicit */int) arr_25 [i_3] [i_17 + 1] [i_3] [i_17 + 1])) : (((/* implicit */int) arr_28 [i_17] [i_17 - 3] [i_3]))));
                    var_35 |= ((/* implicit */unsigned long long int) ((var_9) > (var_8)));
                    arr_62 [i_3] [i_3] [i_15] [i_15] [i_17 + 2] [i_3] = ((((/* implicit */_Bool) ((unsigned char) arr_25 [i_3] [i_17] [(unsigned char)7] [i_3]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */int) arr_58 [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) (signed char)-105))))) : (((((/* implicit */unsigned long long int) arr_36 [i_3] [9ULL] [i_17] [i_15] [i_18] [9ULL])) / (1ULL))));
                }
                for (unsigned char i_19 = 0; i_19 < 10; i_19 += 3) 
                {
                    var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_8))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_17] [i_17] [i_17 - 4] [i_17 - 1] [i_17] [i_17 - 3])) >> (((arr_45 [i_17] [i_15] [i_15] [i_19] [i_3]) - (5110691726401256252ULL))))))));
                    arr_65 [i_3] [i_15] [i_17 - 4] [i_19] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_43 [i_17 + 2] [i_17 - 4] [i_17]))));
                    var_37 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3]))));
                }
                var_38 = ((/* implicit */signed char) arr_29 [i_3] [i_3] [7] [i_15] [i_3] [i_17 + 1] [7]);
            }
            for (signed char i_20 = 2; i_20 < 9; i_20 += 3) 
            {
                var_39 |= ((/* implicit */unsigned long long int) var_4);
                var_40 = ((/* implicit */unsigned long long int) ((unsigned char) arr_32 [i_3] [(_Bool)1] [i_20] [(_Bool)1] [5ULL] [5ULL]));
                arr_69 [(unsigned char)2] [i_15] [i_15] [i_15] &= ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_3)))));
            }
        }
    }
    for (unsigned long long int i_21 = 0; i_21 < 10; i_21 += 3) /* same iter space */
    {
        var_41 = ((((/* implicit */_Bool) arr_1 [(unsigned char)6])) ? (max((arr_67 [i_21] [i_21] [i_21] [i_21]), (arr_45 [i_21] [i_21] [i_21] [i_21] [i_21]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))));
        var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [8ULL] [8ULL] [8ULL])) ? (((((/* implicit */_Bool) ((unsigned char) arr_63 [i_21] [i_21] [(unsigned char)0]))) ? (arr_67 [i_21] [i_21] [i_21] [i_21]) : (((unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) arr_63 [i_21] [i_21] [8ULL]))));
        arr_72 [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((arr_36 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21]), (((/* implicit */int) var_2)))) < (((/* implicit */int) ((12ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))))) : (((arr_67 [i_21] [i_21] [i_21] [i_21]) << (((((((/* implicit */int) (signed char)105)) * (((/* implicit */int) arr_32 [(unsigned char)0] [(unsigned char)0] [(unsigned char)0] [(unsigned char)0] [i_21] [(unsigned char)0])))) - (11640)))))));
    }
    /* LoopNest 2 */
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            {
                var_43 &= arr_1 [i_22];
                var_44 = ((/* implicit */_Bool) (+(((/* implicit */int) var_2))));
                arr_81 [i_22] [i_22] = ((/* implicit */int) ((((/* implicit */_Bool) 12782045193921668257ULL)) && (((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), (((((/* implicit */int) var_1)) << (((((/* implicit */int) (unsigned char)104)) - (90))))))))));
            }
        } 
    } 
}
