/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241159
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)116))))))) % (((arr_0 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        arr_11 [i_3] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)52760)) - (((/* implicit */int) (unsigned short)12790))))) < (((var_10) % (((/* implicit */unsigned long long int) var_4))))));
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] [i_3] &= ((/* implicit */short) ((((/* implicit */int) (unsigned short)12776)) - (((/* implicit */int) (short)32765))));
                            arr_15 [i_4] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */long long int) ((((arr_0 [(unsigned short)3]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_3]))))) || (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [i_1] [i_0] [i_3]))) >= (arr_0 [i_1])))));
                        }
                        arr_16 [i_1] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) ^ (arr_6 [i_0] [i_1] [(unsigned char)0] [8ULL]))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) << (((1346050971U) - (1346050951U))))))));
                    }
                    for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 4) 
                    {
                        arr_21 [i_0] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)52759)) >= (556202208)))) % (((-556202202) + (((/* implicit */int) (unsigned short)11437))))));
                        arr_22 [i_0] [i_5] [i_0] [i_5 + 1] [i_1] [i_5 + 1] = ((/* implicit */unsigned char) ((((var_6) >> (((((/* implicit */int) (unsigned char)102)) - (82))))) >> (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65522)) || (((/* implicit */_Bool) (unsigned short)12776)))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) /* same iter space */
                        {
                            arr_30 [i_7] [i_6] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551600ULL)) || (((/* implicit */_Bool) (unsigned short)11422))))) & (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12757))) > (var_0))))));
                            var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((var_6) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_6] [i_1] [i_2] [i_6])))))) - (((/* implicit */int) ((((/* implicit */int) arr_13 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_2] [(_Bool)1] [i_7])) >= (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_7])))))));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((var_2) ^ (var_2))) == (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) <= (((/* implicit */unsigned long long int) var_0)))))))))));
                            arr_31 [(_Bool)0] [8ULL] [(_Bool)1] [i_1] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-124)) <= (((/* implicit */int) (unsigned short)52273))))) - (((/* implicit */int) ((-4671043990169109833LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31962))))))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 1) /* same iter space */
                        {
                            var_22 -= ((/* implicit */unsigned long long int) ((((var_3) == (((/* implicit */unsigned long long int) arr_33 [i_8] [i_2] [i_1] [(short)1])))) || (((((/* implicit */unsigned long long int) var_1)) >= (1836484109457805394ULL)))));
                            var_23 ^= ((/* implicit */short) ((((((/* implicit */int) var_12)) << (((arr_28 [i_8] [i_6] [i_2] [i_1] [(signed char)0]) - (6871227220264236215ULL))))) - (((((/* implicit */int) arr_12 [i_0] [i_6])) << (((var_17) - (5762750573482520384ULL)))))));
                            var_24 ^= ((((((/* implicit */int) (signed char)66)) - (524287))) == (((/* implicit */int) ((arr_1 [i_6] [i_8]) <= (((/* implicit */int) (unsigned short)31285))))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            arr_37 [i_0] [i_1] [i_0] [i_6] [i_0] [i_6] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) 601694037)) - (16610259964251746229ULL))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_0] [i_0] [(unsigned short)4] [i_6] [(signed char)5])) % (arr_1 [i_1] [i_1]))))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [0])) || (((/* implicit */_Bool) var_16))))) - (((/* implicit */int) ((arr_6 [i_0] [i_1] [i_2] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)821))))))));
                        }
                        arr_38 [(unsigned char)1] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_4 [i_1] [i_1])))))) | (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (2199006478336LL)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        for (long long int i_11 = 0; i_11 < 10; i_11 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) 556202212)))))) > (((12621552924142958247ULL) << (((arr_45 [(signed char)1] [i_1] [i_2] [i_10] [i_10] [(unsigned short)2] [i_11]) + (8036705616779225284LL)))))));
                                arr_47 [i_0] [i_1] [i_1] [i_10] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [(unsigned char)4] [i_1] [i_2] [i_0] [i_11]))) & (20ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((-556202213) > (((/* implicit */int) var_13))))))));
                            }
                        } 
                    } 
                    var_27 ^= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6855))) % (var_10))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((16356196181860642568ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19848)))))))));
                }
            } 
        } 
        arr_48 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [6LL] [(_Bool)1])) % (((/* implicit */int) (unsigned char)222))))) > (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65024))) / (-9136212420096573128LL)))));
    }
    for (short i_12 = 0; i_12 < 14; i_12 += 1) /* same iter space */
    {
        var_28 += max((-556202217), (((/* implicit */int) ((((/* implicit */int) (unsigned short)38921)) != (min((-524298), (-1615313925)))))));
        var_29 += ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 36028797018963967LL)) && (((/* implicit */_Bool) (short)-1192))))) == (((/* implicit */int) ((var_17) == (((/* implicit */unsigned long long int) arr_50 [(unsigned char)0])))))))) + (((/* implicit */int) ((((/* implicit */int) (unsigned short)15)) >= (min((-1615313944), (-2107222712))))))));
        arr_51 [8LL] |= ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_19))))), (min((((/* implicit */unsigned long long int) (unsigned short)11420)), (2941771315143047831ULL))))), (min((17350142443122071030ULL), (1624763539376039071ULL)))));
    }
    for (short i_13 = 0; i_13 < 14; i_13 += 1) /* same iter space */
    {
        arr_54 [i_13] [i_13] = (i_13 % 2 == zero) ? (((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) -3709180807065988943LL)) < (var_17)))), (max((var_3), (((/* implicit */unsigned long long int) var_16)))))), (((/* implicit */unsigned long long int) ((min((((/* implicit */int) var_14)), (arr_50 [i_13]))) * (((arr_49 [i_13] [i_13]) / (((/* implicit */int) (unsigned char)154)))))))))) : (((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) -3709180807065988943LL)) < (var_17)))), (max((var_3), (((/* implicit */unsigned long long int) var_16)))))), (((/* implicit */unsigned long long int) ((min((((/* implicit */int) var_14)), (arr_50 [i_13]))) / (((arr_49 [i_13] [i_13]) / (((/* implicit */int) (unsigned char)154))))))))));
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((max((304430507358504737ULL), (((/* implicit */unsigned long long int) var_7)))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) / (8986442902898672069ULL))))))) != (((min((arr_52 [i_13]), (((/* implicit */unsigned int) arr_49 [i_13] [i_13])))) & (max((((/* implicit */unsigned int) (unsigned short)65535)), (1417736343U)))))));
        var_31 += ((/* implicit */unsigned short) max((max((max((16821980534333512545ULL), (((/* implicit */unsigned long long int) (unsigned char)51)))), (((/* implicit */unsigned long long int) min(((unsigned short)0), ((unsigned short)50141)))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)30))) / (79426483U)))) <= (min((var_3), (((/* implicit */unsigned long long int) (short)4095)))))))));
    }
    for (short i_14 = 0; i_14 < 14; i_14 += 1) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_53 [(short)10]) == (((/* implicit */unsigned long long int) arr_49 [(_Bool)1] [4ULL])))))) < (((15956756529184963312ULL) - (((/* implicit */unsigned long long int) var_2)))))))) - (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)116))) / (524287ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)250)) != (((/* implicit */int) arr_57 [(unsigned short)2] [6ULL])))))))))))));
        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) ((arr_49 [(unsigned char)12] [8U]) / (arr_50 [10ULL])))), (min((4504166627486975342ULL), (((/* implicit */unsigned long long int) (unsigned char)204)))))), (((/* implicit */unsigned long long int) ((((((-4894412899976750185LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)43))))) + (9223372036854775807LL))) << (((((((/* implicit */int) min((var_16), (arr_55 [(_Bool)1])))) + (5260))) - (48)))))))))));
        arr_58 [i_14] = ((/* implicit */int) max((max((min((((/* implicit */unsigned long long int) arr_55 [i_14])), (var_17))), (((/* implicit */unsigned long long int) ((arr_50 [i_14]) / (arr_50 [i_14])))))), (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)196)), (var_2)))), (max((((/* implicit */unsigned long long int) (unsigned short)6)), (arr_56 [i_14] [i_14])))))));
        var_34 -= ((/* implicit */long long int) ((min((min((var_17), (((/* implicit */unsigned long long int) (short)28312)))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) == (var_1)))))) << (((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-96)) || (((/* implicit */_Bool) var_16))))) / (((((/* implicit */int) (signed char)16)) ^ (((/* implicit */int) (unsigned char)33))))))));
    }
    var_35 ^= ((/* implicit */long long int) ((((max((var_17), (((/* implicit */unsigned long long int) (unsigned char)3)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) 551093380866045887ULL)))))))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_2) ^ (var_0)))) > (min((7405786757232907194ULL), (((/* implicit */unsigned long long int) var_4)))))))));
    /* LoopNest 2 */
    for (short i_15 = 0; i_15 < 25; i_15 += 2) 
    {
        for (long long int i_16 = 0; i_16 < 25; i_16 += 2) 
        {
            {
                arr_64 [i_16] [i_16] [i_15] = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) ((((/* implicit */int) arr_63 [i_15] [i_15])) % (((/* implicit */int) var_7))))), (min((((/* implicit */long long int) arr_62 [i_15] [15])), (arr_60 [i_15] [i_15]))))) & (((/* implicit */long long int) ((/* implicit */int) ((((arr_60 [i_15] [(unsigned char)8]) & (var_1))) > (((/* implicit */long long int) max((arr_59 [i_15]), (((/* implicit */unsigned int) (unsigned short)54089)))))))))));
                arr_65 [i_15] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)7769)) >> (((((/* implicit */int) (unsigned char)205)) - (184)))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) var_13)), (arr_63 [i_15] [i_16]))))))) % (((((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) var_7))))) << (((/* implicit */int) min(((short)6), (((/* implicit */short) (signed char)6)))))))));
                var_36 = ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)3), ((unsigned char)127))))) % (min((min((((/* implicit */unsigned int) (unsigned short)54076)), (arr_59 [i_16]))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)35730)) - (((/* implicit */int) (_Bool)0))))))));
                var_37 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) 1348052008)) >= (-2700960186389803386LL)))) >> (min((((/* implicit */int) ((arr_60 [i_16] [i_15]) <= (((/* implicit */long long int) ((/* implicit */int) var_9)))))), (((((/* implicit */int) (unsigned char)103)) * (((/* implicit */int) (short)0))))))));
            }
        } 
    } 
}
