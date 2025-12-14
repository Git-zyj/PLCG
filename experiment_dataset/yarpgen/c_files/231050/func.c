/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231050
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_13 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (6127861569754076662LL))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_14 = ((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))) % (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) && (((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
            var_16 -= ((/* implicit */short) ((((((/* implicit */int) arr_4 [i_0])) ^ (var_2))) >= (((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (var_5)))));
        }
    }
    /* LoopSeq 2 */
    for (int i_2 = 2; i_2 < 15; i_2 += 3) 
    {
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_1))));
        var_18 ^= ((/* implicit */long long int) 10ULL);
    }
    /* vectorizable */
    for (unsigned short i_3 = 1; i_3 < 22; i_3 += 3) 
    {
        var_19 = ((/* implicit */long long int) var_0);
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            /* LoopNest 3 */
            for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
                            var_21 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 8208782734114319529ULL))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned char) var_0);
        }
        var_23 |= arr_13 [i_3 + 2] [i_3 + 1] [(signed char)8] [i_3];
        /* LoopNest 2 */
        for (unsigned int i_8 = 1; i_8 < 23; i_8 += 4) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    var_24 += ((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_3 + 2] [i_8 - 1] [i_9] [i_3 + 2])) & (((/* implicit */int) (_Bool)1))));
                    arr_28 [i_3] = ((/* implicit */unsigned char) (_Bool)1);
                    /* LoopSeq 4 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_3 - 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_15 [i_3 + 1]))));
                        /* LoopSeq 2 */
                        for (short i_11 = 2; i_11 < 23; i_11 += 2) 
                        {
                            var_26 *= ((/* implicit */unsigned short) ((unsigned char) (unsigned char)57));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) / (((/* implicit */int) var_8))));
                        }
                        for (short i_12 = 0; i_12 < 24; i_12 += 3) 
                        {
                            arr_36 [i_3] [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_20 [i_3 - 1] [i_3 - 1] [i_9] [i_10] [i_12]))));
                            arr_37 [(signed char)11] [i_8 - 1] [i_9] [i_9] [i_10] [i_3] = ((/* implicit */unsigned long long int) (-(var_5)));
                        }
                        arr_38 [i_3 + 2] [i_8] [19U] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) - (-46648747)));
                    }
                    for (short i_13 = 0; i_13 < 24; i_13 += 3) 
                    {
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (signed char)-51))));
                        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4)))))));
                        var_30 = ((/* implicit */unsigned long long int) ((short) arr_9 [i_8] [i_8 - 1]));
                        var_31 = ((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_3 - 1] [i_3 + 2]))));
                    }
                    for (unsigned int i_14 = 0; i_14 < 24; i_14 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_32 = ((/* implicit */_Bool) min((var_32), (((((/* implicit */int) var_8)) >= (((/* implicit */int) ((0ULL) > (((/* implicit */unsigned long long int) 6127861569754076662LL)))))))));
                            var_33 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (2005276916) : (((/* implicit */int) var_3))))) * (arr_7 [i_3]));
                            var_34 += ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_0))) || (((/* implicit */_Bool) ((var_1) & (((/* implicit */unsigned int) 1516410146)))))));
                        }
                        for (unsigned long long int i_16 = 4; i_16 < 22; i_16 += 3) 
                        {
                            var_35 = ((arr_35 [i_3] [i_3 + 2] [i_3 + 2] [i_16 - 3] [i_3 + 2]) == (((/* implicit */long long int) (~(((/* implicit */int) var_11))))));
                            var_36 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-6127861569754076658LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_12 [(signed char)4] [(signed char)4])))))) ? (((((/* implicit */int) var_6)) / (-1830670266))) : (((((/* implicit */int) var_4)) >> (((10054552153839817784ULL) - (10054552153839817762ULL)))))));
                        }
                        for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                        {
                            var_37 += ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) - (var_10)));
                            var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_27 [i_3] [i_3] [i_3] [i_3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : ((~(((/* implicit */int) var_3))))));
                            var_39 *= ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_17 + 1] [i_14]))) + ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_11 [i_3 + 2] [12]))));
                        }
                        /* LoopSeq 3 */
                        for (short i_18 = 1; i_18 < 22; i_18 += 3) 
                        {
                            var_40 = ((/* implicit */unsigned short) (!(((2518344649934412674LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                            var_41 *= ((/* implicit */int) ((10054552153839817784ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_23 [i_3 + 2]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23868)))))))));
                        }
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            arr_60 [i_3 + 1] [i_8 + 1] [i_9] [i_14] [i_3] = ((/* implicit */_Bool) (-(arr_11 [i_9] [i_3])));
                            arr_61 [i_3 + 1] [i_3] [i_3 + 2] [i_3] [i_3 + 2] [i_3 + 1] = arr_25 [i_14];
                            var_42 = ((/* implicit */unsigned long long int) ((var_5) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [(short)9] [i_8] [i_8] [(short)9])))))));
                        }
                        for (short i_20 = 0; i_20 < 24; i_20 += 3) 
                        {
                            var_43 += (_Bool)1;
                            var_44 = ((/* implicit */_Bool) ((int) var_8));
                            var_45 = var_1;
                            var_46 = ((/* implicit */signed char) ((((/* implicit */unsigned int) var_5)) | (arr_27 [i_3 + 1] [i_3 + 1] [i_3] [i_3])));
                            arr_65 [i_9] [i_8 + 1] [i_3] [i_8 + 1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_41 [i_3 + 1] [i_8 + 1] [i_3])) ? (((/* implicit */int) arr_41 [i_3 + 2] [i_8 - 1] [i_3])) : (((/* implicit */int) var_12))));
                        }
                        var_47 = ((/* implicit */_Bool) ((arr_20 [(_Bool)1] [i_3 + 1] [i_9] [i_14] [i_3]) ? (((/* implicit */int) var_11)) : (arr_34 [i_3 + 2] [i_3 + 1] [i_3 + 1] [i_8 - 1] [i_3])));
                        var_48 = ((/* implicit */unsigned short) ((short) var_10));
                    }
                    for (short i_21 = 1; i_21 < 22; i_21 += 4) 
                    {
                        var_49 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_3 + 2] [i_21 + 2] [i_9] [i_3 + 2] [i_21 + 2])) ? (((((/* implicit */int) (short)-23854)) ^ (((/* implicit */int) (short)-23856)))) : ((-(((/* implicit */int) arr_13 [i_3] [i_8 - 1] [i_3] [i_8 - 1]))))));
                        var_50 = ((/* implicit */short) (~(((/* implicit */int) arr_30 [i_3]))));
                    }
                }
            } 
        } 
        var_51 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)180))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_22 = 2; i_22 < 17; i_22 += 3) 
    {
        var_52 = ((/* implicit */unsigned long long int) min((var_52), (((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) arr_19 [i_22 + 1] [i_22 - 2] [i_22 + 2] [i_22 - 1])), (arr_27 [(_Bool)1] [i_22] [0U] [i_22]))))))));
        var_53 = ((/* implicit */short) (((+(((((/* implicit */int) arr_58 [i_22] [i_22] [i_22] [i_22] [i_22 - 1] [i_22 - 2] [i_22])) - (((/* implicit */int) var_11)))))) > (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_53 [i_22 + 1] [i_22] [i_22] [i_22 + 2])) : (((/* implicit */int) arr_53 [i_22] [i_22] [i_22] [i_22 + 2]))))));
    }
    /* vectorizable */
    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
    {
        var_54 = ((/* implicit */int) ((unsigned int) var_0));
        var_55 = ((/* implicit */int) var_6);
        var_56 = ((/* implicit */_Bool) max((var_56), (((((/* implicit */int) arr_69 [0U] [i_23])) >= (((/* implicit */int) (!(((/* implicit */_Bool) 508244553U)))))))));
    }
    var_57 = ((/* implicit */_Bool) var_0);
}
