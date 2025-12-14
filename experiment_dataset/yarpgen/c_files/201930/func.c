/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201930
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
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) (_Bool)0);
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (~((~(min((((/* implicit */int) var_3)), (var_4)))))));
                var_13 = max((((/* implicit */long long int) var_11)), (2199019061248LL));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_2])) != (((/* implicit */int) arr_4 [i_2]))));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_2] [i_2])) == (((/* implicit */int) arr_7 [i_2] [i_2]))));
        /* LoopSeq 4 */
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)12259)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
            var_16 = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_9 [i_2] [i_2])))) == (((/* implicit */int) arr_4 [i_3]))));
        }
        for (unsigned char i_4 = 1; i_4 < 18; i_4 += 2) 
        {
            arr_17 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2])) << (((((/* implicit */int) arr_7 [i_2] [i_2])) - (139)))))) ? (((var_0) << (((arr_5 [i_2]) - (2725608944U))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_2] [i_4])))))));
            arr_18 [i_4] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_2])) << (((((/* implicit */int) arr_4 [i_2])) - (250)))));
            arr_19 [i_2] = ((arr_14 [i_4 - 1]) / (((((/* implicit */_Bool) arr_1 [i_2])) ? (-1895991335) : (((/* implicit */int) arr_13 [i_4] [i_4 + 1])))));
            var_17 += arr_15 [i_2];
            var_18 = var_5;
        }
        for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            arr_23 [i_2] [i_5] = ((/* implicit */_Bool) arr_4 [i_2]);
            var_19 = ((arr_16 [i_2] [i_2] [i_2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))));
            var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (~(arr_5 [i_2])))) : (67517842609835486ULL));
            arr_24 [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_14 [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_15 [i_2])))) != (((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_15 [i_2]))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            arr_29 [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_2]))));
            var_21 = ((/* implicit */unsigned short) var_7);
            arr_30 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_21 [i_2] [i_6]))))) ? (((((/* implicit */_Bool) (unsigned short)39830)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)1)))) : (((arr_12 [i_2] [i_2]) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) (_Bool)1))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_7 = 1; i_7 < 11; i_7 += 4) 
    {
        arr_33 [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_15 [i_7 + 1]))));
        /* LoopNest 3 */
        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            for (int i_9 = 1; i_9 < 10; i_9 += 4) 
            {
                for (unsigned short i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    {
                        arr_41 [i_7] [i_7] [i_9] [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_35 [i_7] [i_7] [i_7 - 1]))));
                        arr_42 [i_7] [i_8] [i_8] [i_9] [i_10] = ((/* implicit */signed char) arr_12 [i_7] [i_8]);
                        var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 11506099190476917793ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) << ((((+(((/* implicit */int) arr_40 [i_8] [i_8] [i_8] [i_8] [i_9])))) - (10964)))));
                        var_23 = ((/* implicit */int) ((arr_26 [i_7] [i_7 - 1]) == (arr_26 [i_7] [i_7 + 1])));
                        arr_43 [i_7] [i_9 - 1] [i_8] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_27 [i_9 + 1] [i_9 + 1] [i_7 + 1])) / (33554432)));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_11 = 4; i_11 < 18; i_11 += 3) 
    {
        var_24 = ((/* implicit */_Bool) arr_15 [i_11]);
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_11] [(unsigned short)17] [i_11])) << (((((/* implicit */int) arr_21 [i_11] [i_11])) - (48)))))) ? (((((/* implicit */_Bool) arr_25 [i_11])) ? (((/* implicit */int) arr_10 [i_11])) : (((/* implicit */int) arr_7 [i_11 - 1] [i_11])))) : (((/* implicit */int) var_8))));
        var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_11] [15LL])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 1) 
    {
        arr_48 [i_12] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
        var_27 = ((/* implicit */_Bool) ((unsigned short) arr_45 [i_12] [i_12]));
    }
    for (unsigned char i_13 = 0; i_13 < 12; i_13 += 3) 
    {
        var_28 -= ((/* implicit */short) ((((/* implicit */_Bool) (+(min((arr_49 [i_13]), (1607881001)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-108))) : (((18379226231099716130ULL) >> (((((/* implicit */int) arr_15 [i_13])) - (57897)))))));
        arr_53 [i_13] = ((/* implicit */unsigned char) min((min((arr_5 [i_13]), (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) (signed char)-12))));
        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47710)) ? (arr_47 [i_13] [i_13]) : ((+(arr_34 [i_13] [i_13] [i_13])))))) ? (((((/* implicit */_Bool) ((67517842609835497ULL) >> (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((int) (-2147483647 - 1)))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))) : (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_13] [i_13])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_13] [i_13])) ? (var_4) : (((/* implicit */int) var_9))))) : (((arr_52 [i_13]) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_13]))) : (var_1))))))));
    }
    for (unsigned char i_14 = 1; i_14 < 20; i_14 += 2) 
    {
        var_30 = ((((/* implicit */_Bool) var_8)) ? (max((min((var_1), (((/* implicit */long long int) arr_56 [i_14] [i_14])))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)47710)) == (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_55 [i_14])) << (((((long long int) 18379226231099716130ULL)) + (67517842609835501LL)))))));
        arr_57 [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)116)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? ((~(arr_54 [i_14 - 1]))) : ((~(arr_54 [i_14 + 2])))));
        /* LoopSeq 2 */
        for (unsigned short i_15 = 0; i_15 < 22; i_15 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_16 = 1; i_16 < 21; i_16 += 4) 
            {
                for (long long int i_17 = 0; i_17 < 22; i_17 += 2) 
                {
                    for (signed char i_18 = 1; i_18 < 20; i_18 += 4) 
                    {
                        {
                            var_31 *= ((/* implicit */unsigned char) max((arr_70 [i_15] [17ULL]), ((+(((/* implicit */int) arr_68 [i_14 - 1] [i_18 + 1]))))));
                            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_14])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_14] [i_14] [i_14]) ? (((/* implicit */int) (short)5738)) : (var_5)))) ? (((((/* implicit */_Bool) arr_59 [i_18])) ? (((/* implicit */int) arr_65 [i_14] [i_14] [i_17] [i_14])) : (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_1 [i_18 + 1])))))));
                            arr_71 [i_14 + 2] [(unsigned short)19] [i_16] [i_17] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((min((((/* implicit */long long int) (unsigned short)25706)), (var_10))) - (25677LL)))))) ? (var_4) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)10)))))));
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_62 [i_14 + 1] [i_14 + 1] [i_14 + 2])), (arr_54 [i_14 + 1])))) != (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_62 [i_15] [i_14] [i_14]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6))) : ((~(67517842609835487ULL)))))));
        }
        for (int i_19 = 2; i_19 < 20; i_19 += 4) 
        {
            var_34 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_55 [i_14])) ? (((/* implicit */int) ((unsigned short) arr_62 [i_14] [i_14] [i_19]))) : (((((/* implicit */_Bool) arr_73 [i_14] [i_14])) ? (((/* implicit */int) arr_69 [i_14] [i_14] [i_14])) : (((/* implicit */int) (unsigned char)38)))))), (((arr_68 [i_19] [i_19]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_59 [i_14 + 2]))))));
            arr_74 [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) min((arr_0 [i_14]), (((/* implicit */unsigned char) arr_56 [i_14] [i_14]))))), (min((arr_64 [i_14] [i_19] [i_14] [i_14]), (((/* implicit */short) (unsigned char)240)))))))) != (((((/* implicit */_Bool) arr_5 [i_14 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_5 [i_14 - 1])))));
        }
        var_35 = ((/* implicit */long long int) min(((-(((/* implicit */int) arr_68 [i_14] [i_14 + 1])))), ((~(((/* implicit */int) (unsigned char)124))))));
    }
    var_36 = ((/* implicit */int) var_1);
    var_37 = ((/* implicit */signed char) (+(((/* implicit */int) min(((short)-30587), (((/* implicit */short) var_9)))))));
}
