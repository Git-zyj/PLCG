/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197796
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
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        arr_2 [i_0 + 3] [i_0 + 3] = ((/* implicit */short) ((unsigned int) ((unsigned long long int) var_1)));
        arr_3 [i_0 + 3] &= ((/* implicit */int) 18446744073709551615ULL);
    }
    var_12 = var_1;
    /* LoopSeq 1 */
    for (unsigned char i_1 = 3; i_1 < 12; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 4; i_2 < 14; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 12; i_5 += 4) 
                        {
                            arr_16 [i_1] [i_1] [i_2] [i_2] [i_4] [i_5 - 1] = ((/* implicit */long long int) arr_4 [i_4]);
                            var_13 = ((/* implicit */unsigned short) ((((-1895412697) >= (((/* implicit */int) arr_10 [i_2 - 4] [i_2 - 4] [i_5 - 1])))) || (((/* implicit */_Bool) var_9))));
                            arr_17 [i_5] [i_3] [i_3] [i_3] [i_2 - 3] [i_1] = ((/* implicit */_Bool) (~(arr_14 [i_3] [i_5 - 2] [i_5 + 1] [i_4] [i_1 - 1] [i_3])));
                            var_14 ^= ((/* implicit */signed char) ((_Bool) ((((/* implicit */long long int) 1895412700)) | (4340083713215665555LL))));
                        }
                        var_15 = ((/* implicit */signed char) var_8);
                        arr_18 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) max((arr_9 [i_2 - 3] [i_2] [i_2] [i_1 - 2]), (((/* implicit */int) var_3))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_6 = 1; i_6 < 13; i_6 += 4) 
        {
            arr_23 [i_1] [i_1] |= ((/* implicit */int) (!(((/* implicit */_Bool) (short)7))));
            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) max((((/* implicit */long long int) -1895412697)), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)177))) | (-4340083713215665548LL))))))));
            var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_13 [i_6] [i_6 + 2] [i_1 + 2])) ? ((~(12149954563619059493ULL))) : (((/* implicit */unsigned long long int) arr_11 [i_1 + 3] [i_6 - 1] [i_1 + 3])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((var_11), (((/* implicit */unsigned long long int) arr_11 [i_1] [i_6 + 1] [i_6])))) != (arr_4 [i_6 + 2])))))));
        }
        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_8 = 0; i_8 < 15; i_8 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned short i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    var_18 *= ((/* implicit */_Bool) max((((((/* implicit */int) ((unsigned short) arr_8 [i_9] [i_8] [i_1]))) * (((/* implicit */int) ((signed char) arr_30 [i_9] [i_8] [i_7] [i_1]))))), (((/* implicit */int) ((_Bool) arr_13 [i_1 - 2] [i_1 + 1] [i_1])))));
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((int) ((((/* implicit */_Bool) max((arr_8 [i_1] [i_7] [i_9]), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_19 [i_9])))) : (max((arr_7 [i_1] [i_8]), (((/* implicit */unsigned long long int) arr_24 [i_1] [i_1] [i_1]))))))))));
                    /* LoopSeq 3 */
                    for (int i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        var_20 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_1] [i_7] [i_7] [i_7])) ? (((/* implicit */int) arr_22 [i_1] [i_8] [i_10])) : (((/* implicit */int) (unsigned char)18))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25221))) - (arr_7 [i_1] [i_1]))))) & (max((arr_32 [i_1] [i_7] [i_8]), (((/* implicit */unsigned long long int) ((short) arr_10 [i_10] [i_8] [i_1])))))));
                        arr_34 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_11) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-1)) == (((/* implicit */int) (unsigned char)238))))))))) ? (((/* implicit */unsigned long long int) (+(((arr_20 [i_10] [i_1]) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) arr_26 [i_7] [i_7] [i_8]))))))) : (((12447613452852216528ULL) - (((/* implicit */unsigned long long int) -589475880))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_11 = 3; i_11 < 14; i_11 += 4) 
                    {
                        var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (4340083713215665546LL)))) ? (var_1) : (((/* implicit */unsigned long long int) arr_11 [i_1 - 2] [i_1 - 2] [i_1 - 3]))));
                        arr_39 [i_11] [i_7] [i_8] [i_9] [i_11] = ((/* implicit */long long int) (short)127);
                    }
                    /* vectorizable */
                    for (short i_12 = 0; i_12 < 15; i_12 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((int) 4340083713215665555LL)))));
                        arr_43 [i_1] [i_7] [i_8] [i_9] [i_12] = ((/* implicit */unsigned char) ((arr_7 [i_1 + 1] [i_7]) - (arr_7 [i_1 + 1] [i_1 + 1])));
                    }
                }
                arr_44 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) -1872105401)) / (4340083713215665555LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_26 [i_1 + 1] [i_7] [i_8])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(6923702107477210961ULL)))))))));
                arr_45 [i_1] [i_8] [i_1] [i_1] &= ((/* implicit */unsigned long long int) ((var_0) + (((/* implicit */unsigned int) (((_Bool)1) ? (1282224683) : (((/* implicit */int) (short)110)))))));
                var_23 ^= ((/* implicit */_Bool) arr_13 [i_1] [i_7] [i_1 + 3]);
            }
            for (unsigned int i_13 = 0; i_13 < 15; i_13 += 4) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (arr_32 [i_1 - 2] [i_1 - 1] [i_1 - 3])));
                /* LoopSeq 1 */
                for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 1) 
                {
                    var_25 = ((/* implicit */short) min((((/* implicit */long long int) arr_10 [i_7] [i_13] [i_14])), (((((/* implicit */_Bool) arr_42 [i_1] [i_13] [i_13] [i_14] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((long long int) -1895412692))))));
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_14 [i_1] [i_1] [i_7] [i_7] [i_7] [i_7])), (((((/* implicit */long long int) ((/* implicit */int) var_8))) ^ (4340083713215665547LL)))))) ? (((/* implicit */unsigned long long int) (~(((unsigned int) -1484313850))))) : (((unsigned long long int) -577048512)))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 4) 
                    {
                        arr_52 [i_1] = ((/* implicit */unsigned char) min(((-(arr_42 [i_1 - 3] [i_1] [i_1 + 2] [(signed char)9] [i_14]))), (((/* implicit */unsigned long long int) arr_40 [i_1] [i_1 - 1] [i_1] [i_1] [i_1]))));
                        var_27 = ((/* implicit */long long int) arr_47 [i_15]);
                        var_28 = ((/* implicit */unsigned char) ((((max((((/* implicit */unsigned int) var_4)), (var_0))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_41 [i_1])) : (((/* implicit */int) (unsigned char)6))))))) | (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 4) 
                    {
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */int) arr_51 [i_1 - 1] [i_1 + 2] [i_1] [i_1 + 3] [i_1] [i_1 - 2])) - (((/* implicit */int) (signed char)127))));
                        var_30 ^= ((/* implicit */unsigned long long int) arr_53 [i_16] [i_1 - 1] [i_13] [i_1 - 1] [i_1 - 1] [i_1 - 1]);
                        var_31 = ((/* implicit */short) arr_38 [i_16] [i_16]);
                    }
                    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_1 - 2] [i_1 + 2] [i_1 + 1])) ? (arr_24 [i_1 + 3] [i_1 + 3] [i_1 - 2]) : (arr_24 [i_1 - 3] [i_1 + 1] [i_1 + 1])))) ? (arr_24 [i_1 + 3] [i_1 + 1] [i_1 + 3]) : (arr_24 [i_1 + 1] [i_1 - 3] [i_1 - 1])));
                }
                var_33 = ((/* implicit */_Bool) min((-577048512), (-577048512)));
                /* LoopSeq 1 */
                for (unsigned long long int i_17 = 3; i_17 < 12; i_17 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_18 = 1; i_18 < 12; i_18 += 4) 
                    {
                        var_34 = ((/* implicit */signed char) arr_6 [i_7] [i_7] [i_7]);
                        arr_59 [i_17] [i_17] [i_13] [i_17] = ((/* implicit */unsigned int) arr_27 [i_7] [i_17 + 2]);
                        arr_60 [i_17] [(signed char)13] [(signed char)13] [i_17 + 2] [i_17 + 1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (((/* implicit */int) arr_41 [i_1]))))) ? (((/* implicit */int) arr_30 [i_1] [i_7] [i_1] [i_7])) : ((~(((/* implicit */int) arr_30 [i_17] [i_17] [i_13] [i_17])))))), (((/* implicit */int) ((signed char) -4340083713215665528LL)))));
                    }
                    arr_61 [i_17] [i_7] [i_13] [i_17] = ((/* implicit */signed char) ((int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_10))))))));
                }
            }
            /* LoopNest 3 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (short i_20 = 3; i_20 < 13; i_20 += 4) 
                {
                    for (signed char i_21 = 1; i_21 < 13; i_21 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) ((arr_13 [i_19] [i_7] [i_1]) - (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_21]))))))))))));
                            var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) (-(17283337990290087304ULL))))));
                            var_37 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_21 + 1])) && (((/* implicit */_Bool) arr_63 [i_19] [0LL]))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_20] [i_7] [i_19] [i_20] [i_1 + 2])) ? (-4340083713215665518LL) : (((/* implicit */long long int) 1435791231U))))) ? (((/* implicit */int) var_2)) : (((((((/* implicit */int) arr_65 [i_1] [i_7] [i_19] [i_20] [i_20] [i_21])) + (2147483647))) >> (((arr_49 [i_1] [i_7] [i_7] [i_7]) - (2006008633)))))))));
                            var_38 = ((/* implicit */signed char) (unsigned char)237);
                        }
                    } 
                } 
            } 
            var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_58 [i_7])))) ? (arr_58 [i_7]) : (((((/* implicit */_Bool) var_0)) ? (arr_58 [i_7]) : (arr_58 [i_7])))));
        }
    }
}
