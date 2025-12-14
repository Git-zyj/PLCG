/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232126
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((240ULL) != (0ULL))))))) ? (((((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */long long int) var_1)) : (var_0)))) & (max((0ULL), (((/* implicit */unsigned long long int) 5911721585440180856LL)))))) : (((/* implicit */unsigned long long int) var_1))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0 - 1] [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) arr_5 [i_0] [i_1])) * (((/* implicit */int) arr_5 [i_0] [i_1])))));
                    var_12 = ((/* implicit */unsigned long long int) ((_Bool) arr_4 [i_0] [i_0]));
                }
            } 
        } 
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) 15U))) - (((/* implicit */int) (_Bool)1))));
        arr_10 [i_0] = ((/* implicit */short) ((int) (((_Bool)0) ? (((/* implicit */long long int) 15U)) : (-7693562086426332889LL))));
    }
    /* LoopNest 2 */
    for (short i_3 = 4; i_3 < 21; i_3 += 4) 
    {
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            {
                var_14 = ((/* implicit */short) ((_Bool) ((((/* implicit */int) arr_11 [i_3 - 3])) / (((/* implicit */int) arr_11 [i_3 - 4])))));
                var_15 *= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (short)-3504)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -5911721585440180857LL)) ? (-7693562086426332883LL) : (9223372036854775807LL))))))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3 - 2] [(_Bool)1]))) / (7575862399991441611ULL))), (((/* implicit */unsigned long long int) (-(arr_3 [i_3]))))))));
                var_16 -= ((/* implicit */unsigned char) ((((((4294967288U) >> (((((/* implicit */int) (unsigned short)62888)) - (62863))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_0)))))) ? ((((+(((/* implicit */int) arr_1 [i_3])))) * (((/* implicit */int) (unsigned char)155)))) : (((int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) - (0U))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        var_17 = ((((/* implicit */int) ((((/* implicit */_Bool) ((17434196473064040672ULL) << (((268434432U) - (268434381U)))))) || (((((/* implicit */int) (signed char)10)) == (((/* implicit */int) (_Bool)1))))))) > (((arr_11 [i_5]) ? (((((/* implicit */int) var_9)) * (((/* implicit */int) var_9)))) : (((/* implicit */int) var_4)))));
        var_18 = ((/* implicit */unsigned short) (((((!(var_9))) && (((/* implicit */_Bool) ((short) var_3))))) && ((((!(((/* implicit */_Bool) var_5)))) && (((/* implicit */_Bool) ((long long int) arr_19 [7ULL])))))));
    }
    for (short i_6 = 0; i_6 < 15; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 1; i_8 < 14; i_8 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 1; i_9 < 13; i_9 += 3) 
                    {
                        for (unsigned long long int i_10 = 2; i_10 < 14; i_10 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */int) ((((/* implicit */int) ((max((((/* implicit */long long int) 2147483647)), (-5671146063305389786LL))) != (((/* implicit */long long int) ((/* implicit */int) (short)1023)))))) != (((/* implicit */int) ((((/* implicit */_Bool) 3318548446U)) && (((/* implicit */_Bool) (-(17434196473064040672ULL)))))))));
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((((/* implicit */unsigned int) ((((((/* implicit */_Bool) 338810767)) ? (((/* implicit */int) var_7)) : (arr_0 [i_10]))) >> (((/* implicit */int) var_6))))) + (max((((/* implicit */unsigned int) arr_6 [i_10] [i_10 + 1] [i_9 + 1])), (min((((/* implicit */unsigned int) 21)), (var_1)))))))));
                            }
                        } 
                    } 
                    arr_36 [i_6] [i_7] [i_8] = ((/* implicit */_Bool) ((((/* implicit */int) ((((8388176788055935535ULL) % (((/* implicit */unsigned long long int) arr_14 [i_6] [i_6])))) > (((/* implicit */unsigned long long int) ((unsigned int) var_8)))))) - (((/* implicit */int) ((arr_34 [i_8 - 1] [i_8 + 1] [i_6]) >= (((/* implicit */long long int) (~(-338810763)))))))));
                }
            } 
        } 
        var_21 -= ((/* implicit */signed char) ((((/* implicit */int) ((((((-5209616664009710953LL) + (9223372036854775807LL))) << (((((-338810753) + (338810759))) - (5))))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) != (3169454628U)))))))) <= (((int) (_Bool)1))));
        /* LoopNest 3 */
        for (unsigned int i_11 = 0; i_11 < 15; i_11 += 4) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 4) 
            {
                for (short i_13 = 1; i_13 < 13; i_13 += 1) 
                {
                    {
                        arr_47 [i_13] [i_13] [i_13] [i_13 - 1] [i_13] = ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_9)))) > (((((/* implicit */_Bool) ((int) arr_27 [i_13]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (short)25263)) : (((/* implicit */int) (short)-17562))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (arr_33 [i_6] [4U] [i_6] [i_6]))))));
                        var_22 = ((/* implicit */short) max((max((max((arr_30 [i_13]), (((/* implicit */unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) 338810767)))), (((/* implicit */unsigned long long int) ((_Bool) min(((_Bool)1), (var_8)))))));
                        arr_48 [i_6] [i_13] [i_6] = ((((/* implicit */_Bool) 10ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (5391669541683389860ULL));
                        var_23 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_13] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10058567285653616089ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_13] [i_11])) ? (((/* implicit */int) (unsigned char)15)) : (var_10)))) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) % (arr_18 [i_6]))))), (((/* implicit */long long int) ((short) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_7))))))));
                        /* LoopSeq 3 */
                        for (short i_14 = 1; i_14 < 14; i_14 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-27251)) ? ((~(((/* implicit */int) (short)1)))) : (2147483647)));
                            var_25 = ((/* implicit */int) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_8)), (var_7)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_6] [i_11] [i_13] [i_13 + 1] [i_14] [i_14] [i_14])) ? (((/* implicit */long long int) arr_44 [i_13] [i_11] [i_11] [i_11])) : (arr_12 [i_6])))) : (((1900430205240601132ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                            var_26 = ((/* implicit */unsigned char) (+(((((-2035549260) > (((/* implicit */int) var_8)))) ? ((-(((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) (_Bool)1))))))));
                            arr_52 [i_14 + 1] [i_13] [i_12] [i_12] [i_13] [i_6] = ((/* implicit */int) max((max((((((/* implicit */_Bool) 5671146063305389792LL)) ? (arr_31 [i_13] [i_11]) : (arr_12 [i_13 + 2]))), (((/* implicit */long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) (short)22680))))))), (((/* implicit */long long int) ((max((4294967295U), (((/* implicit */unsigned int) arr_46 [i_13] [i_13] [i_12] [i_13 + 2] [i_14 + 1])))) <= (((arr_33 [i_6] [i_6] [i_6] [i_6]) * (var_5))))))));
                        }
                        for (short i_15 = 1; i_15 < 14; i_15 += 4) /* same iter space */
                        {
                            var_27 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))))) < (((long long int) ((((/* implicit */int) (short)5925)) ^ (((/* implicit */int) var_3)))))));
                            var_28 = ((/* implicit */unsigned int) ((max((3ULL), (((/* implicit */unsigned long long int) (_Bool)0)))) + (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (arr_38 [i_12] [i_11]) : (((/* implicit */int) var_6)))) << (((((arr_28 [i_6] [(unsigned char)13] [i_6]) << (((24U) - (24U))))) - (1126345897))))))));
                            var_29 = ((/* implicit */_Bool) (~(((/* implicit */int) max(((unsigned short)3), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_6]))) > (-2434507276470692919LL)))))))));
                            var_30 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((unsigned int) max((var_1), (((/* implicit */unsigned int) -32768)))))), (max((((((/* implicit */_Bool) arr_12 [i_6])) ? (arr_17 [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) (short)-22679)) + (22687))))))))));
                        }
                        for (short i_16 = 0; i_16 < 15; i_16 += 4) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((1278601789U), (((/* implicit */unsigned int) (unsigned short)14))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 8902273242343533054LL)))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)30720))) | (2726810801U))))))));
                            var_32 = ((/* implicit */long long int) (-(((1698663316U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-22667)))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (int i_17 = 0; i_17 < 14; i_17 += 4) 
    {
        arr_62 [i_17] = ((/* implicit */int) ((((max((arr_32 [i_17] [i_17] [9U]), (((/* implicit */unsigned long long int) var_0)))) == (((/* implicit */unsigned long long int) (~(var_0)))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_6))))), (((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2626297005U)))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-4))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */long long int) 25U)) & (arr_18 [i_17])))))));
        var_33 = ((/* implicit */short) (~(((/* implicit */int) ((((var_0) ^ (-8902273242343533055LL))) >= (((/* implicit */long long int) var_10)))))));
        arr_63 [i_17] [(unsigned char)9] = ((/* implicit */unsigned short) ((((((/* implicit */int) max(((unsigned char)127), (((/* implicit */unsigned char) var_8))))) | (((((/* implicit */int) var_7)) << (((arr_42 [i_17] [i_17] [i_17]) - (2851327782142473773ULL))))))) & (((((((/* implicit */int) var_9)) >> (((/* implicit */int) var_8)))) >> (((arr_3 [i_17]) + (17265556)))))));
        arr_64 [i_17] [(unsigned char)3] = ((/* implicit */int) ((((((/* implicit */_Bool) max(((short)22680), (((/* implicit */short) (_Bool)1))))) ? (max((((/* implicit */unsigned int) (unsigned char)204)), (arr_33 [i_17] [i_17] [i_17] [i_17]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_17] [i_17]))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((short) arr_56 [i_17] [i_17] [i_17] [i_17] [i_17]))) > (((int) 338810786))))))));
    }
}
