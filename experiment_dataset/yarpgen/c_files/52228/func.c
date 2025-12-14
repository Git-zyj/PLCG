/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52228
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 1; i_1 < 16; i_1 += 2) /* same iter space */
        {
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */int) var_6);
            arr_6 [i_0] [i_0] = ((/* implicit */long long int) (short)23556);
            var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) (short)17674))));
        }
        for (short i_2 = 1; i_2 < 16; i_2 += 2) /* same iter space */
        {
            var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) var_0))));
            var_13 = ((/* implicit */unsigned long long int) 2147483637);
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_3 = 2; i_3 < 16; i_3 += 2) 
            {
                arr_14 [i_2] [i_2] = ((/* implicit */unsigned char) (+(var_6)));
                arr_15 [i_0] [i_2] [i_3] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
                arr_16 [i_3] [i_2] [i_0] = ((/* implicit */signed char) (-(var_2)));
            }
            for (int i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */short) (unsigned char)182);
                            var_15 -= ((/* implicit */unsigned long long int) (unsigned char)255);
                        }
                    } 
                } 
                arr_24 [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)27)) || (((/* implicit */_Bool) (unsigned char)3)))))) > (max((10139351952431609223ULL), (((/* implicit */unsigned long long int) -2088928816083301297LL))))));
            }
            arr_25 [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) - ((+((-(var_2)))))));
        }
        /* vectorizable */
        for (short i_7 = 1; i_7 < 16; i_7 += 2) /* same iter space */
        {
            var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (arr_13 [i_7 + 1] [i_0])));
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -3924449281462187333LL)) ? ((+(((/* implicit */int) (unsigned char)25)))) : (((/* implicit */int) (unsigned char)1))));
            arr_30 [i_0] [i_0] [i_7] = ((/* implicit */long long int) arr_12 [8LL]);
            arr_31 [i_0] [i_7] = ((/* implicit */unsigned short) arr_19 [i_0] [i_7] [i_0]);
        }
        arr_32 [i_0] [i_0] = ((/* implicit */unsigned char) ((((int) var_9)) << (((var_4) + (485452864)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_8 = 1; i_8 < 15; i_8 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 17; i_10 += 4) 
                {
                    for (int i_11 = 1; i_11 < 15; i_11 += 2) 
                    {
                        {
                            arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) -525136551);
                            var_18 = ((/* implicit */long long int) min((var_18), ((+(var_6)))));
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-4096)) : (-1810436018))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */short) var_7);
                arr_44 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8848539219473605320LL)) ? (((((/* implicit */_Bool) -882163312175236710LL)) ? (((/* implicit */unsigned long long int) arr_38 [i_0] [i_8] [i_8] [i_9])) : (var_2))) : ((+(15502361604981518587ULL)))));
                arr_45 [i_9] [i_8] [i_0] = ((/* implicit */int) (short)-1);
            }
            for (unsigned int i_12 = 3; i_12 < 14; i_12 += 3) 
            {
                var_21 = ((/* implicit */int) (~(var_0)));
                var_22 &= ((/* implicit */short) -4228618738376607756LL);
            }
            arr_48 [i_8] [i_8] = (-((-(((/* implicit */int) var_7)))));
        }
    }
    for (unsigned char i_13 = 0; i_13 < 22; i_13 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_14 = 0; i_14 < 22; i_14 += 2) 
        {
            var_23 = ((/* implicit */long long int) var_7);
            arr_54 [i_13] = ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (~(((/* implicit */int) var_7)))))))), (arr_53 [i_14] [i_13] [i_13])));
        }
        for (unsigned int i_15 = 0; i_15 < 22; i_15 += 2) /* same iter space */
        {
            arr_57 [i_15] [i_15] &= ((/* implicit */int) max((-4228618738376607756LL), (((/* implicit */long long int) max((((/* implicit */short) ((var_0) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_15])))))), (arr_50 [i_13] [i_15]))))));
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 22; i_16 += 4) 
            {
                for (unsigned char i_17 = 2; i_17 < 19; i_17 += 3) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) max(((+(var_4))), (((/* implicit */int) arr_60 [i_13] [i_15] [i_17] [i_17] [i_17 + 2] [i_16]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_18 = 3; i_18 < 19; i_18 += 2) 
                        {
                            var_25 = ((/* implicit */short) (signed char)52);
                            arr_65 [i_13] [i_15] |= ((/* implicit */unsigned short) arr_58 [i_13] [i_15] [i_13] [i_13]);
                            arr_66 [i_13] [i_17] [i_13] [i_17] [i_13] [i_13] [i_13] = ((/* implicit */signed char) 421765961U);
                        }
                        /* LoopSeq 4 */
                        for (long long int i_19 = 0; i_19 < 22; i_19 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (unsigned char)255))))), (min((arr_56 [i_13]), (((/* implicit */int) arr_58 [i_13] [i_15] [i_16] [i_13]))))))) : (var_6)));
                            var_27 = ((/* implicit */unsigned char) min((2011548146U), (((/* implicit */unsigned int) (unsigned char)1))));
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)198)) ? (((max((2283419154U), (((/* implicit */unsigned int) -736047220)))) | (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) var_8)))))));
                        }
                        for (long long int i_20 = 4; i_20 < 20; i_20 += 4) 
                        {
                            var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((/* implicit */_Bool) arr_69 [i_20] [i_16] [i_15])) ? ((+(((((/* implicit */_Bool) (short)17674)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)58))) : (0LL))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)142))))))));
                            arr_74 [i_17] [i_17] [i_16] [i_16] [i_16] = 2ULL;
                            var_30 = ((/* implicit */short) max((var_30), (arr_62 [i_13] [i_13] [i_13] [i_20] [i_13] [i_13])));
                            arr_75 [i_13] [i_15] [i_15] [i_15] [i_17] [i_20] = ((/* implicit */int) ((((/* implicit */_Bool) arr_61 [i_16] [i_17])) ? (((long long int) arr_49 [i_13])) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */int) (unsigned char)211)) : (2053047737))))))));
                        }
                        for (short i_21 = 0; i_21 < 22; i_21 += 4) 
                        {
                            var_31 = ((/* implicit */unsigned char) (((+(((unsigned long long int) 4801526452679802900LL)))) << (((((((/* implicit */int) ((unsigned char) var_9))) - (((/* implicit */int) (!(((/* implicit */_Bool) 10900439487575655164ULL))))))) - (113)))));
                            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) 2053047745))));
                            arr_79 [i_21] [i_17] [i_17] [i_15] [i_13] = ((/* implicit */long long int) (!(((/* implicit */_Bool) -6909217149036902604LL))));
                            var_33 = ((/* implicit */unsigned char) arr_70 [i_17] [i_17]);
                        }
                        /* vectorizable */
                        for (long long int i_22 = 0; i_22 < 22; i_22 += 3) 
                        {
                            arr_83 [i_17] [i_17] [i_15] [i_16] [i_17] [i_22] [i_22] = ((/* implicit */short) ((((/* implicit */int) arr_78 [i_17] [i_17] [i_17] [i_17 + 3] [i_17 + 3])) & (((/* implicit */int) arr_78 [i_17] [i_17] [i_17] [i_17 + 3] [i_17]))));
                            arr_84 [i_22] [i_13] [i_17] [i_15] [i_13] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_1)))) < (var_4)));
                        }
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_23 = 0; i_23 < 22; i_23 += 2) /* same iter space */
            {
                arr_88 [i_13] [i_15] [i_15] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */_Bool) arr_81 [i_23] [i_23] [i_23] [i_15] [i_15])) ? (((/* implicit */int) arr_58 [i_13] [i_15] [i_23] [i_23])) : (-2053047738))) : (((/* implicit */int) (short)533))))) || ((!(((/* implicit */_Bool) arr_61 [i_13] [i_15]))))));
                arr_89 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */short) (unsigned char)27);
            }
            for (unsigned char i_24 = 0; i_24 < 22; i_24 += 2) /* same iter space */
            {
                arr_92 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255))));
                var_34 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((((/* implicit */int) arr_59 [i_13] [i_15] [i_24])) / (var_8))) >> (((min((9118914831854720376ULL), (((/* implicit */unsigned long long int) var_4)))) - (9118914831854720356ULL)))))), (2186840142U)));
                arr_93 [i_13] = ((/* implicit */short) (+((-(421765961U)))));
            }
            var_35 = ((/* implicit */unsigned long long int) arr_76 [i_13] [i_15]);
        }
        for (unsigned int i_25 = 0; i_25 < 22; i_25 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_26 = 2; i_26 < 19; i_26 += 3) 
            {
                for (long long int i_27 = 0; i_27 < 22; i_27 += 2) 
                {
                    {
                        var_36 = ((/* implicit */short) (+((~(var_4)))));
                        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_50 [i_27] [i_26])))))));
                    }
                } 
            } 
            var_38 *= ((/* implicit */short) min((min((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), (max((((/* implicit */int) (short)17654)), (1821751581))))), (var_8)));
        }
        arr_103 [i_13] [i_13] = (short)32628;
        arr_104 [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */int) arr_95 [i_13] [i_13] [i_13])))) : (((/* implicit */int) arr_51 [i_13]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_6)))) : (((((/* implicit */unsigned long long int) ((int) (unsigned char)254))) - (var_3)))));
        var_39 ^= ((/* implicit */long long int) min((((int) (unsigned short)7)), (((((((/* implicit */int) (signed char)-8)) < (((/* implicit */int) (short)-32757)))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)4)), ((short)4089)))) : (var_4)))));
    }
    for (int i_28 = 0; i_28 < 13; i_28 += 2) 
    {
        var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_78 [i_28] [i_28] [i_28] [i_28] [i_28]))) : (var_2)))) || (((((/* implicit */unsigned int) ((/* implicit */int) (short)17674))) <= (963535268U))))), (((((/* implicit */unsigned long long int) arr_56 [i_28])) > (var_5))))))));
        arr_108 [i_28] = ((/* implicit */unsigned long long int) arr_86 [i_28]);
        arr_109 [i_28] = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_28] [i_28] [i_28]))))), ((~(((/* implicit */int) arr_4 [i_28] [i_28] [i_28]))))));
        var_41 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_69 [i_28] [i_28] [i_28])) ? (arr_38 [i_28] [i_28] [i_28] [i_28]) : (((/* implicit */int) arr_69 [i_28] [i_28] [i_28])))))));
        var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)255)) ? (arr_90 [i_28] [i_28] [i_28]) : (max((((/* implicit */int) (short)-32643)), (var_4)))));
    }
    var_43 = (unsigned char)252;
    var_44 = max((max((((/* implicit */long long int) 3984455489U)), (9223372036854775807LL))), (((/* implicit */long long int) var_1)));
    var_45 |= var_6;
    var_46 = ((/* implicit */signed char) max((18446744073709551592ULL), (((/* implicit */unsigned long long int) 2147483647))));
}
