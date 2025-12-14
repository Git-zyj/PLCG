/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37225
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
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        var_13 += ((/* implicit */unsigned int) (((~(1023U))) >= (arr_3 [i_0 - 1])));
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (signed char)115))));
    }
    var_15 = max((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))) & (((/* implicit */int) var_1)))), (((/* implicit */int) max(((signed char)-122), (((/* implicit */signed char) (_Bool)1))))));
    /* LoopSeq 2 */
    for (signed char i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        var_16 = ((((/* implicit */int) (unsigned short)59889)) / (((/* implicit */int) (unsigned char)7)));
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((unsigned int) arr_4 [(short)8] [i_1]))))) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) arr_5 [i_1]))));
        var_18 = arr_4 [i_1] [i_1];
        arr_6 [i_1] = ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (var_11) : (((/* implicit */int) arr_4 [i_1] [i_1]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)2))))) : (17U)));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            arr_10 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 0)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) (_Bool)1)))))) ^ (((min((((/* implicit */int) (unsigned char)7)), (-2118160520))) * (((/* implicit */int) ((((/* implicit */int) arr_8 [i_2] [i_1])) <= (((/* implicit */int) var_6)))))))));
            var_19 = ((/* implicit */short) max((((((/* implicit */int) (unsigned char)249)) << (((((/* implicit */int) arr_7 [i_1] [(signed char)8] [i_2])) ^ (((/* implicit */int) arr_7 [i_1] [i_2] [i_2])))))), (((/* implicit */int) var_5))));
        }
    }
    for (signed char i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            arr_15 [i_4] = ((/* implicit */short) ((unsigned int) arr_5 [i_3]));
            arr_16 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_3] [i_4] [i_4])) * (((/* implicit */int) arr_11 [i_4]))));
            var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)24802)) ? (67108863) : (((/* implicit */int) (unsigned short)59889))));
        }
        /* LoopSeq 3 */
        for (long long int i_5 = 1; i_5 < 21; i_5 += 2) 
        {
            var_21 = ((/* implicit */unsigned int) ((arr_18 [i_5]) / (((/* implicit */int) arr_7 [i_3] [20U] [i_5]))));
            var_22 = ((/* implicit */signed char) (+(((((/* implicit */int) arr_5 [i_3])) ^ (((/* implicit */int) arr_5 [i_5 - 1]))))));
        }
        for (unsigned short i_6 = 2; i_6 < 22; i_6 += 2) 
        {
            var_23 = ((/* implicit */short) min((min((4294967279U), (((/* implicit */unsigned int) (signed char)123)))), (((/* implicit */unsigned int) ((_Bool) arr_17 [i_6 - 1] [i_6 - 1])))));
            var_24 = ((/* implicit */unsigned int) ((var_2) ? (arr_12 [(unsigned char)2]) : (((/* implicit */int) arr_7 [i_3] [(signed char)18] [i_3]))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_25 [i_3] [i_3] [i_7] = ((/* implicit */int) arr_11 [i_3]);
            arr_26 [i_7] = ((/* implicit */unsigned int) ((signed char) arr_21 [i_7]));
            /* LoopSeq 3 */
            for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) 
                {
                    for (long long int i_10 = 4; i_10 < 20; i_10 += 2) 
                    {
                        {
                            arr_34 [i_3] [i_8] [(_Bool)1] [10] [i_3] &= ((/* implicit */unsigned short) (unsigned char)7);
                            var_25 = ((/* implicit */short) (~(((((unsigned int) (signed char)(-127 - 1))) << (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_29 [i_3] [i_3] [i_7] [i_3])))))))));
                            arr_35 [i_7] = ((/* implicit */_Bool) arr_32 [i_3] [i_10 - 3] [i_8] [i_8] [i_8] [i_7]);
                            arr_36 [i_3] [i_7] [i_8] [i_3] [i_7] [i_9] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */long long int) 2118160520)) : (((((/* implicit */_Bool) arr_31 [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_8)))))));
                            var_26 *= ((/* implicit */unsigned short) arr_29 [(signed char)16] [i_7] [i_10] [i_7]);
                        }
                    } 
                } 
                arr_37 [i_7] [i_7] [i_8] [i_7] = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)-1)) && (((/* implicit */_Bool) arr_14 [i_3] [i_7] [i_8])))) || ((!(((/* implicit */_Bool) arr_4 [i_3] [(short)18]))))));
                arr_38 [i_7] [i_7] [i_7] = max((((((/* implicit */_Bool) (+(var_3)))) ? (max((((/* implicit */long long int) var_12)), (var_8))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_11 [19U]))))))), (((/* implicit */long long int) max((arr_23 [i_3]), (arr_23 [i_8])))));
                /* LoopSeq 2 */
                for (int i_11 = 2; i_11 < 22; i_11 += 2) 
                {
                    arr_41 [i_3] [i_7] [i_7] [i_11] = ((/* implicit */unsigned int) max(((unsigned short)1023), (((unsigned short) -2118160521))));
                    var_27 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) -2118160520)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_11 - 2] [i_11 - 1]))) : (max((((/* implicit */long long int) arr_8 [i_3] [i_11])), (-1LL)))))));
                    var_28 ^= ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) -949936919)) & (5806026722993358532LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)-78)))) : (((2147483648U) << (((/* implicit */int) (signed char)25)))))));
                    arr_42 [i_3] [10] [i_8] [i_8] [10] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((2347061293U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))) ? (min((((arr_11 [i_7]) ? (1526341016) : (((/* implicit */int) (unsigned char)233)))), (max((arr_31 [i_3] [i_7] [(signed char)20] [8]), (((/* implicit */int) arr_7 [i_3] [i_3] [i_11])))))) : (((/* implicit */int) ((unsigned short) (~(18446744073709551615ULL)))))));
                }
                for (signed char i_12 = 0; i_12 < 23; i_12 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_13 = 1; i_13 < 21; i_13 += 3) 
                    {
                        var_29 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_47 [i_13 + 1] [i_13 + 2] [i_13] [i_13 - 1] [i_12] [i_13 + 1])) ? (((/* implicit */unsigned int) arr_32 [i_13 + 2] [i_13 + 1] [i_13 + 2] [i_13 + 1] [i_13 - 1] [i_8])) : (((((/* implicit */_Bool) arr_32 [i_13 - 1] [i_13 - 1] [i_13] [i_13 + 2] [i_13 - 1] [i_3])) ? (arr_47 [i_13 + 2] [i_13 + 2] [i_13 - 1] [i_13 + 2] [i_8] [i_13 + 1]) : (arr_47 [i_13 + 2] [i_13 + 2] [i_13 + 2] [i_13 - 1] [i_12] [i_13 + 2])))));
                        arr_48 [i_3] [(unsigned short)0] [i_8] [i_12] [(unsigned short)0] [i_7] [i_3] = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) 4363302294104617609ULL)))), (((((/* implicit */_Bool) (signed char)-123)) || (((/* implicit */_Bool) (signed char)29)))))) && (((/* implicit */_Bool) min((arr_47 [i_3] [i_7] [i_8] [i_13 - 1] [i_7] [i_3]), (((/* implicit */unsigned int) arr_5 [i_13 + 1])))))));
                        arr_49 [i_7] = max((arr_13 [i_7]), (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_43 [i_7] [i_12] [(short)15] [i_7]))) < (3374515671853172094LL)))), (var_10)))));
                    }
                    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (unsigned short)59881))));
                    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_14 [i_8] [i_7] [i_3])), (((unsigned short) arr_31 [i_3] [i_7] [i_8] [i_12])))))) | (((((/* implicit */unsigned int) ((/* implicit */int) max((var_10), (arr_33 [i_3] [i_7]))))) & (((arr_39 [i_3] [i_7] [i_8] [i_8] [i_12] [(unsigned short)3]) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-14)))))))));
                }
                var_32 = ((/* implicit */int) var_8);
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                arr_53 [i_7] [i_7] [i_7] = ((/* implicit */short) (((+(((/* implicit */int) (unsigned char)255)))) << (((arr_21 [i_7]) % (arr_21 [i_7])))));
                arr_54 [i_3] [i_7] [i_7] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_50 [i_7] [(short)15] [i_7])) ^ (((/* implicit */int) var_2))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)123)), (arr_50 [i_7] [i_7] [i_14])))) : (((((/* implicit */_Bool) arr_50 [i_7] [i_7] [i_7])) ? (2147483645) : (((/* implicit */int) arr_50 [i_7] [i_7] [i_14]))))));
                /* LoopNest 2 */
                for (long long int i_15 = 4; i_15 < 20; i_15 += 2) 
                {
                    for (short i_16 = 0; i_16 < 23; i_16 += 3) 
                    {
                        {
                            arr_61 [i_7] [14LL] [i_14] [i_15] [12LL] = ((/* implicit */short) 4294967295U);
                            var_33 = ((/* implicit */int) min((min((min((((/* implicit */long long int) 3545435814U)), (-2921542112192754700LL))), (((/* implicit */long long int) arr_46 [i_15] [i_15 - 4] [i_15 + 2] [i_7] [i_15 - 1] [i_15 - 1] [i_15 - 1])))), (((/* implicit */long long int) arr_23 [i_15 + 1]))));
                            var_34 = ((/* implicit */int) var_10);
                        }
                    } 
                } 
                var_35 = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) arr_8 [i_14] [i_7]))))), (min((((/* implicit */unsigned long long int) 4294967288U)), (arr_21 [i_7]))))), (((/* implicit */unsigned long long int) var_7))));
            }
            for (long long int i_17 = 0; i_17 < 23; i_17 += 3) 
            {
                arr_66 [i_7] = ((/* implicit */signed char) max((((((/* implicit */int) arr_43 [i_3] [i_7] [i_7] [i_7])) | (((/* implicit */int) var_5)))), (((/* implicit */int) ((((arr_45 [i_7] [i_3] [i_7] [(unsigned short)22]) / (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_3] [i_3]))))) < (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_17] [2LL] [i_3]))))))));
                arr_67 [i_3] [i_7] [i_7] [14LL] = ((/* implicit */short) ((((/* implicit */_Bool) (+(max((((/* implicit */long long int) (signed char)(-127 - 1))), (arr_45 [i_7] [(signed char)8] [4LL] [i_7])))))) && (((_Bool) ((((/* implicit */_Bool) arr_7 [20ULL] [i_7] [i_17])) || (((/* implicit */_Bool) arr_13 [i_7])))))));
                /* LoopNest 2 */
                for (unsigned int i_18 = 0; i_18 < 23; i_18 += 4) 
                {
                    for (unsigned short i_19 = 3; i_19 < 22; i_19 += 2) 
                    {
                        {
                            arr_73 [i_3] [i_3] [i_3] [(unsigned short)8] [i_3] [i_7] = ((/* implicit */unsigned short) ((unsigned int) ((unsigned int) var_0)));
                            var_36 = ((/* implicit */unsigned int) max((var_6), (((/* implicit */signed char) var_0))));
                        }
                    } 
                } 
            }
            var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_3] [12LL] [12LL] [i_7])) || (((/* implicit */_Bool) min((arr_31 [i_7] [i_3] [i_3] [i_3]), (arr_31 [i_7] [i_7] [i_3] [i_7]))))));
            var_38 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_18 [i_7])) ? (arr_18 [i_3]) : (var_11))) / ((((_Bool)1) ? (arr_18 [i_7]) : (arr_18 [i_3])))));
        }
        var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((arr_13 [i_3]), (((/* implicit */int) var_4)))), (((/* implicit */int) ((((/* implicit */int) var_0)) <= (var_11))))))) ? (1206962488) : (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (_Bool)1)))))))));
    }
    var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((unsigned int) var_8))))) ? (((/* implicit */long long int) var_11)) : (2251799813685247LL)));
    var_41 = ((/* implicit */unsigned int) var_11);
}
