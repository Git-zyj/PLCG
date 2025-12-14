/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53702
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
    var_13 = var_4;
    var_14 = var_10;
    var_15 = ((/* implicit */signed char) var_7);
    /* LoopSeq 3 */
    for (long long int i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_7 [i_0 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (var_3)))) ? (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) var_11)))) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (unsigned char)252)));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */long long int) (!(arr_0 [i_0] [i_3])));
                        arr_11 [i_3] [i_1] [i_2] [i_3] = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_5 [11] [i_1] [i_2] [i_3])), ((+(arr_4 [i_0 - 1] [(_Bool)1] [i_2])))));
                        var_17 = ((/* implicit */long long int) max((var_17), ((+(-9223372036854775807LL)))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
                        {
                            arr_18 [i_0] [i_0 + 1] [i_2] [i_5] [i_5] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (~(-9223372036854775807LL)))) && (((/* implicit */_Bool) var_2)))));
                            var_18 ^= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_6 [i_2] [i_4] [i_4])) < (((/* implicit */int) ((0U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_5]))))))))) < (min((var_3), (((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0] [i_0] [i_2])) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) var_6))))))));
                            arr_19 [i_5] = var_9;
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_23 [i_0] [i_0 + 1] [i_0 - 2] [i_0 - 1] = min((((/* implicit */unsigned int) var_11)), (arr_12 [i_0]));
                            var_19 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((arr_14 [0LL] [i_1] [i_2] [i_4]) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_9 [3U] [i_2] [i_2] [i_6]))))), (((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_15 [i_6] [i_2] [i_2] [i_2] [(unsigned char)8]))))) < (((/* implicit */unsigned long long int) var_2))));
                            arr_24 [i_0] = ((/* implicit */unsigned char) ((max((min((arr_15 [4LL] [(_Bool)1] [i_2] [i_2] [4LL]), (((/* implicit */unsigned long long int) (unsigned char)12)))), (((/* implicit */unsigned long long int) (~(var_3)))))) < (((/* implicit */unsigned long long int) max((min((var_12), (((/* implicit */unsigned int) (unsigned char)150)))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), (var_5)))))))));
                            arr_25 [i_0] [i_0] [i_0 - 1] [i_0] [13U] [i_0] = ((/* implicit */short) (!((!(((/* implicit */_Bool) (+(arr_4 [i_6] [i_0] [i_0]))))))));
                            arr_26 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] = ((unsigned char) var_12);
                        }
                        for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */int) (((+(((/* implicit */int) arr_14 [i_7] [(unsigned short)7] [(_Bool)0] [i_1])))) < (((int) var_3))))) - (max((((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) var_8)) : (var_3))), (((/* implicit */int) arr_10 [(signed char)6] [i_0 + 1] [i_0 - 1] [i_2])))))))));
                            arr_31 [(unsigned char)0] [(unsigned char)0] [i_2] [i_4] [i_7] = ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) arr_20 [i_0] [i_4] [i_0 - 2] [i_4] [2U] [i_1])))));
                            var_21 = ((/* implicit */unsigned char) (((+(((unsigned int) var_9)))) - (min((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (var_2))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -9223372036854775795LL)) ? (var_3) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_7])))))))));
                        }
                        for (long long int i_8 = 1; i_8 < 13; i_8 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned int) max(((unsigned char)209), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4805008792608224201ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))) && (((/* implicit */_Bool) arr_29 [i_8] [i_8] [i_4] [(unsigned short)8] [i_0] [i_1] [i_0])))))));
                            arr_34 [i_0] [i_8] [i_0] [11U] [i_0] [i_0 - 3] = 3;
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((arr_9 [i_0 - 2] [i_1] [(_Bool)1] [i_8]), (((/* implicit */short) var_1)))))) | (((-9223372036854775807LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 - 3] [i_8 - 1] [i_8 + 1])))))));
                            var_24 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((arr_28 [i_0] [i_1] [10LL] [i_2] [i_8]) >> (((/* implicit */int) var_8)))) > (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_5)))))))));
                            var_25 = ((/* implicit */unsigned int) min((min((arr_32 [i_0] [i_0 - 2] [i_8 + 1] [i_8 + 1] [i_0 - 2]), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (var_3))))), (((/* implicit */int) arr_1 [i_8]))));
                        }
                        var_26 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) var_8))))) & (((-9223372036854775807LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252)))))))) ? (((/* implicit */int) var_0)) : (max((((((/* implicit */int) var_11)) >> (((((/* implicit */int) (signed char)127)) - (105))))), (((/* implicit */int) (unsigned char)247))))));
                        /* LoopSeq 3 */
                        for (signed char i_9 = 0; i_9 < 14; i_9 += 1) 
                        {
                            var_27 = ((/* implicit */signed char) ((((((unsigned int) 15440672722556186988ULL)) + (((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_0]))))))));
                            arr_39 [i_0] [i_1] [i_2] [12U] [i_9] = ((/* implicit */long long int) var_0);
                            arr_40 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */long long int) (+(min((4294967292U), (((/* implicit */unsigned int) (unsigned char)229))))));
                            arr_41 [i_0 - 1] [i_0] [i_1] [i_1] [i_4] [0LL] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_22 [i_0 + 1]) - (((/* implicit */unsigned int) (-(((/* implicit */int) (short)6)))))))) ? (arr_8 [i_0 - 2] [i_2] [i_4] [i_9]) : (((/* implicit */long long int) (+(((/* implicit */int) max((var_8), (var_0)))))))));
                        }
                        for (long long int i_10 = 0; i_10 < 14; i_10 += 1) 
                        {
                            arr_45 [13LL] [i_1] [i_1] [i_1] [i_10] = ((/* implicit */unsigned short) var_8);
                            var_28 = ((((/* implicit */int) var_5)) <= ((+(((/* implicit */int) min((((/* implicit */unsigned char) var_6)), (var_9)))))));
                            var_29 = arr_21 [(unsigned char)6] [i_1] [i_1] [i_1] [i_2] [i_4] [i_10];
                            arr_46 [i_10] = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) var_8)))));
                            var_30 = ((/* implicit */long long int) (~(((/* implicit */int) min((arr_9 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 3]), (((/* implicit */short) arr_37 [i_0 - 4] [9U] [i_0] [i_4] [i_0 + 1])))))));
                        }
                        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                        {
                            arr_51 [i_11 + 1] [i_11] [i_2] [i_11] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                            var_31 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_0 [i_0 - 3] [i_0 - 1])))));
                        }
                        arr_52 [i_1] = ((/* implicit */_Bool) (~(((arr_6 [i_0] [i_1] [i_2]) ? (5015694399483212497LL) : (((/* implicit */long long int) 157984598U))))));
                        arr_53 [i_4] [i_2] [i_1] [i_1] [3] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)218)) ? (((/* implicit */int) var_4)) : (var_3)))), (-7444559618573631618LL)))) || (((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned short)61905), (((/* implicit */unsigned short) arr_38 [7LL] [i_1] [i_2] [i_2] [12U] [i_4]))))) & (((/* implicit */int) arr_2 [i_0])))))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 14; i_12 += 1) 
                    {
                        var_32 = ((max((arr_50 [i_12] [i_2] [i_0 - 2] [i_2] [i_0]), (((/* implicit */unsigned long long int) var_4)))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_50 [i_0 - 3] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))));
                        var_33 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) < (((unsigned int) min((((/* implicit */unsigned short) arr_9 [i_0] [i_2] [i_2] [i_12])), (var_5))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 0; i_13 < 14; i_13 += 4) 
                        {
                            var_34 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_48 [i_13] [i_13] [i_2] [i_12] [i_13])) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_9)))) : (((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */int) (signed char)-82)) : (((/* implicit */int) var_5))))))));
                            arr_58 [(unsigned char)11] [i_0 - 2] [3LL] [i_0 - 2] [i_12] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (arr_8 [i_1] [i_2] [i_0 - 1] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_1] [i_1] [i_13])) ? (((/* implicit */int) arr_56 [i_0 - 1] [i_13])) : (((/* implicit */int) arr_13 [i_0 - 1] [i_12] [i_0 - 1] [i_12])))) : (((/* implicit */int) var_5))));
                        }
                    }
                }
            } 
        } 
        arr_59 [i_0] = ((/* implicit */unsigned long long int) ((_Bool) var_12));
        var_35 = ((/* implicit */long long int) ((((unsigned long long int) (~(4294967295U)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) min((arr_2 [i_0]), (((/* implicit */unsigned short) var_7)))))))));
    }
    for (signed char i_14 = 0; i_14 < 12; i_14 += 4) 
    {
        arr_62 [i_14] = ((((/* implicit */int) (!(((_Bool) arr_3 [i_14]))))) - (((((/* implicit */int) arr_57 [i_14] [i_14] [i_14] [i_14] [2] [i_14])) | (((/* implicit */int) var_6)))));
        arr_63 [i_14] [i_14] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_61 [i_14] [i_14])) == (((/* implicit */int) var_8)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_10))))) < (((unsigned int) var_5))))) : (((/* implicit */int) var_1))));
    }
    for (signed char i_15 = 0; i_15 < 11; i_15 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_16 = 0; i_16 < 11; i_16 += 3) 
        {
            arr_69 [i_15] [i_16] [i_16] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (_Bool)1)), ((-(((((/* implicit */_Bool) arr_38 [i_15] [i_16] [i_16] [i_15] [i_16] [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_15] [i_16] [i_15] [(_Bool)0] [i_16] [i_16]))) : (-1013405904199571710LL)))))));
            var_36 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))), (((((/* implicit */_Bool) (short)885)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) % (((/* implicit */int) var_5))))) : (((157984615U) + (4294967295U)))))));
        }
        /* vectorizable */
        for (long long int i_17 = 0; i_17 < 11; i_17 += 2) /* same iter space */
        {
            arr_73 [i_17] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_15] [i_15] [i_15] [i_17] [(unsigned short)7])))))) - (arr_33 [i_17] [i_17] [(_Bool)1] [6] [i_17] [i_17] [i_17])));
            var_37 = ((/* implicit */int) var_11);
            var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((_Bool) arr_13 [i_15] [i_15] [1] [i_15])))));
            /* LoopSeq 3 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned int i_19 = 0; i_19 < 11; i_19 += 1) 
                {
                    arr_79 [i_18] [i_17] [i_18] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) | (((/* implicit */int) (unsigned char)247))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_20 = 0; i_20 < 11; i_20 += 3) 
                    {
                        var_39 = ((/* implicit */signed char) (+(((/* implicit */int) arr_57 [i_20] [i_19] [i_18] [i_15] [i_15] [i_15]))));
                        arr_82 [i_18] [i_17] [i_18] [i_18] [i_17] [i_18] = ((/* implicit */long long int) ((arr_20 [i_15] [i_17] [i_15] [i_18] [(_Bool)1] [i_20]) ? (((/* implicit */int) ((_Bool) 1944207975))) : (((((/* implicit */int) arr_43 [i_18])) & (((/* implicit */int) var_11))))));
                        var_40 = ((/* implicit */long long int) ((((var_4) ? (((/* implicit */int) (_Bool)1)) : (var_3))) < (var_3)));
                    }
                    arr_83 [i_18] [4] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_11))));
                    arr_84 [i_15] [i_15] [i_15] [i_15] [i_18] [i_15] = ((/* implicit */_Bool) ((arr_55 [i_15] [i_15] [i_15] [i_15]) ? (((/* implicit */int) arr_35 [i_15] [i_15])) : (((/* implicit */int) arr_55 [i_18] [i_17] [i_18] [i_19]))));
                }
                for (signed char i_21 = 0; i_21 < 11; i_21 += 4) 
                {
                    var_41 = ((/* implicit */unsigned long long int) ((((var_3) | (((/* implicit */int) arr_6 [i_15] [i_17] [(_Bool)1])))) < (1615079368)));
                    arr_89 [i_21] [i_18] [i_15] = ((/* implicit */unsigned char) var_5);
                }
                arr_90 [i_18] [i_18] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_15] [12] [i_18] [i_17])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_17] [i_18]))))) >= (arr_16 [i_18] [i_15])));
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
            {
                arr_93 [i_22] [i_17] [i_15] = ((/* implicit */unsigned long long int) ((arr_66 [i_17]) ? (var_12) : (var_12)));
                var_42 = ((/* implicit */signed char) (+(((-7801450394747360171LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
            }
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
            {
                var_43 = ((/* implicit */_Bool) ((((/* implicit */int) arr_56 [i_23] [i_15])) / (((/* implicit */int) arr_2 [i_15]))));
                var_44 = ((/* implicit */int) ((((var_2) + (((/* implicit */unsigned int) 1836024316)))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 17U))))))));
            }
            /* LoopNest 2 */
            for (unsigned char i_24 = 0; i_24 < 11; i_24 += 2) 
            {
                for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
                {
                    {
                        var_45 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))));
                        arr_103 [i_17] [i_17] [(unsigned char)1] = ((/* implicit */signed char) 1023U);
                        var_46 = ((/* implicit */long long int) ((var_0) && (((/* implicit */_Bool) arr_48 [i_24] [i_25] [i_25] [i_25 + 1] [i_25]))));
                        var_47 -= ((/* implicit */signed char) ((((var_4) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_14 [i_15] [i_25 + 1] [(unsigned char)13] [i_25])))) > ((~(((/* implicit */int) var_10))))));
                    }
                } 
            } 
        }
        for (long long int i_26 = 0; i_26 < 11; i_26 += 2) /* same iter space */
        {
            var_48 = ((/* implicit */unsigned int) min((var_48), (((/* implicit */unsigned int) var_10))));
            var_49 = ((/* implicit */unsigned char) var_0);
            arr_106 [i_15] [i_26] [i_15] = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */int) var_5)) : (max((var_3), (((/* implicit */int) (unsigned char)236))))))), ((+(var_12))));
            arr_107 [(signed char)7] [i_26] [i_26] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) 4522454466815427148LL))) ? (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_14 [i_15] [i_15] [i_15] [i_15])))) : (((/* implicit */int) min(((_Bool)1), (arr_78 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26]))))));
            arr_108 [i_26] [i_26] = ((/* implicit */unsigned short) arr_9 [i_26] [i_26] [i_15] [i_15]);
        }
        var_50 = ((/* implicit */signed char) max(((-9223372036854775807LL - 1LL)), (((long long int) (!(((/* implicit */_Bool) 0)))))));
    }
    var_51 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) var_7)))))) - ((+(min((((/* implicit */long long int) var_9)), (17LL)))))));
}
