/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238654
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
    var_17 = ((/* implicit */_Bool) var_15);
    var_18 -= ((/* implicit */unsigned char) var_9);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            arr_6 [i_0] [(signed char)13] = ((/* implicit */unsigned short) arr_2 [i_0]);
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (short)(-32767 - 1));
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((max((((/* implicit */int) (signed char)-36)), (-257598536))) + (2147483647))) >> (((max((((/* implicit */int) (unsigned char)88)), (-257598543))) - (85)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned char)168))))))) : (((unsigned long long int) arr_5 [i_0] [i_0]))));
            var_20 += ((/* implicit */unsigned int) 9223372036854775807LL);
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                arr_12 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_9 [i_2] [i_2] [i_1] [(unsigned short)12]);
                arr_13 [i_0] [i_0] [i_2] [(signed char)5] = ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) var_14)), (((unsigned long long int) (short)-10225))))));
                var_21 ^= ((/* implicit */unsigned char) arr_11 [i_0] [i_2] [2] [i_0]);
            }
        }
        for (int i_3 = 2; i_3 < 15; i_3 += 2) /* same iter space */
        {
            arr_16 [i_0] = ((/* implicit */int) var_16);
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((long long int) ((((-653570092) + (2147483647))) >> (((((/* implicit */int) (signed char)-36)) + (53)))))))));
            /* LoopSeq 1 */
            for (long long int i_4 = 1; i_4 < 14; i_4 += 3) 
            {
                var_23 -= ((/* implicit */short) ((1333995587314296868LL) - (-4420600204601300979LL)));
                arr_20 [i_0] [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) (signed char)(-127 - 1));
                arr_21 [6ULL] [(short)15] [i_4] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((var_11) >> (((max((((/* implicit */unsigned long long int) (unsigned char)163)), (14747035956385596875ULL))) - (14747035956385596874ULL)))))), (var_8)));
            }
            arr_22 [i_0] = ((/* implicit */unsigned char) (((((((+(arr_11 [10ULL] [i_0] [i_0] [i_0]))) | (((/* implicit */long long int) ((int) (short)-32455))))) + (9223372036854775807LL))) << (((((min((((/* implicit */long long int) (unsigned char)168)), (-1333995587314296844LL))) + (1333995587314296869LL))) - (25LL)))));
        }
        for (int i_5 = 2; i_5 < 15; i_5 += 2) /* same iter space */
        {
            var_24 += ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) (_Bool)0)))));
            /* LoopSeq 1 */
            for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                arr_27 [i_0] [i_0] [i_0] [i_0] = max((((((/* implicit */int) (short)-32439)) % (((/* implicit */int) arr_14 [i_5 - 2] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)26926))))));
                arr_28 [i_0] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)156)) + (((/* implicit */int) (unsigned char)162))))) == (max((var_5), (var_1))))) ? (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) (unsigned char)87)) ^ (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min(((unsigned char)108), (((/* implicit */unsigned char) var_6))))))) : (max(((-(((/* implicit */int) (unsigned short)26670)))), (((/* implicit */int) ((((/* implicit */int) (short)554)) != (((/* implicit */int) (_Bool)1)))))))));
            }
            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) arr_10 [i_5]))));
        }
        arr_29 [i_0] = ((/* implicit */long long int) (-(((((/* implicit */int) ((short) var_3))) & (((/* implicit */int) arr_10 [i_0]))))));
        arr_30 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_16)) << (((max((((/* implicit */unsigned long long int) (unsigned char)70)), (var_5))) - (7060777004942685951ULL)))));
        /* LoopSeq 1 */
        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 16; i_8 += 2) 
            {
                for (signed char i_9 = 0; i_9 < 16; i_9 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_10 = 4; i_10 < 12; i_10 += 3) 
                        {
                            arr_44 [i_0] [i_0] [i_8] [i_9] [i_9] [i_10] = arr_43 [i_10 + 1] [i_10] [i_10] [14U] [i_10] [i_10 + 1] [i_10];
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) ((short) var_14))) + (2147483647))) >> (((((/* implicit */int) min(((signed char)79), (var_6)))) - (72)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_2 [i_9])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (((arr_9 [i_0] [i_7] [i_0] [i_8]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_7] [i_8] [6LL])))))))) : (arr_33 [i_0] [i_8] [i_10 - 1]))))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_11 = 0; i_11 < 16; i_11 += 3) 
                        {
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) min((arr_37 [i_7] [i_8] [i_9] [i_11]), (((/* implicit */long long int) (short)-32455))))) && ((!(arr_43 [i_11] [i_9] [i_9] [i_7] [i_8] [i_7] [i_0]))))))));
                            var_28 = ((/* implicit */int) -6956318121258415951LL);
                            arr_47 [i_0] [i_7] [i_8] [i_9] [i_11] [i_7] [i_8] &= ((/* implicit */_Bool) max((max((((/* implicit */long long int) (_Bool)1)), (((682237417385909933LL) << (((2052318920U) - (2052318919U))))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_9])))))));
                        }
                    }
                } 
            } 
            var_29 = ((/* implicit */short) max((var_29), (arr_38 [i_7] [i_0] [i_0] [i_0] [i_0])));
            arr_48 [i_0] [i_0] = ((/* implicit */int) ((long long int) arr_46 [(short)9] [i_0] [(unsigned short)2] [i_0] [i_0]));
        }
        /* LoopSeq 1 */
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            var_30 *= ((/* implicit */short) ((((/* implicit */_Bool) -9223372036854775807LL)) ? ((+(((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) arr_4 [i_12 - 1]))))));
            var_31 = ((/* implicit */unsigned int) max((var_31), (var_11)));
            /* LoopSeq 3 */
            for (short i_13 = 0; i_13 < 16; i_13 += 4) 
            {
                var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_13] [i_0] [i_0])) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) (signed char)0))))) ? (((((/* implicit */int) arr_52 [i_0] [i_12] [i_13])) - (((/* implicit */int) arr_23 [i_0])))) : (((((/* implicit */int) var_12)) + (((/* implicit */int) (_Bool)1))))))) ? ((((-(9223372036854775801LL))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)147))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_51 [i_12 - 1] [i_13] [i_12 - 1])) - (((/* implicit */int) (unsigned short)34371))))))))));
                arr_54 [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_53 [15ULL] [i_0] [i_0] [i_0]))))) ? ((+(-9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32450))))))))), (((((/* implicit */_Bool) max((var_15), ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_12] [i_12 - 1] [i_12 - 1]))) : (arr_31 [i_0] [i_12 - 1])))));
            }
            for (short i_14 = 0; i_14 < 16; i_14 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_15 = 0; i_15 < 16; i_15 += 3) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_16 = 0; i_16 < 16; i_16 += 3) 
                    {
                        arr_62 [i_0] [i_12] [i_12] [i_12] [i_14] [i_14] [i_16] &= ((/* implicit */_Bool) ((3303311997955395262ULL) - ((+(arr_2 [i_0])))));
                        var_33 ^= ((/* implicit */unsigned char) var_9);
                    }
                    for (int i_17 = 2; i_17 < 15; i_17 += 3) 
                    {
                        arr_66 [(short)11] [i_12] [i_0] [(short)11] [i_15] [i_0] [i_17] = ((/* implicit */int) 9223372036854775777LL);
                        arr_67 [i_0] [i_12 - 1] [i_14] [i_0] [i_17] = ((/* implicit */short) ((_Bool) arr_59 [i_0] [i_0] [i_12] [i_12 - 1]));
                    }
                    var_34 += ((529817999128011500LL) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-125))))));
                    var_35 = ((((/* implicit */int) (signed char)-16)) != (((/* implicit */int) (signed char)-125)));
                    /* LoopSeq 1 */
                    for (unsigned char i_18 = 0; i_18 < 16; i_18 += 1) 
                    {
                        arr_70 [i_0] [i_0] = arr_1 [i_0];
                        arr_71 [i_18] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) var_6))));
                    }
                }
                var_36 -= ((/* implicit */signed char) var_4);
                var_37 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(1402251196U))), (((/* implicit */unsigned int) ((signed char) var_16)))))) ? (((/* implicit */int) min((max(((unsigned char)228), (((/* implicit */unsigned char) (signed char)-1)))), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)-1))) > (var_9))))))) : (((/* implicit */int) (unsigned char)61))));
                arr_72 [i_0] [i_12 - 1] = ((/* implicit */short) (signed char)-73);
            }
            for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
            {
                arr_76 [(unsigned short)4] [i_12] [i_12] [(unsigned short)4] |= ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) var_15))) < (((((((/* implicit */int) arr_61 [i_19 - 1] [i_19 - 1])) + (2147483647))) << (((/* implicit */int) arr_52 [i_0] [i_12] [i_19 - 1]))))));
                var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_56 [i_12 - 1] [i_12 - 1]), (min((arr_26 [i_0] [i_12] [i_19] [i_12]), (arr_56 [(unsigned short)11] [(unsigned short)11])))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_25 [i_0] [i_0] [i_19]))));
            }
            arr_77 [i_0] [i_0] [i_12 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_15), (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_9) : (((/* implicit */long long int) arr_73 [i_0]))))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((_Bool) (unsigned char)216)))));
        }
    }
    var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)125)) || (((/* implicit */_Bool) -1333995587314296869LL)))))) && (((/* implicit */_Bool) var_12)))))));
}
