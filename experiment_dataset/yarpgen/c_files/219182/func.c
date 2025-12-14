/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219182
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 24; i_0 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (min((arr_1 [i_0]), (arr_1 [i_0]))) : (min((arr_2 [i_0 + 1]), (-8331250774104379154LL)))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((731627102558413143LL) | (-9223372036854775807LL)))) ? (((/* implicit */unsigned long long int) (~(min((arr_3 [i_0] [(unsigned char)16]), (arr_3 [i_0] [i_0])))))) : ((~(((var_10) ^ (((/* implicit */unsigned long long int) arr_2 [i_0]))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 24; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((((/* implicit */_Bool) var_2)) ? (arr_0 [i_1 + 1] [i_1]) : (arr_0 [i_1 - 1] [i_1])))));
        arr_7 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1]))));
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 1) 
        {
            arr_10 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_1]))));
            arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) ((long long int) ((arr_1 [i_1]) == (arr_8 [i_1]))));
        }
        for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            arr_14 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)18))) | (var_2)));
            arr_15 [i_1] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) 1020269436U)) : (12761782621317253504ULL)));
            arr_16 [i_1] = ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) arr_1 [22ULL])))));
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_8 [i_1])))) ? (((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])) / (var_9))) : (((/* implicit */unsigned long long int) ((arr_2 [i_1 + 1]) % (arr_2 [i_1]))))));
        }
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_7)) ^ (arr_5 [i_1 + 1] [i_5])));
                var_21 *= ((/* implicit */unsigned char) arr_0 [i_1 - 1] [i_1 + 1]);
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_1 - 1] [i_4])) || (((/* implicit */_Bool) arr_17 [i_1] [i_4]))));
                arr_24 [i_1] [i_4] [i_1] [i_5] = ((/* implicit */unsigned long long int) arr_5 [i_1 + 1] [i_1 + 1]);
            }
            for (unsigned char i_6 = 2; i_6 < 22; i_6 += 1) 
            {
                var_23 = ((unsigned int) (unsigned char)208);
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(arr_8 [i_1])))) <= (arr_25 [i_1 - 1] [i_6 + 1] [i_1] [i_6])));
                /* LoopSeq 3 */
                for (unsigned char i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    var_25 &= ((/* implicit */unsigned long long int) -6582890439242676607LL);
                    var_26 = ((/* implicit */unsigned char) arr_20 [i_1] [i_4] [i_6]);
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        arr_32 [i_6] [i_4] [i_6] [i_6] [i_1] = ((/* implicit */unsigned int) (-(arr_3 [i_1 + 1] [i_6 + 2])));
                        var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 8331250774104379153LL))));
                        var_28 = ((/* implicit */unsigned int) max((var_28), (var_2)));
                        arr_33 [i_8] [i_4] [i_4] [i_6] [i_7] [i_8] &= ((/* implicit */unsigned int) arr_23 [i_1 + 1] [i_4] [i_1 + 1] [i_6 + 3]);
                        var_29 = ((/* implicit */unsigned long long int) arr_26 [i_1 + 1] [i_6 + 2]);
                    }
                    var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)124)) ? (2039216103U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1] [i_4]))))))));
                }
                for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        var_31 = ((/* implicit */long long int) arr_30 [i_1] [i_4] [i_1] [i_9] [i_10]);
                        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_4] [i_9])) && (((/* implicit */_Bool) arr_18 [i_1] [i_4])))))));
                    }
                    for (long long int i_11 = 0; i_11 < 25; i_11 += 1) 
                    {
                        arr_43 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_10)))) ? (var_9) : (((/* implicit */unsigned long long int) arr_23 [i_4] [i_6 + 1] [i_4] [i_6]))));
                        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_1 - 1] [i_1 - 1] [i_9] [8U])) ? (arr_18 [i_6 + 1] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_3) < (arr_0 [i_1] [i_6 + 1])))))));
                        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((6606293636584985671ULL) | (((/* implicit */unsigned long long int) 406615635U))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)26))) : (9223372036854775807LL)));
                    }
                    for (unsigned char i_12 = 2; i_12 < 23; i_12 += 4) 
                    {
                        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1270025605U)) ? (((/* implicit */unsigned long long int) var_15)) : (15184312374587355952ULL)))) ? (var_6) : (870883165U)));
                        arr_48 [i_1] [i_6 + 1] [i_12] = ((/* implicit */unsigned long long int) arr_17 [i_1 + 1] [i_1 + 1]);
                        var_36 &= ((/* implicit */long long int) ((unsigned char) arr_40 [i_12] [i_12] [i_12] [i_12] [i_12 + 1] [i_12 - 2]));
                        var_37 = ((/* implicit */unsigned int) ((long long int) (~(3920607496U))));
                    }
                    var_38 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)214))));
                }
                for (unsigned int i_13 = 0; i_13 < 25; i_13 += 4) 
                {
                    var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))) : (3903555942U)));
                    var_40 = ((/* implicit */long long int) arr_22 [i_6 - 1] [i_1 + 1]);
                }
            }
            for (unsigned char i_14 = 2; i_14 < 24; i_14 += 3) 
            {
                var_41 = ((/* implicit */unsigned char) var_9);
                var_42 = ((/* implicit */long long int) min((var_42), (((((/* implicit */_Bool) arr_39 [i_14] [i_14 - 1] [i_14] [i_4] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_1] [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 - 2]))) : (var_16)))));
                /* LoopSeq 2 */
                for (long long int i_15 = 0; i_15 < 25; i_15 += 1) /* same iter space */
                {
                    var_43 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((5124565061774116714ULL) < (((/* implicit */unsigned long long int) var_6)))))));
                    var_44 *= ((/* implicit */unsigned char) arr_0 [i_1] [i_14]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 1) 
                    {
                        arr_57 [i_1] [i_1] [i_14 - 1] [i_1] [i_16] = ((/* implicit */long long int) ((unsigned int) (~(arr_8 [3ULL]))));
                        var_45 = ((/* implicit */unsigned char) max((var_45), (arr_45 [12U] [i_4] [i_14] [i_14] [i_16])));
                        var_46 = ((/* implicit */unsigned char) max((var_46), (((unsigned char) arr_21 [(unsigned char)2] [i_1 - 1]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_17 = 4; i_17 < 23; i_17 += 2) 
                    {
                        arr_61 [i_1] [i_4] [i_1] [i_15] [i_17 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_53 [5ULL] [i_4]) : ((~((-9223372036854775807LL - 1LL))))));
                        var_47 = ((/* implicit */long long int) min((var_47), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (arr_25 [i_17 - 3] [i_1 + 1] [i_14] [i_14 - 2]) : (((/* implicit */unsigned long long int) arr_54 [i_14 - 2] [i_14 - 2] [i_14 - 2] [i_15] [i_15] [i_17])))))));
                    }
                    arr_62 [i_1] [i_1] [i_14] [i_15] = ((((/* implicit */_Bool) (~(var_14)))) ? (((arr_46 [2U] [i_4] [i_14] [i_14] [i_15]) | (((/* implicit */unsigned long long int) arr_5 [i_4] [i_4])))) : (var_10));
                }
                for (long long int i_18 = 0; i_18 < 25; i_18 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (long long int i_19 = 0; i_19 < 25; i_19 += 1) 
                    {
                        arr_69 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_46 [i_1] [i_1 + 1] [i_1 - 1] [i_14 - 2] [i_14 - 2]))));
                        var_48 = ((/* implicit */long long int) ((unsigned long long int) (unsigned char)124));
                    }
                    for (unsigned long long int i_20 = 4; i_20 < 21; i_20 += 4) /* same iter space */
                    {
                        var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_1 - 1] [i_20 + 2])) ? (arr_3 [i_20 - 2] [9U]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                        arr_73 [i_1] [i_20] = ((/* implicit */unsigned char) (~(9223372036854775790LL)));
                    }
                    for (unsigned long long int i_21 = 4; i_21 < 21; i_21 += 4) /* same iter space */
                    {
                        arr_77 [i_1] [i_4] [i_1] [i_18] [i_21] = ((((/* implicit */_Bool) arr_5 [i_14 - 1] [i_21 + 3])) ? (((/* implicit */long long int) var_8)) : (arr_5 [i_18] [i_21]));
                        var_50 = ((/* implicit */unsigned int) (+((-(arr_29 [i_1] [i_4] [i_14] [i_21] [i_21] [i_21 - 4] [i_4])))));
                    }
                    arr_78 [i_1] [9ULL] [i_14] [i_1] = ((/* implicit */unsigned long long int) var_6);
                }
                arr_79 [6LL] [i_4] [i_14] &= arr_26 [i_4] [i_14 - 2];
                var_51 = ((long long int) arr_17 [i_14 - 2] [i_1 + 1]);
            }
            for (unsigned char i_22 = 0; i_22 < 25; i_22 += 3) 
            {
                var_52 = ((/* implicit */unsigned char) min((var_52), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */long long int) ((unsigned int) var_15))) : (arr_35 [i_1 - 1] [12ULL]))))));
                /* LoopSeq 1 */
                for (long long int i_23 = 0; i_23 < 25; i_23 += 2) 
                {
                    var_53 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_37 [i_1 - 1] [i_4] [i_22] [i_22] [i_23]))));
                    arr_88 [i_1] [i_1] [i_22] = ((/* implicit */unsigned char) var_6);
                    arr_89 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))));
                }
                arr_90 [i_4] [i_1] [i_22] [i_4] = ((/* implicit */long long int) arr_58 [i_4] [i_22]);
            }
            arr_91 [9U] [i_1] [(unsigned char)16] = ((/* implicit */unsigned char) (~(((arr_40 [i_1] [i_4] [i_4] [i_4] [i_1] [8U]) << (((((/* implicit */int) arr_58 [i_1] [i_4])) - (196)))))));
            arr_92 [(unsigned char)16] &= ((/* implicit */unsigned int) arr_5 [i_1] [i_4]);
        }
        var_54 = ((/* implicit */unsigned int) (~(arr_86 [i_1 - 1] [3U] [i_1] [i_1])));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_24 = 4; i_24 < 22; i_24 += 1) 
    {
        var_55 = ((/* implicit */unsigned char) (~(var_5)));
        arr_95 [i_24] = max((arr_37 [i_24 - 3] [i_24] [i_24 + 1] [i_24] [i_24]), (var_12));
    }
}
