/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240151
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
    var_17 = var_14;
    var_18 = ((/* implicit */signed char) (-(((/* implicit */int) var_2))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_19 = ((/* implicit */short) min(((-(arr_2 [i_0 - 1]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_6)))) ? (((/* implicit */int) ((unsigned char) var_9))) : (((/* implicit */int) arr_1 [i_0 + 2]))))));
        var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_2 [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */int) (unsigned char)137)) : (((/* implicit */int) (unsigned char)131))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_1))) / (arr_0 [i_0 + 2] [i_0 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) min((((long long int) var_3)), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_0]))) + (var_10)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_15)), ((unsigned char)146)))) : (((/* implicit */int) (signed char)96))))))))));
            var_22 = ((1040187392ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-123))));
        }
        arr_5 [i_0] [i_0] |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((unsigned int) var_6))) >= (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_3))))) : (17286641876511272616ULL)))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        var_23 = ((/* implicit */short) ((signed char) arr_6 [i_2]));
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            arr_13 [i_3] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((signed char) ((signed char) arr_6 [i_3])));
            var_24 = ((short) var_5);
            var_25 = ((/* implicit */unsigned char) ((unsigned short) ((13786869718379962787ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16382))))));
            var_26 = ((/* implicit */short) (~(arr_8 [i_2])));
        }
        /* LoopSeq 2 */
        for (short i_4 = 3; i_4 < 15; i_4 += 2) 
        {
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)43571)) == (((/* implicit */int) ((((/* implicit */int) (unsigned short)11008)) != (((/* implicit */int) (unsigned char)120)))))));
            arr_17 [i_4 + 1] [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31955)) ? (((/* implicit */int) arr_12 [i_2])) : (1244296262))))));
        }
        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            arr_20 [i_5] = ((/* implicit */signed char) (-((-(((/* implicit */int) (short)-15602))))));
            /* LoopSeq 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_28 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)7))));
                var_29 = ((/* implicit */signed char) (-(((/* implicit */int) arr_14 [i_2] [i_6]))));
            }
            for (signed char i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                arr_25 [i_2] [i_2] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (12329648241319364246ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-80)))));
                /* LoopSeq 3 */
                for (short i_8 = 0; i_8 < 16; i_8 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_9 = 1; i_9 < 13; i_9 += 1) 
                    {
                        var_30 = ((/* implicit */long long int) ((((/* implicit */int) var_2)) == (((/* implicit */int) ((short) arr_28 [i_5])))));
                        var_31 |= ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_1))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)107)))))));
                        var_32 = (i_5 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */int) arr_31 [i_5] [i_9 + 3] [i_9] [i_9 + 3] [i_5])) >> (((((/* implicit */int) arr_31 [i_5] [i_9 - 1] [i_9 + 1] [i_9 + 1] [i_5])) - (12693)))))) : (((/* implicit */unsigned short) ((((((/* implicit */int) arr_31 [i_5] [i_9 + 3] [i_9] [i_9 + 3] [i_5])) + (2147483647))) >> (((((((/* implicit */int) arr_31 [i_5] [i_9 - 1] [i_9 + 1] [i_9 + 1] [i_5])) - (12693))) + (34427))))));
                        arr_32 [i_2] [i_2] [i_5] [(short)5] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_9 - 1] [(unsigned short)2] [(unsigned short)2] [i_2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2))))) % (((unsigned long long int) arr_15 [i_5] [i_5] [i_5])));
                    }
                    var_33 = ((/* implicit */signed char) var_9);
                }
                for (short i_10 = 0; i_10 < 16; i_10 += 4) /* same iter space */
                {
                    arr_35 [i_7] [i_7] [i_7] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_10] [i_7] [i_2] [i_2])) ? (arr_26 [i_2] [(signed char)1] [i_2] [i_2]) : (arr_26 [i_10] [i_7] [i_5] [i_2])));
                    /* LoopSeq 1 */
                    for (signed char i_11 = 0; i_11 < 16; i_11 += 1) 
                    {
                        arr_40 [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_23 [i_7] [i_7] [i_7]))));
                        arr_41 [i_5] [i_7] [i_10] [i_11] = ((short) arr_22 [i_7] [i_5] [i_2]);
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_5])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_10 [i_5]))));
                        arr_42 [7] [i_5] [i_7] [i_10] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250))) * (arr_30 [i_5]))))));
                    }
                    arr_43 [i_2] [1LL] [i_5] [(unsigned char)3] [i_2] = ((((/* implicit */_Bool) arr_37 [i_2] [i_2] [i_5] [i_2])) ? (((/* implicit */int) arr_37 [i_10] [i_5] [i_5] [i_2])) : (((/* implicit */int) arr_37 [i_2] [i_5] [i_5] [i_10])));
                    var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_2] [i_5] [i_7] [i_10] [i_7])) ? (((/* implicit */int) arr_34 [i_5] [i_5] [i_5] [i_7] [i_10])) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) == (((/* implicit */int) (unsigned short)56175)))))));
                }
                for (unsigned char i_12 = 0; i_12 < 16; i_12 += 3) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_13 = 0; i_13 < 16; i_13 += 1) 
                    {
                        arr_49 [i_13] [i_5] [1] [i_7] [i_5] [i_5] [(unsigned short)5] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) == (arr_39 [i_12] [i_5] [(signed char)5] [i_12] [i_12]))))));
                        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_13] [i_2] [(unsigned short)12] [i_2])) ? (((/* implicit */int) arr_9 [i_7] [1LL] [i_2])) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) arr_27 [i_13] [i_12] [i_7] [i_5])) : ((+(((/* implicit */int) (unsigned short)15791))))));
                        arr_50 [i_2] [(signed char)15] [i_7] [i_5] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_2])) || (((/* implicit */_Bool) arr_22 [i_5] [i_7] [i_12]))));
                        var_37 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)19328))) / ((-9223372036854775807LL - 1LL))));
                    }
                    for (signed char i_14 = 0; i_14 < 16; i_14 += 4) /* same iter space */
                    {
                        var_38 = ((/* implicit */int) ((short) ((((/* implicit */int) var_9)) < (((/* implicit */int) arr_33 [i_5])))));
                        var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_15)) <= (((/* implicit */int) arr_24 [i_5] [i_5]))))) + (((/* implicit */int) arr_31 [i_14] [i_5] [i_5] [i_12] [i_14])))))));
                        var_40 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_26 [i_2] [i_14] [i_7] [i_2])) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) arr_14 [i_7] [i_7])))));
                        var_41 = ((/* implicit */int) (signed char)100);
                    }
                    for (signed char i_15 = 0; i_15 < 16; i_15 += 4) /* same iter space */
                    {
                        arr_56 [(unsigned short)7] [i_5] [i_5] [(unsigned short)7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_44 [i_2] [i_5] [i_12] [i_15])) ? (((((/* implicit */_Bool) var_9)) ? (arr_8 [i_15]) : (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_5] [i_5] [i_7] [i_12]))))) : (arr_8 [i_2])));
                        arr_57 [i_15] [i_7] [i_5] [i_5] [2] [i_2] = ((/* implicit */short) (+(((/* implicit */int) arr_47 [i_2] [0LL] [0LL] [i_2] [i_2]))));
                    }
                    for (signed char i_16 = 0; i_16 < 16; i_16 += 4) /* same iter space */
                    {
                        var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) ((unsigned int) arr_53 [i_7])))));
                        var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) % (((/* implicit */int) arr_60 [(unsigned short)0] [i_12] [i_7] [i_2] [i_2])))))));
                        var_44 = ((/* implicit */short) ((((/* implicit */_Bool) (-(-4983484241946776980LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_2]))))) : (((/* implicit */int) ((2447739611U) > (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                        var_45 |= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)131))))) ? (8958695101675226156ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_14 [i_2] [i_2]))))));
                    }
                    var_46 = ((/* implicit */short) ((unsigned char) arr_52 [i_2] [i_2] [(unsigned short)13] [i_12] [i_5] [i_5] [i_7]));
                    var_47 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (arr_53 [i_2]) : (arr_53 [i_7])));
                }
            }
        }
        arr_62 [i_2] = ((/* implicit */_Bool) ((long long int) arr_30 [i_2]));
        arr_63 [i_2] [i_2] = ((/* implicit */short) arr_7 [i_2]);
    }
    var_48 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_1)) / ((~(((/* implicit */int) var_8)))))) & ((+(((/* implicit */int) ((((/* implicit */int) (unsigned char)3)) != (((/* implicit */int) (_Bool)0)))))))));
}
