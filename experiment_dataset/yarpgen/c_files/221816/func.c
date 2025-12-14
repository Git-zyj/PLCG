/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221816
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((unsigned long long int) (-(((/* implicit */int) ((short) arr_1 [i_0] [i_0]))))))));
        var_16 = ((/* implicit */unsigned short) ((int) ((min((arr_0 [i_0]), (arr_0 [i_0]))) >= (((int) arr_0 [i_0])))));
    }
    var_17 = ((/* implicit */_Bool) ((unsigned int) ((unsigned long long int) ((long long int) var_10))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 21; i_1 += 4) 
    {
        arr_4 [i_1] = (-(((/* implicit */int) arr_3 [i_1] [i_1])));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_5 [i_1 - 1] [i_1]))) ? (arr_5 [i_2] [i_1]) : ((-(((/* implicit */int) arr_3 [i_1] [i_2]))))));
            arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned int) ((arr_2 [i_2]) >= (((/* implicit */int) arr_3 [i_1] [i_2])))));
            /* LoopSeq 2 */
            for (long long int i_3 = 3; i_3 < 21; i_3 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_4 = 2; i_4 < 21; i_4 += 4) 
                {
                    arr_12 [i_4] [i_2] [i_3] [i_1] [i_3] = ((/* implicit */short) (~(arr_10 [i_1 - 1])));
                    arr_13 [i_1] [i_2] [i_1] [i_4 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1])) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1 - 1] [i_1])));
                }
                arr_14 [i_3] [i_1] [i_1] = ((/* implicit */int) ((unsigned long long int) arr_8 [i_1] [i_1 + 1] [i_3 - 1] [i_1]));
                var_19 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_3] [i_3]))))) >= (((/* implicit */int) arr_9 [i_1 + 1] [i_1])));
            }
            for (unsigned long long int i_5 = 3; i_5 < 19; i_5 += 1) 
            {
                var_20 = ((/* implicit */signed char) arr_18 [i_1]);
                var_21 = ((/* implicit */signed char) ((arr_16 [i_1]) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_1] [i_2])))))));
                var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_6 [i_5 - 1] [i_2] [(short)2])))) ? (arr_6 [i_5] [i_5 - 2] [8]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [i_5] [i_1] [i_1])))))));
                arr_19 [i_1] [2LL] [i_5] [i_1] = ((arr_11 [i_1] [i_1] [i_1] [i_1 + 1]) / (arr_10 [i_1 + 1]));
            }
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            arr_23 [i_1] [i_1] [i_6] = ((/* implicit */int) ((arr_3 [i_1] [i_1 - 1]) ? (arr_6 [i_1 + 1] [i_1 + 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1 - 1])))));
            var_23 |= ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_6 - 1]))));
            var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((short) arr_3 [i_1] [i_6 - 1])))));
            arr_24 [i_1] = ((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) (unsigned char)0)))));
        }
        arr_25 [i_1] = ((/* implicit */unsigned short) ((int) arr_21 [i_1 - 1] [i_1 + 1]));
        /* LoopSeq 1 */
        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            arr_30 [i_1] [i_7] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_22 [i_1] [i_1])) ? (arr_8 [i_7] [i_1] [i_1] [i_1]) : (arr_8 [i_1] [i_1 - 1] [i_1] [i_1]))));
            var_25 = ((/* implicit */unsigned int) ((unsigned short) arr_16 [i_1]));
            arr_31 [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(arr_10 [i_1 - 1]))))));
            var_26 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_7])))))));
        }
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 11; i_8 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
        {
            var_27 = ((unsigned char) ((((/* implicit */_Bool) arr_27 [i_9])) ? (((/* implicit */unsigned long long int) arr_26 [20U])) : (arr_16 [12ULL])));
            /* LoopSeq 3 */
            for (unsigned int i_10 = 0; i_10 < 13; i_10 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 3; i_12 < 10; i_12 += 3) 
                    {
                        {
                            var_28 = (+(((/* implicit */int) (unsigned char)253)));
                            var_29 = ((/* implicit */int) ((short) ((arr_40 [3ULL] [i_9] [i_10] [i_11]) && (((/* implicit */_Bool) arr_20 [i_8])))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */short) (+(((/* implicit */int) arr_20 [i_8 + 1]))));
            }
            for (unsigned int i_13 = 0; i_13 < 13; i_13 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 1) /* same iter space */
                {
                    var_31 += ((/* implicit */int) ((arr_35 [i_9 + 1] [i_8 + 2]) != (arr_35 [i_9 + 1] [i_8 + 2])));
                    /* LoopSeq 3 */
                    for (unsigned char i_15 = 4; i_15 < 12; i_15 += 3) 
                    {
                        var_32 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((unsigned int) arr_53 [i_15] [i_13] [i_8] [i_8]))) - ((+(18446744073709551615ULL)))));
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_52 [i_9 + 1] [i_13] [i_13])))) >= (arr_55 [i_8])));
                    }
                    for (signed char i_16 = 0; i_16 < 13; i_16 += 4) 
                    {
                        var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_17 [i_13] [i_13] [i_13]))) ? (arr_35 [i_8 + 1] [i_9 + 1]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_8] [i_16] [i_13] [3] [3])))))));
                        arr_59 [i_8 - 1] [8] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) arr_47 [i_16]))) == (((/* implicit */int) ((short) arr_55 [i_14])))));
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_35 [i_9] [i_9])) % (arr_11 [i_16] [i_9 + 1] [i_13] [i_14])));
                    }
                    for (unsigned char i_17 = 1; i_17 < 12; i_17 += 1) 
                    {
                        var_36 = ((unsigned short) arr_60 [i_17] [i_9 + 1] [i_8 + 2] [i_14] [i_14]);
                        var_37 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) arr_34 [i_8])) <= (((/* implicit */int) arr_17 [i_8 - 1] [i_13] [i_13])))));
                        var_38 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_22 [i_8] [i_17])) ? (arr_51 [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_44 [(unsigned char)5] [i_9 + 1] [(unsigned char)5] [i_13] [(unsigned char)5] [i_17]))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 1) 
                    {
                        var_39 += ((/* implicit */signed char) ((short) (-(65520))));
                        arr_65 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [(unsigned short)6] [i_9])) % (((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1]))));
                    }
                    arr_66 [i_14] [i_8] |= ((/* implicit */unsigned long long int) ((_Bool) ((unsigned long long int) arr_41 [i_14] [(unsigned char)4] [i_8] [i_8])));
                }
                for (unsigned long long int i_19 = 0; i_19 < 13; i_19 += 1) /* same iter space */
                {
                    var_40 = ((/* implicit */long long int) ((unsigned int) arr_37 [i_8] [(unsigned char)9]));
                    var_41 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) (unsigned short)31)))));
                }
                /* LoopNest 2 */
                for (unsigned short i_20 = 1; i_20 < 12; i_20 += 4) 
                {
                    for (unsigned short i_21 = 0; i_21 < 13; i_21 += 3) 
                    {
                        {
                            var_42 = ((/* implicit */int) ((unsigned long long int) (+(((/* implicit */int) arr_32 [i_8])))));
                            var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) ((int) arr_73 [i_8 - 1])))));
                            arr_75 [i_8] [i_21] [i_13] [i_20] [i_21] [i_9] [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_21])) <= (((/* implicit */int) arr_41 [i_8 + 1] [i_9 + 1] [i_8 + 2] [i_20 + 1]))));
                        }
                    } 
                } 
            }
            for (unsigned short i_22 = 0; i_22 < 13; i_22 += 4) 
            {
                arr_80 [i_8] [i_9] [i_22] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_56 [i_8] [i_9] [i_22] [i_22] [i_22] [i_22])) ? (((/* implicit */int) arr_32 [i_9])) : (((/* implicit */int) arr_17 [i_8 + 2] [i_9] [i_22])))));
                var_44 = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned char) arr_56 [i_22] [i_22] [i_22] [i_22] [(signed char)2] [i_8])));
            }
        }
        for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) /* same iter space */
        {
            var_45 = ((signed char) (-(((/* implicit */int) arr_64 [i_8 + 2] [i_23] [i_8] [i_23] [i_8] [i_23] [i_8 + 2]))));
            var_46 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_28 [i_8 - 1] [i_8 - 1])) ? (((/* implicit */int) arr_81 [(_Bool)0] [i_23] [8ULL])) : (arr_48 [i_8] [i_23 + 1] [i_8]))) & (((/* implicit */int) ((((/* implicit */_Bool) arr_56 [i_8] [i_23] [i_23 + 1] [i_8] [i_23 + 1] [i_23])) && (((/* implicit */_Bool) arr_27 [(signed char)7])))))));
        }
        var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) arr_26 [(_Bool)1]))));
    }
    /* vectorizable */
    for (unsigned short i_24 = 0; i_24 < 20; i_24 += 2) 
    {
        var_48 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_17 [i_24] [i_24] [i_24]))));
        /* LoopSeq 1 */
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            arr_88 [i_24] = ((/* implicit */long long int) (~(arr_85 [i_24])));
            var_49 = ((/* implicit */unsigned long long int) ((arr_27 [i_24]) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_15 [i_24])) == (((/* implicit */int) arr_9 [10ULL] [i_24]))))))));
            /* LoopSeq 4 */
            for (signed char i_26 = 4; i_26 < 17; i_26 += 4) 
            {
                var_50 = ((/* implicit */int) (-(((arr_16 [i_26]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [0])))))));
                var_51 = ((/* implicit */unsigned long long int) ((unsigned int) arr_28 [i_24] [i_26 + 1]));
                var_52 = ((/* implicit */signed char) ((unsigned long long int) ((unsigned long long int) 0U)));
                var_53 += ((/* implicit */long long int) (+(((/* implicit */int) arr_91 [i_26 + 1] [i_26 + 2] [i_26 - 2]))));
            }
            for (unsigned int i_27 = 0; i_27 < 20; i_27 += 4) 
            {
                var_54 = (~(arr_22 [i_24] [i_27]));
                var_55 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_27] [i_27] [i_27] [i_27])) || (((/* implicit */_Bool) arr_5 [4ULL] [i_24])))))) - (((unsigned long long int) arr_21 [i_25] [i_24]))));
                var_56 = ((/* implicit */unsigned long long int) max((var_56), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) arr_2 [i_24]))))))));
                arr_95 [i_27] = ((/* implicit */signed char) ((_Bool) arr_28 [i_27] [i_27]));
            }
            for (int i_28 = 0; i_28 < 20; i_28 += 1) 
            {
                /* LoopSeq 4 */
                for (int i_29 = 0; i_29 < 20; i_29 += 3) /* same iter space */
                {
                    var_57 = ((/* implicit */unsigned int) ((int) ((unsigned short) arr_91 [i_24] [i_25] [i_28])));
                    var_58 = ((/* implicit */int) ((unsigned long long int) (-(arr_29 [i_24] [i_28]))));
                }
                for (int i_30 = 0; i_30 < 20; i_30 += 3) /* same iter space */
                {
                    var_59 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_90 [i_24])) - (((/* implicit */int) arr_89 [i_24] [i_28])))) - (((/* implicit */int) ((unsigned short) arr_83 [i_25])))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_31 = 0; i_31 < 20; i_31 += 4) 
                    {
                        var_60 |= ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_24] [i_25]))));
                        var_61 = ((/* implicit */_Bool) ((arr_94 [i_24]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) (signed char)117)) : (-65521)))) : ((+(arr_8 [i_24] [i_24] [i_28] [i_31])))));
                    }
                }
                for (int i_32 = 0; i_32 < 20; i_32 += 3) /* same iter space */
                {
                    var_62 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) arr_106 [i_24] [i_24] [i_28] [14ULL])))));
                    var_63 = ((/* implicit */short) min((var_63), (((/* implicit */short) (+((+(((/* implicit */int) arr_106 [i_24] [i_28] [i_25] [i_24])))))))));
                }
                for (int i_33 = 0; i_33 < 20; i_33 += 3) /* same iter space */
                {
                    var_64 = ((/* implicit */_Bool) max((var_64), (((/* implicit */_Bool) ((unsigned int) arr_93 [i_24] [i_28] [i_24])))));
                    arr_112 [i_28] [i_28] [i_28] [i_28] [i_28] |= ((long long int) arr_20 [i_28]);
                    arr_113 [i_33] [i_25] [i_25] [(unsigned char)15] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_97 [i_24] [i_28] [i_33]))) >= (((((/* implicit */unsigned int) arr_83 [i_28])) + (arr_102 [i_25] [5ULL] [1])))));
                }
                var_65 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_20 [i_25])))) < (arr_108 [i_24] [i_25] [i_25] [i_28])));
            }
            for (short i_34 = 1; i_34 < 19; i_34 += 3) 
            {
                var_66 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_98 [i_24] [i_34] [i_34 - 1] [i_25])) ? (arr_98 [i_24] [i_24] [i_34 + 1] [i_34]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_93 [i_34] [i_34 - 1] [i_34])))));
                var_67 = ((/* implicit */unsigned short) (+(arr_100 [i_34] [i_34 + 1] [i_34 - 1])));
                var_68 = ((/* implicit */short) ((unsigned short) arr_98 [i_24] [(_Bool)0] [i_34 + 1] [i_34 - 1]));
                arr_117 [i_24] [i_24] [i_34] = (~(((/* implicit */int) ((signed char) arr_100 [i_24] [i_24] [i_24]))));
                var_69 += ((/* implicit */long long int) (!(((((/* implicit */int) arr_18 [i_24])) < (((/* implicit */int) (signed char)117))))));
            }
        }
    }
}
