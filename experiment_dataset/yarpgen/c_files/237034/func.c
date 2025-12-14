/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237034
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(min((-1583415612), (((/* implicit */int) arr_0 [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U)))) : (((arr_1 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-1025505533372312344LL))))) : (((/* implicit */long long int) ((arr_1 [i_0]) ? (((arr_0 [i_0] [i_0]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((((/* implicit */int) arr_1 [i_0])) >> (((58728389) - (58728383))))))))));
        var_11 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (max(((-(var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-92)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
    }
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) 29);
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_2 = 1; i_2 < 9; i_2 += 2) 
        {
            arr_7 [(unsigned char)6] &= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_1 [i_1])))) < (((arr_5 [i_1]) ? (((/* implicit */int) arr_3 [(_Bool)0])) : (((/* implicit */int) arr_5 [i_1]))))));
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    {
                        arr_16 [i_2] = ((((/* implicit */int) (unsigned short)61364)) | (((/* implicit */int) (_Bool)1)));
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            var_13 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)61364)) ? (((/* implicit */int) arr_14 [i_1] [i_3 - 1] [i_2 + 1])) : (((/* implicit */int) (_Bool)1))));
                            var_14 = ((/* implicit */_Bool) arr_12 [i_4] [i_2 - 1]);
                        }
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            var_15 = ((((/* implicit */int) var_6)) <= ((~(((/* implicit */int) (signed char)-92)))));
                            var_16 ^= ((/* implicit */unsigned long long int) arr_0 [(signed char)17] [(short)5]);
                            var_17 = ((/* implicit */unsigned int) ((arr_13 [i_1] [i_1] [i_2 - 1] [i_3] [i_4] [i_6]) ? (((((/* implicit */_Bool) arr_21 [i_6] [i_4] [(short)1] [i_2 - 1] [i_2 + 2] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)35)))) : (((((/* implicit */int) (signed char)-118)) % (arr_6 [i_1] [i_3 + 1] [i_3])))));
                            var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_2) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_3])))))) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (arr_20 [i_1] [i_2] [i_3 + 2] [i_4] [i_2] [i_2] [i_1])));
                        }
                        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            var_20 |= ((/* implicit */int) var_10);
                            arr_27 [(unsigned char)5] [i_2] [(unsigned char)5] [i_4] [(unsigned char)5] = ((/* implicit */signed char) -1309066011);
                            arr_28 [i_2] [i_2] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_22 [i_4] [i_1])) ? (((/* implicit */int) (unsigned short)65522)) : (((/* implicit */int) (_Bool)1))))));
                        }
                    }
                } 
            } 
            arr_29 [i_2] = ((/* implicit */unsigned char) arr_15 [i_2 + 3] [2ULL] [i_2 + 3] [9]);
        }
        for (signed char i_8 = 0; i_8 < 12; i_8 += 3) 
        {
            var_21 = ((/* implicit */short) arr_0 [i_1] [i_8]);
            var_22 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (((((/* implicit */_Bool) 5247795470716598911LL)) ? (1333617202099438071LL) : (var_5)))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_37 [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) arr_25 [i_1] [i_1] [i_1] [i_9] [i_9]);
            var_23 = ((/* implicit */unsigned char) ((((arr_8 [i_9] [i_1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36047))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_9]))))) != (max((var_3), (((/* implicit */unsigned int) var_1))))))) : (((/* implicit */int) var_1))));
            arr_38 [i_9] = ((/* implicit */short) ((arr_32 [i_1]) > (((/* implicit */long long int) ((/* implicit */int) arr_13 [(short)0] [i_9] [i_9] [(short)0] [i_9] [i_9])))));
            arr_39 [(_Bool)1] [i_9] &= ((/* implicit */int) arr_24 [(unsigned short)8] [7U] [i_1]);
        }
        var_24 = ((/* implicit */int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_5 [i_1])), (var_6)))) ? (((((/* implicit */_Bool) 1)) ? (((/* implicit */long long int) arr_15 [i_1] [i_1] [i_1] [i_1])) : (var_5))) : (((long long int) -8162751812163644069LL)))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_12 [i_1] [i_1]), (((/* implicit */unsigned short) arr_24 [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) (unsigned char)81)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_1] [i_1])))))))));
    }
    /* vectorizable */
    for (unsigned short i_10 = 3; i_10 < 10; i_10 += 3) 
    {
        var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_40 [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_10 + 1]))) : ((-(arr_40 [i_10])))));
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_10]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_10]))))) : (((arr_1 [i_10 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_10]))) : (var_3)))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 2) 
    {
        for (unsigned char i_12 = 0; i_12 < 11; i_12 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_13 = 0; i_13 < 11; i_13 += 3) 
                {
                    for (int i_14 = 0; i_14 < 11; i_14 += 2) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 11; i_15 += 3) 
                        {
                            {
                                arr_56 [i_11] = ((/* implicit */long long int) max((max((max((arr_26 [i_11] [i_12] [i_13] [i_14] [i_12]), (((/* implicit */unsigned int) arr_6 [i_15] [i_13] [8ULL])))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_44 [i_14] [i_11])) != (arr_21 [(unsigned short)6] [i_14] [i_11] [i_13] [i_11] [i_11])))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_8)))))));
                                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) 6)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)189))))), (((((/* implicit */_Bool) var_0)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-92)))))))) ? ((~(((/* implicit */int) ((var_7) > (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_14] [i_13])))))))) : (((/* implicit */int) arr_13 [i_15] [10LL] [(_Bool)1] [i_14] [i_15] [i_13]))));
                            }
                        } 
                    } 
                } 
                var_28 = (((~(((/* implicit */int) arr_54 [i_12] [i_12] [i_11] [i_11])))) <= (((/* implicit */int) arr_33 [i_11] [i_11])));
                arr_57 [(unsigned short)8] = (-(((min((var_3), (((/* implicit */unsigned int) arr_35 [i_12] [i_12] [i_11])))) % (((/* implicit */unsigned int) (-(((/* implicit */int) arr_50 [i_11] [i_11]))))))));
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((286191928) / (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (max((((/* implicit */unsigned int) max((var_9), (((/* implicit */unsigned short) var_4))))), (max((((/* implicit */unsigned int) 399724363)), (var_7)))))));
}
