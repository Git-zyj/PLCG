/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35384
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) ((7283214693011226263LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6105)))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */signed char) arr_7 [i_0] [i_0]);
                        var_15 = ((/* implicit */unsigned short) max((arr_1 [i_2 + 1] [i_2 + 1]), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) > (arr_4 [i_2 + 1] [i_2 - 1]))))));
                        var_16 = ((/* implicit */short) (~(((min((arr_11 [i_0] [i_2] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0])))) << (((/* implicit */int) max((arr_2 [i_3] [i_1]), (arr_2 [i_0] [i_3]))))))));
                        arr_12 [4U] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((arr_0 [i_0] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) >= (((/* implicit */int) (signed char)-120))))))))) + (min((arr_6 [i_1] [i_1] [i_1]), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0]))) ^ (2390962096U))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            var_17 = ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0]))) >= (((((/* implicit */long long int) ((0) / (((/* implicit */int) (unsigned char)255))))) * (((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) + (arr_1 [i_0] [i_0]))))));
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) max((((5) >= (arr_3 [i_0] [i_4]))), (((((/* implicit */_Bool) 837959751U)) && (((/* implicit */_Bool) (unsigned char)162))))))) ^ ((((+(((/* implicit */int) (signed char)90)))) + (((/* implicit */int) arr_5 [i_4] [i_4] [i_0]))))));
            arr_15 [i_4] [i_4] = ((/* implicit */unsigned int) max((((((/* implicit */long long int) arr_0 [i_4] [i_4])) > (((((/* implicit */long long int) -2050176878)) ^ (arr_10 [i_4]))))), (((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (unsigned char)18))))));
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                for (unsigned short i_6 = 2; i_6 < 12; i_6 += 4) 
                {
                    for (long long int i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-114)) || (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_4] [i_5] [i_4]))) / (arr_11 [i_5] [i_4] [i_5] [i_6]))) / (arr_16 [i_0] [i_6 + 2] [i_5] [i_5 + 1]))))));
                            var_20 = min((((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_5 + 1] [i_4] [i_7]))))), (((7) ^ (-7))));
                            var_21 = ((((arr_6 [i_0] [i_4] [i_0]) + (9223372036854775807LL))) << (((((((((/* implicit */_Bool) (unsigned short)2114)) ? (((/* implicit */int) (short)-14156)) : (14))) + (14169))) - (13))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_8 = 0; i_8 < 14; i_8 += 1) 
        {
            var_22 -= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) > (3457007547U)))) != (min((-7), (((/* implicit */int) (unsigned char)255))))));
            arr_27 [i_8] [i_8] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_20 [i_8] [i_8] [i_0] [i_8])) & (0))) & (((((/* implicit */int) arr_2 [i_8] [i_8])) >> (((/* implicit */int) (unsigned char)12))))))) ? (((/* implicit */unsigned long long int) ((((6) ^ (((/* implicit */int) arr_5 [i_0] [i_8] [i_0])))) & (((/* implicit */int) arr_13 [i_0]))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)198))) | (arr_11 [i_8] [i_8] [i_8] [i_8]))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) (short)-32758)))))))));
            var_23 = ((/* implicit */short) ((min((((/* implicit */int) ((((/* implicit */int) (unsigned short)30143)) < (arr_3 [i_0] [i_0])))), (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (_Bool)1)))))) + (((/* implicit */int) ((arr_0 [i_0] [i_0]) < (arr_25 [i_8]))))));
            arr_28 [i_8] [i_8] [i_8] = (i_8 % 2 == 0) ? (((/* implicit */unsigned int) ((((arr_22 [i_0] [i_0] [i_8] [i_0] [i_8]) << (((((/* implicit */int) arr_14 [i_0] [i_8])) - (20))))) > (((/* implicit */long long int) arr_0 [i_8] [i_0]))))) : (((/* implicit */unsigned int) ((((arr_22 [i_0] [i_0] [i_8] [i_0] [i_8]) << (((((((/* implicit */int) arr_14 [i_0] [i_8])) - (20))) - (38))))) > (((/* implicit */long long int) arr_0 [i_8] [i_0])))));
        }
        for (unsigned char i_9 = 1; i_9 < 13; i_9 += 1) 
        {
            arr_32 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) != (max((9223372036854775807LL), (((/* implicit */long long int) arr_0 [i_0] [i_0])))))))));
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) max(((-(((/* implicit */int) (unsigned short)7)))), (((/* implicit */int) arr_5 [i_0] [i_9] [i_0])))))));
        }
        arr_33 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) ((11632136522643945441ULL) >= (((/* implicit */unsigned long long int) 9)))))) * (12ULL)))));
    }
    for (unsigned short i_10 = 0; i_10 < 11; i_10 += 2) 
    {
        var_25 ^= ((/* implicit */unsigned short) max((min((((/* implicit */long long int) arr_24 [i_10] [i_10])), (arr_10 [i_10]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_10] [i_10])) ? (((((/* implicit */int) (signed char)96)) | (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (short)-15396)) ^ (((/* implicit */int) (unsigned char)0)))))))));
        arr_36 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 3680244288630874838LL)) ^ (((6814607551065606174ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    var_26 = ((/* implicit */int) max((((/* implicit */unsigned int) (signed char)-48)), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 11926343135928458037ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-124))))), (var_7)))));
    /* LoopSeq 4 */
    for (short i_11 = 4; i_11 < 16; i_11 += 4) 
    {
        arr_41 [i_11] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)4)) > (((/* implicit */int) (signed char)31)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)23443))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_11] [i_11]))) * (2775764237U)))));
        arr_42 [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)60)) && (((/* implicit */_Bool) 4924881366700026575LL)))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)136)) >> (((9223372036854775807LL) - (9223372036854775784LL))))))))) < (((/* implicit */int) (_Bool)1))));
        var_27 = ((/* implicit */unsigned long long int) (unsigned char)243);
    }
    for (signed char i_12 = 0; i_12 < 24; i_12 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_13 = 0; i_13 < 24; i_13 += 3) 
        {
            var_28 = ((/* implicit */short) max((((/* implicit */long long int) (~(((217155190U) << (((((/* implicit */int) (signed char)-126)) + (128)))))))), (2024345837984564125LL)));
            var_29 = ((/* implicit */int) ((((((/* implicit */int) arr_43 [i_12])) > (((/* implicit */int) max((((/* implicit */unsigned char) arr_45 [i_12] [i_12])), (arr_48 [i_12] [i_13] [i_13])))))) || (((/* implicit */_Bool) max((((/* implicit */int) (signed char)97)), (((arr_45 [i_12] [i_12]) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned short)3617)))))))));
        }
        arr_49 [i_12] = ((/* implicit */unsigned int) ((min((min((((/* implicit */unsigned long long int) 3264790724U)), (34358689792ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3570544319U)) ? (1313669486) : (((/* implicit */int) (short)23765))))))) >= (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)30)) <= (((/* implicit */int) arr_48 [i_12] [i_12] [i_12])))) ? (((((/* implicit */unsigned int) 2147483647)) - (2295344207U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) 731125093U)))))))))));
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_12] [i_12])) ? (arr_44 [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_12])))))) ? (min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) arr_45 [i_12] [i_12]))))), (arr_46 [i_12] [i_12]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_46 [i_12] [i_12]) / (((/* implicit */long long int) 2116209497U)))))))))));
        arr_50 [i_12] [i_12] = ((/* implicit */_Bool) ((((431939943U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_12] [i_12]))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((arr_43 [i_12]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4))) : (3570544340U))) == (((arr_44 [i_12]) ^ (3570544344U)))))))));
    }
    for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 4) /* same iter space */
    {
        arr_53 [i_14] = ((/* implicit */signed char) (unsigned short)65535);
        arr_54 [i_14] = min((((/* implicit */int) arr_52 [i_14] [i_14])), (max((-1110243222), (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) arr_52 [i_14] [i_14])))))));
        arr_55 [i_14] = ((/* implicit */unsigned int) ((min((max((((/* implicit */unsigned long long int) (signed char)127)), (arr_37 [i_14]))), (((/* implicit */unsigned long long int) (_Bool)1)))) != (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_14]))) & (3570544344U)))) / (2335785702914694956LL))))));
    }
    for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 4) /* same iter space */
    {
        arr_58 [i_15] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-10285))) ^ (arr_44 [i_15]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-91)))));
        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max(((short)(-32767 - 1)), (((/* implicit */short) arr_39 [i_15]))))), (arr_51 [i_15])))) || (((/* implicit */_Bool) ((((/* implicit */int) (short)-32750)) ^ (((/* implicit */int) (short)32767)))))));
        arr_59 [i_15] [i_15] &= ((/* implicit */unsigned char) max((3570544340U), (((((724422957U) | (3570544327U))) ^ (arr_38 [i_15])))));
    }
    var_32 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned short) var_0))));
    var_33 |= ((/* implicit */unsigned short) (((+(var_10))) - (((((/* implicit */unsigned int) var_2)) - (max((1425250864U), (((/* implicit */unsigned int) var_3))))))));
}
