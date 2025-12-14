/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195463
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */short) var_6);
                arr_5 [(signed char)6] [i_0] [(unsigned char)4] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) && (((/* implicit */_Bool) (-(((/* implicit */int) var_7))))))), (min(((!(((/* implicit */_Bool) var_9)))), ((!(((/* implicit */_Bool) arr_3 [i_0]))))))));
                var_11 *= ((/* implicit */unsigned long long int) ((2865976441651848495LL) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2922591349476039620LL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(_Bool)1]))))))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) ((_Bool) (+((+(var_3))))));
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20670)) ? (((/* implicit */int) (signed char)77)) : (((/* implicit */int) min((var_6), ((unsigned char)3))))))) ? (((((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) || (((/* implicit */_Bool) (short)(-32767 - 1)))))) | (((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) (unsigned char)17))))))))));
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) arr_3 [(unsigned char)14]);
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    {
                        arr_15 [i_2] [i_4] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) * (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_6 [i_3 - 1] [(unsigned char)8])) : (((/* implicit */int) arr_3 [i_4]))))));
                        var_15 = ((/* implicit */unsigned int) arr_11 [i_2] [i_2] [i_4] [8U]);
                        arr_16 [i_4] [(_Bool)1] [i_4] [i_5] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) arr_6 [i_2] [i_5])), (1464184300U))) ^ (min((((/* implicit */unsigned int) var_7)), (4228773624U)))));
                        arr_17 [i_5] [i_4] [(unsigned char)4] [i_3] [i_4] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned char) var_4))) && ((!(((/* implicit */_Bool) arr_13 [i_2] [i_3 + 4] [i_5])))))) && (((/* implicit */_Bool) ((unsigned int) (!((_Bool)1)))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_7 = 0; i_7 < 15; i_7 += 3) /* same iter space */
            {
                var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(_Bool)1]))) <= (10680695711916095504ULL)))) >> (((((/* implicit */int) arr_19 [i_2] [i_6])) - (19)))));
                arr_22 [i_2] [i_6] [i_7] = (((~(((/* implicit */int) var_4)))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_6]))))));
                var_17 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)0))));
                var_18 ^= ((/* implicit */short) (-(((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_2]))));
                arr_23 [7LL] = ((/* implicit */signed char) var_2);
            }
            for (short i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        {
                            var_19 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [(unsigned short)10]))) - (348678994718300442LL)));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_3 [(unsigned short)12]))));
                            var_21 = ((/* implicit */unsigned long long int) var_4);
                        }
                    } 
                } 
                arr_31 [i_2] [6ULL] = ((/* implicit */unsigned int) var_7);
            }
            /* LoopSeq 3 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                arr_35 [i_11] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_24 [i_2] [(_Bool)1] [i_11])) - (((/* implicit */int) arr_6 [i_2] [i_11]))));
                arr_36 [i_11] [i_11] [i_11] [i_2] = (((_Bool)1) && (((/* implicit */_Bool) var_4)));
                /* LoopSeq 1 */
                for (unsigned char i_12 = 0; i_12 < 15; i_12 += 1) 
                {
                    var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 9223372036854775807LL)) == (arr_27 [i_2] [i_6] [i_11] [i_12])));
                    var_23 = arr_13 [i_2] [i_6] [i_11];
                }
            }
            for (long long int i_13 = 0; i_13 < 15; i_13 += 1) 
            {
                arr_43 [i_13] = ((/* implicit */unsigned long long int) arr_40 [i_2] [i_6] [i_13]);
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_32 [i_13])))))));
                arr_44 [i_2] [i_13] [i_13] [i_13] = ((/* implicit */short) ((arr_30 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_13]))) : ((~(2815215098394624999LL)))));
            }
            for (unsigned long long int i_14 = 1; i_14 < 11; i_14 += 1) 
            {
                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (-(5575518365778889235LL))))));
                var_26 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11530))) / (arr_46 [i_14] [i_14 + 2] [i_14] [i_6])));
            }
            var_27 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_18 [(unsigned char)12] [i_6] [i_6]))));
            arr_48 [i_6] [(_Bool)1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_6] [i_2] [i_2] [i_2]))) == (18446744073709551615ULL)));
        }
        /* vectorizable */
        for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 3) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 1) 
            {
                arr_56 [i_16] [(short)6] [i_16] = ((/* implicit */short) ((long long int) (+(((/* implicit */int) arr_34 [i_2] [i_16] [i_2] [i_2])))));
                arr_57 [i_2] [i_15] [i_16] = ((/* implicit */unsigned char) arr_38 [(signed char)10] [i_16] [i_16] [i_2]);
                var_28 = ((/* implicit */unsigned long long int) arr_37 [10ULL] [i_15] [i_2] [i_2]);
                /* LoopSeq 3 */
                for (unsigned char i_17 = 0; i_17 < 15; i_17 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_18 = 4; i_18 < 13; i_18 += 1) 
                    {
                        var_29 = ((/* implicit */short) ((unsigned char) arr_0 [(unsigned char)3] [i_18 - 3]));
                        var_30 ^= ((/* implicit */unsigned char) (_Bool)1);
                    }
                    var_31 = ((/* implicit */short) arr_14 [i_2] [i_16] [i_17]);
                }
                for (unsigned char i_19 = 0; i_19 < 15; i_19 += 1) /* same iter space */
                {
                    var_32 ^= ((/* implicit */short) ((((9223372036854775807LL) >= (var_3))) ? (((((/* implicit */unsigned long long int) 3497329388U)) & (arr_58 [i_15] [5ULL]))) : (((unsigned long long int) arr_19 [i_2] [i_15]))));
                    var_33 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_15] [i_16]))));
                    var_34 = ((/* implicit */_Bool) ((arr_27 [i_2] [i_15] [i_16] [i_19]) & (((/* implicit */unsigned long long int) ((var_3) >> (((((/* implicit */int) (short)(-32767 - 1))) + (32800))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_20 = 2; i_20 < 14; i_20 += 1) 
                    {
                        var_35 &= ((/* implicit */unsigned int) (+(9223372036854775789LL)));
                        var_36 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 2516211896147091068LL)) * (((arr_62 [12ULL] [0ULL] [12ULL] [12ULL]) % (6301222105421580846ULL)))));
                        var_37 = ((/* implicit */short) (!(((/* implicit */_Bool) var_2))));
                        var_38 = ((/* implicit */unsigned char) arr_26 [i_2] [i_2] [i_15] [(short)9] [(_Bool)1] [i_20]);
                    }
                }
                for (unsigned char i_21 = 0; i_21 < 15; i_21 += 1) 
                {
                    arr_71 [i_21] [i_16] [i_16] [i_16] [i_2] [i_2] = ((/* implicit */unsigned char) ((long long int) arr_64 [i_2] [i_2] [i_16] [(unsigned char)6]));
                    arr_72 [i_2] [i_2] [i_15] [i_15] [i_16] = ((/* implicit */long long int) ((short) ((short) 9282542296930143123ULL)));
                    arr_73 [i_16] = ((/* implicit */unsigned short) var_8);
                    var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_2])) ? (arr_52 [i_2] [i_15] [i_16]) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)61440)) | (((/* implicit */int) (signed char)43)))))));
                    var_40 = ((/* implicit */signed char) ((unsigned char) arr_20 [i_21] [i_15] [i_2]));
                }
            }
            for (unsigned short i_22 = 4; i_22 < 14; i_22 += 1) 
            {
                var_41 = ((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_15] [i_22 - 4] [i_22 - 1] [i_22 - 4] [i_22 - 1] [i_22])) / (((/* implicit */int) (short)(-32767 - 1)))));
                var_42 = ((/* implicit */unsigned long long int) arr_75 [i_22] [i_2] [i_2]);
                var_43 += ((/* implicit */short) ((unsigned int) arr_40 [i_22 + 1] [i_22 + 1] [i_22 - 2]));
            }
            for (short i_23 = 4; i_23 < 13; i_23 += 3) /* same iter space */
            {
                var_44 ^= ((/* implicit */short) (!(((/* implicit */_Bool) var_7))));
                arr_81 [i_23] [i_2] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) arr_25 [0LL] [i_15] [i_23])))));
                /* LoopSeq 1 */
                for (short i_24 = 3; i_24 < 14; i_24 += 3) 
                {
                    var_45 = ((/* implicit */short) ((((unsigned int) (_Bool)1)) / (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                    arr_86 [i_2] [i_15] [i_23] [i_24] [4U] = ((/* implicit */unsigned long long int) arr_76 [(unsigned short)13] [i_23] [i_15]);
                    var_46 = ((/* implicit */signed char) (+(((/* implicit */int) var_0))));
                }
            }
            for (short i_25 = 4; i_25 < 13; i_25 += 3) /* same iter space */
            {
                var_47 = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) arr_82 [i_25 - 3] [i_25 - 4] [i_25])) : (((/* implicit */int) var_6))));
                var_48 ^= ((/* implicit */short) ((unsigned int) (+(arr_29 [i_25] [i_25 - 3] [i_25 + 1] [i_15] [i_2] [8LL] [i_2]))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_26 = 3; i_26 < 13; i_26 += 1) 
            {
                for (unsigned char i_27 = 1; i_27 < 13; i_27 += 1) 
                {
                    {
                        var_49 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                        var_50 = ((/* implicit */_Bool) max((var_50), (((/* implicit */_Bool) arr_92 [i_2] [i_15] [i_27 + 2]))));
                        var_51 = ((/* implicit */unsigned int) min((var_51), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_7))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))))));
                        var_52 -= ((/* implicit */unsigned int) arr_33 [i_26 - 3] [i_27 + 2] [i_27]);
                        var_53 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_53 [(signed char)9] [i_26]))));
                    }
                } 
            } 
            arr_95 [i_15] [3ULL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_90 [i_15] [i_15] [i_2] [i_2]))));
        }
        /* vectorizable */
        for (unsigned long long int i_28 = 0; i_28 < 15; i_28 += 3) /* same iter space */
        {
            var_54 = ((/* implicit */long long int) (_Bool)1);
            var_55 = ((/* implicit */short) arr_25 [i_28] [3ULL] [i_2]);
        }
        arr_99 [i_2] = arr_49 [i_2] [i_2] [i_2];
        var_56 = ((/* implicit */unsigned char) (((-(((/* implicit */int) ((unsigned char) arr_28 [i_2] [i_2]))))) <= (((((((/* implicit */_Bool) arr_21 [i_2] [13ULL] [13ULL] [(short)2])) ? (((/* implicit */int) arr_84 [i_2])) : (((/* implicit */int) var_8)))) / ((-(((/* implicit */int) arr_18 [i_2] [i_2] [i_2]))))))));
    }
    for (_Bool i_29 = 0; i_29 < 0; i_29 += 1) 
    {
        var_57 = ((/* implicit */unsigned char) arr_102 [(short)5] [i_29]);
        var_58 = ((/* implicit */unsigned long long int) var_5);
        /* LoopSeq 2 */
        for (unsigned long long int i_30 = 2; i_30 < 15; i_30 += 1) 
        {
            var_59 ^= ((/* implicit */_Bool) (+(min((((/* implicit */long long int) ((unsigned char) arr_3 [(short)14]))), (((var_3) >> (((/* implicit */int) (_Bool)0))))))));
            var_60 = ((/* implicit */_Bool) arr_3 [i_29]);
        }
        /* vectorizable */
        for (unsigned char i_31 = 0; i_31 < 16; i_31 += 1) 
        {
            var_61 ^= ((/* implicit */unsigned long long int) ((arr_100 [i_29]) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) < (arr_0 [i_29 + 1] [i_31])))))));
            var_62 = ((/* implicit */signed char) var_8);
        }
        var_63 = ((/* implicit */signed char) min((max((4874987505106824675ULL), (((/* implicit */unsigned long long int) arr_107 [i_29])))), (((/* implicit */unsigned long long int) (short)-1))));
    }
    var_64 ^= ((/* implicit */signed char) var_5);
}
