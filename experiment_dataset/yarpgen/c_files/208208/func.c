/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208208
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)0)) | (((((/* implicit */_Bool) max((var_8), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */int) ((signed char) var_8))) : (((/* implicit */int) (short)13596))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            {
                var_11 ^= ((/* implicit */int) (-((+(2096896U)))));
                arr_5 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned int) (short)-13667));
                var_12 ^= ((/* implicit */unsigned char) max(((short)32767), (((/* implicit */short) (!(((/* implicit */_Bool) var_8)))))));
                var_13 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (signed char)-32))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_3 [i_0 + 2] [i_1] [i_0 + 2])) : (((/* implicit */int) arr_4 [i_1] [(unsigned short)24] [i_0])))) : (((/* implicit */int) max((var_7), ((short)13666)))))), (((/* implicit */int) arr_0 [i_0] [i_0]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            {
                var_14 += ((/* implicit */_Bool) ((min((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-13667)))), (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (short)-13666)))))) - (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) 1099511627776ULL)))))));
                /* LoopSeq 4 */
                for (unsigned char i_4 = 1; i_4 < 15; i_4 += 3) 
                {
                    arr_14 [i_2] = ((/* implicit */long long int) (((+(((/* implicit */int) ((((/* implicit */int) arr_3 [i_2] [i_3] [i_4])) <= (((/* implicit */int) var_5))))))) & (((/* implicit */int) arr_11 [i_2] [i_2] [i_2] [i_2]))));
                    arr_15 [i_2] [i_3] [i_2] [i_4] = ((/* implicit */int) (-(((max((((/* implicit */unsigned int) (unsigned short)54580)), (483190047U))) * (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_1 [i_4])), ((short)2016)))))))));
                }
                for (unsigned short i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    arr_20 [i_5] [i_5] [(unsigned short)7] [i_2] = ((/* implicit */unsigned int) (unsigned short)65535);
                    arr_21 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)13666)) ? (min((max((((/* implicit */unsigned long long int) var_5)), (var_1))), (((/* implicit */unsigned long long int) ((7773530244144199044LL) - (((/* implicit */long long int) ((/* implicit */int) (short)0)))))))) : (((/* implicit */unsigned long long int) 3557223157U))));
                }
                for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_29 [i_2] [(unsigned short)14] = (((((_Bool)1) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) ((((((/* implicit */int) arr_1 [i_3])) << (((((/* implicit */int) arr_4 [i_7] [i_2] [i_6])) + (49))))) < (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) var_6))))))));
                        var_15 -= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)10435)) & (((/* implicit */int) (short)-13667))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 2) 
                        {
                            arr_34 [i_2] [i_3] [i_6] [i_2] [i_9] = ((/* implicit */unsigned short) ((arr_27 [i_8] [i_3] [i_6] [i_3 + 1] [i_6]) / (((((/* implicit */int) var_3)) * (((/* implicit */int) var_5))))));
                            arr_35 [i_2] [i_2] [i_2] [i_8] [i_9] = ((/* implicit */signed char) var_9);
                        }
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) var_8)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (((/* implicit */int) arr_24 [i_8]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((3963352700377169006LL) > (8298112615146983363LL))))) : (max((((/* implicit */long long int) (_Bool)1)), (-2192545720202246452LL))))) : (((/* implicit */long long int) ((((/* implicit */int) var_3)) << (((arr_31 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]) - (3406422671U))))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2053424345U))));
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (((+(((((/* implicit */unsigned int) ((/* implicit */int) (short)255))) & (3557223157U))))) ^ (((/* implicit */unsigned int) max((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)55101)))), ((-(2143412533)))))))))));
                        var_19 -= ((/* implicit */short) ((unsigned int) (signed char)96));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        arr_42 [i_2] [i_2] [0ULL] [0ULL] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) 883061829U)) ? (((/* implicit */int) max(((short)-8192), ((short)512)))) : (min((((((/* implicit */_Bool) arr_10 [i_3] [i_6] [i_11])) ? (((/* implicit */int) (unsigned short)10955)) : (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) var_5))))))));
                        arr_43 [i_2] [i_2] [i_3] [i_2] [i_3] [i_11] &= (!((_Bool)1));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_12 = 0; i_12 < 16; i_12 += 4) 
                        {
                            var_20 ^= ((/* implicit */_Bool) var_9);
                            var_21 -= ((/* implicit */unsigned short) ((arr_18 [i_3 + 1] [i_11] [i_6] [i_11]) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-107)))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max(((+(((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) var_0)))))))));
                            var_23 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 130816U)), (2584707533399447292ULL)));
                            var_24 *= ((/* implicit */_Bool) ((((/* implicit */int) (short)300)) * (((/* implicit */int) (_Bool)0))));
                            var_25 = ((unsigned short) max((((/* implicit */int) arr_25 [i_3 + 1])), ((+(((/* implicit */int) (_Bool)0))))));
                        }
                        for (signed char i_14 = 1; i_14 < 14; i_14 += 3) 
                        {
                            var_26 = ((/* implicit */short) var_8);
                            var_27 ^= ((/* implicit */unsigned short) max(((signed char)-85), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-97)) >= ((-(((/* implicit */int) (short)18578)))))))));
                            arr_53 [i_2] [i_2] [i_2] [i_6] [i_11] [i_14] [i_14 + 2] = ((/* implicit */unsigned short) max((((((((((/* implicit */int) var_5)) + (2147483647))) << (((/* implicit */int) arr_17 [i_2] [i_3] [i_2])))) >= (((int) var_6)))), ((((_Bool)1) && (((/* implicit */_Bool) 18350615321783859481ULL))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_15 = 2; i_15 < 12; i_15 += 3) 
                        {
                            arr_56 [i_6] [i_3] [i_6] [i_6] [14] [i_2] [i_15] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)41929))));
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) arr_18 [12U] [i_6] [i_11] [i_6]))));
                        }
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_16 = 2; i_16 < 14; i_16 += 4) 
                    {
                        arr_60 [i_16] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3557223157U)) ? (((/* implicit */int) (unsigned short)31734)) : (((/* implicit */int) (_Bool)1))));
                        arr_61 [i_2] [i_2] [(short)2] [i_16] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_16] [i_2]))))) : (arr_31 [i_2] [i_2] [i_2] [i_2])));
                    }
                }
                for (unsigned short i_17 = 0; i_17 < 16; i_17 += 3) /* same iter space */
                {
                    var_29 *= ((/* implicit */unsigned long long int) arr_32 [i_17] [i_3 + 1] [i_2] [i_3] [i_2] [i_2]);
                    var_30 = ((/* implicit */unsigned short) 11694457288200305176ULL);
                    arr_64 [7U] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2825919826U)) / (96128751925692134ULL)))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((arr_50 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]), (arr_50 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]))))));
                }
                var_31 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)40438)) >> (((975140745) - (975140724)))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) ((unsigned short) arr_2 [(signed char)23] [i_3]))))) - (((/* implicit */int) ((unsigned short) (unsigned short)37477)))));
                arr_65 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65281)) ? (((/* implicit */int) (unsigned short)7369)) : (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}
