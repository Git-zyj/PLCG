/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225943
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
    var_18 = ((/* implicit */int) var_5);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 0ULL)) ? (var_8) : (var_8))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                for (signed char i_3 = 2; i_3 < 11; i_3 += 1) 
                {
                    {
                        arr_13 [i_0] [i_1] [10LL] [i_2] [i_3] = (~(var_0));
                        var_20 ^= ((((/* implicit */_Bool) (-(var_14)))) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) var_4)));
                        var_21 *= ((/* implicit */unsigned char) (-((+(((/* implicit */int) (unsigned char)39))))));
                        var_22 |= ((/* implicit */int) ((short) (unsigned char)47));
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned long long int) (+(arr_1 [i_1 - 1])));
            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((_Bool) (signed char)-65)))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            var_25 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_16)) + (2147483647))) << (((((/* implicit */int) (short)11499)) - (11499)))));
            arr_17 [i_0] = ((/* implicit */long long int) (+((+(18446744073709551605ULL)))));
            arr_18 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_6 [i_0] [i_4] [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) var_11)));
            arr_19 [7] [i_4] = ((/* implicit */unsigned char) (-(var_2)));
        }
        for (int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            arr_24 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (short)32429))));
            /* LoopSeq 1 */
            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                arr_29 [i_0] = ((/* implicit */unsigned long long int) arr_4 [11ULL] [i_5] [i_6]);
                arr_30 [9ULL] [i_5] [10ULL] [(short)10] = ((/* implicit */short) ((((/* implicit */int) var_17)) & (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [4] [(signed char)8] [9]))));
                arr_31 [8LL] [i_5] [i_6] [i_6] = (-(18446744073709551605ULL));
            }
        }
        arr_32 [i_0] [(signed char)7] = ((/* implicit */unsigned long long int) var_5);
        arr_33 [i_0] = ((/* implicit */signed char) (+((~(9223372036854775807LL)))));
    }
    /* LoopSeq 4 */
    for (short i_7 = 1; i_7 < 16; i_7 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            for (short i_9 = 0; i_9 < 18; i_9 += 4) 
            {
                {
                    var_26 -= ((/* implicit */long long int) ((((var_12) << (((((/* implicit */int) arr_38 [i_9] [i_9] [i_7] [i_7])) - (156))))) != (((/* implicit */unsigned long long int) max((((-8635632952463835340LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-11500))))), (((/* implicit */long long int) var_1)))))));
                    arr_40 [i_7] = ((/* implicit */_Bool) min((-3410109032653601642LL), (((/* implicit */long long int) var_13))));
                }
            } 
        } 
        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) 2147483647))));
        /* LoopSeq 1 */
        for (signed char i_10 = 3; i_10 < 17; i_10 += 4) 
        {
            arr_43 [i_7] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) ? (arr_39 [i_7 - 1] [i_7]) : (var_12))) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (var_8)))), ((signed char)43)))))));
            var_28 = ((/* implicit */unsigned long long int) ((unsigned short) min((((22ULL) & (var_14))), (((/* implicit */unsigned long long int) var_13)))));
            arr_44 [i_10] [i_10 - 2] [i_7] = ((/* implicit */unsigned int) 2147483636);
        }
        arr_45 [i_7] = ((/* implicit */unsigned char) (+((-(((int) -2147483632))))));
    }
    /* vectorizable */
    for (short i_11 = 1; i_11 < 16; i_11 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_12 = 0; i_12 < 18; i_12 += 1) 
        {
            arr_53 [i_11] [4] [i_12] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) -2147483637)) || (((/* implicit */_Bool) var_6)))))));
            /* LoopNest 2 */
            for (signed char i_13 = 0; i_13 < 18; i_13 += 3) 
            {
                for (short i_14 = 0; i_14 < 18; i_14 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_15 = 1; i_15 < 17; i_15 += 2) 
                        {
                            arr_62 [i_11] [i_12] [i_13] [(short)7] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32757)))))) || (((/* implicit */_Bool) arr_56 [i_15] [i_14] [i_13] [7] [i_11]))));
                            arr_63 [i_11] [i_12] [i_13] [i_14] [i_15 + 1] = ((/* implicit */unsigned long long int) ((unsigned int) arr_55 [i_11 + 1] [i_14] [i_15 - 1] [12ULL]));
                            var_29 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_37 [i_11] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11480))) : (var_6))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 1) 
                        {
                            arr_67 [i_16] [(_Bool)1] [i_13] [i_13] [i_13] [i_11] = ((/* implicit */int) var_14);
                            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (short)11480)) ? (var_12) : (((/* implicit */unsigned long long int) var_5))))))));
                            var_31 = ((/* implicit */short) (-(((/* implicit */int) var_16))));
                            var_32 = ((/* implicit */unsigned char) (((_Bool)1) ? (arr_48 [3LL]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                        }
                        var_33 = ((/* implicit */unsigned int) ((signed char) 8925340366066733486LL));
                    }
                } 
            } 
            arr_68 [i_11 + 1] [i_11] [(signed char)15] = ((/* implicit */unsigned int) ((arr_59 [i_12] [i_12] [i_11] [i_12] [i_11 - 1] [i_12]) < (arr_59 [i_11] [(_Bool)1] [i_11] [(_Bool)1] [i_11 - 1] [i_11])));
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            arr_72 [i_11] [i_11] [(_Bool)1] = ((/* implicit */unsigned long long int) (unsigned char)50);
            var_34 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)31))));
            arr_73 [i_11] [i_11] [(signed char)14] = ((unsigned long long int) var_0);
        }
        var_35 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_41 [i_11] [i_11] [i_11 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_16)))));
        var_36 &= ((/* implicit */signed char) (-(7125052342216824798LL)));
    }
    /* vectorizable */
    for (short i_18 = 1; i_18 < 16; i_18 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_19 = 0; i_19 < 18; i_19 += 4) 
        {
            for (int i_20 = 0; i_20 < 18; i_20 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_21 = 2; i_21 < 17; i_21 += 2) /* same iter space */
                    {
                        var_37 = (~(((((/* implicit */int) (short)-22738)) | (((/* implicit */int) var_10)))));
                        var_38 = ((/* implicit */signed char) ((((/* implicit */int) arr_58 [i_18 + 1] [i_18 + 1] [(_Bool)1] [i_21 + 1] [i_18 + 1] [(_Bool)1])) >= (((/* implicit */int) arr_50 [i_18 + 2] [i_21 - 2]))));
                        arr_83 [i_20] [i_18] [i_20] [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_18 + 2] [i_21 + 1] [i_21]))) - (var_11)));
                        arr_84 [i_18] [i_19] [i_18] [8] = ((((/* implicit */long long int) ((/* implicit */int) arr_75 [i_18 + 1]))) | (var_5));
                    }
                    for (signed char i_22 = 2; i_22 < 17; i_22 += 2) /* same iter space */
                    {
                        arr_88 [i_18] [i_18] [i_20] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))));
                        var_39 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)41073))));
                    }
                    for (signed char i_23 = 2; i_23 < 17; i_23 += 2) /* same iter space */
                    {
                        arr_92 [i_18] [i_18] [i_18] = ((/* implicit */int) (+(var_14)));
                        var_40 = ((/* implicit */short) (~(((/* implicit */int) var_3))));
                        var_41 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)39))));
                    }
                    var_42 = ((/* implicit */unsigned int) ((unsigned long long int) 18446744073709551615ULL));
                    var_43 = ((/* implicit */_Bool) ((short) ((var_6) > (((/* implicit */unsigned long long int) var_5)))));
                }
            } 
        } 
        arr_93 [i_18] = ((/* implicit */short) 13558759140055571596ULL);
    }
    /* vectorizable */
    for (short i_24 = 1; i_24 < 16; i_24 += 4) /* same iter space */
    {
        var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))) : (8038954000196458116ULL)));
        /* LoopNest 2 */
        for (int i_25 = 0; i_25 < 18; i_25 += 4) 
        {
            for (unsigned short i_26 = 0; i_26 < 18; i_26 += 4) 
            {
                {
                    arr_103 [i_24] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) var_0))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_5) : (-7125052342216824796LL))))));
                    var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 13675401937828077595ULL)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_74 [i_24 + 1])))));
                    arr_104 [i_24] [i_24] = ((/* implicit */unsigned int) var_13);
                }
            } 
        } 
        arr_105 [i_24] [1] = ((/* implicit */long long int) (+(var_1)));
        arr_106 [i_24] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)0)) ? (11878650597362121520ULL) : (((/* implicit */unsigned long long int) var_0))));
    }
}
