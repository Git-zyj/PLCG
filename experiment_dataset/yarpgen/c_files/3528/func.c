/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3528
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
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((unsigned char) ((((((long long int) var_7)) + (9223372036854775807LL))) >> (((/* implicit */int) min((arr_1 [i_3] [i_0 + 1]), (arr_1 [i_1] [i_2]))))))))));
                            var_13 = ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4335410785577793071ULL)))))) * ((-(arr_7 [16U] [(unsigned short)2] [(unsigned short)2] [i_3] [2U] [(signed char)8]))))), (((/* implicit */unsigned int) (~(var_3))))));
                            var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)215))))) : (arr_3 [i_1 + 1])))) ? (((arr_4 [i_0 + 1] [i_3]) << (((arr_9 [i_2] [i_1 + 1] [i_0 + 1] [i_0 - 2]) - (1245940387U))))) : (((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_2 [i_3])))))))));
                            var_15 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) 1175103854)) % (min((arr_7 [11U] [i_1 - 1] [i_2] [4ULL] [i_3] [i_3]), (((/* implicit */unsigned int) 1175103854))))))));
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) arr_1 [i_2] [i_2]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 2; i_4 < 22; i_4 += 1) 
                {
                    for (unsigned int i_5 = 1; i_5 < 22; i_5 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_0] [i_0] [i_0 - 1] [i_0]))))) ? (((((((/* implicit */int) arr_6 [i_1 - 1])) + (2147483647))) >> (((1024214557U) - (1024214535U))))) : (((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) (signed char)(-127 - 1))))))))));
                            arr_17 [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */long long int) 1175103837)) : (-9223372036854775791LL))) << (((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_4 - 1] [i_0])) ? (arr_9 [i_0 - 2] [i_0 - 2] [i_0] [i_0]) : (arr_9 [i_0] [i_1] [i_4 - 1] [i_5 - 1]))) - (1245940407U)))));
                            var_18 = ((/* implicit */signed char) min((min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))))), (min((var_9), (var_9))))), (arr_5 [i_0] [i_1] [i_4] [i_5 - 1])));
                            arr_18 [(unsigned char)8] [i_0] [i_0] [i_5] [(unsigned char)8] [i_1] |= ((/* implicit */signed char) (+(((int) ((short) -8148305526549559348LL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
    {
        for (signed char i_7 = 2; i_7 < 10; i_7 += 3) 
        {
            for (signed char i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 1; i_9 < 11; i_9 += 1) 
                    {
                        for (signed char i_10 = 1; i_10 < 10; i_10 += 1) 
                        {
                            {
                                arr_34 [i_6] [i_7] [i_7] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [(unsigned short)8])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_9 [i_7 + 2] [i_7 + 1] [i_8] [i_9 + 1])))) : (arr_14 [i_7 - 1] [(signed char)11] [i_9] [i_10])));
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 1175103823)))) ? (var_8) : (min((var_2), (((/* implicit */unsigned int) var_3))))))) ? (((((/* implicit */_Bool) min((1175103837), (-248800995)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))) : ((~(var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(-248800995))))))))));
                                arr_35 [i_6] [i_6] [i_7] [i_9] [i_7] [i_7] [1LL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1175103854))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        for (int i_12 = 0; i_12 < 12; i_12 += 2) 
                        {
                            {
                                var_20 &= ((/* implicit */signed char) min((((/* implicit */unsigned char) arr_37 [(signed char)2] [(signed char)2] [i_12] [10U])), (arr_36 [i_6] [i_6] [i_6] [i_6] [(short)7] [(unsigned char)2])));
                                var_21 |= ((((int) arr_31 [i_7] [i_7 - 1] [i_7 - 2] [i_7 - 1] [(unsigned short)11])) + (((/* implicit */int) ((-9223372036854775787LL) != (((/* implicit */long long int) arr_4 [i_7 - 1] [i_7]))))));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */int) var_1)) > (max((((((/* implicit */int) arr_1 [(unsigned short)13] [0U])) | (((/* implicit */int) arr_40 [i_6] [i_6] [i_7] [i_6] [i_12])))), (((/* implicit */int) (unsigned char)124))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        for (unsigned short i_14 = 0; i_14 < 12; i_14 += 1) 
                        {
                            {
                                arr_48 [i_6] [i_7] [i_8] [i_7] [i_14] = ((/* implicit */signed char) (+(((int) ((signed char) var_1)))));
                                arr_49 [(signed char)1] [i_7] [i_7] [i_7 - 1] [i_7] [i_7] = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (-1175103837)));
                                var_23 = ((/* implicit */signed char) ((((unsigned int) ((((/* implicit */_Bool) var_7)) ? (arr_23 [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) == (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)203))))) * (min((((/* implicit */int) var_10)), (var_0))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_15 = 0; i_15 < 12; i_15 += 1) 
                    {
                        for (int i_16 = 0; i_16 < 12; i_16 += 2) 
                        {
                            {
                                arr_54 [(unsigned short)9] [i_7] [i_7] [8LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)42)) - (-1175103855)))) ? (arr_24 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)94)))))))))));
                                arr_55 [i_6] [i_7] [11U] [i_7] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)69)) ? (((/* implicit */int) (signed char)5)) : ((+(((/* implicit */int) (unsigned char)0))))))) / (min((-6644839368586637153LL), (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_7] [(short)22])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_17 = 1; i_17 < 23; i_17 += 1) 
    {
        for (unsigned char i_18 = 2; i_18 < 23; i_18 += 2) 
        {
            for (unsigned int i_19 = 0; i_19 < 24; i_19 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_20 = 2; i_20 < 21; i_20 += 3) 
                    {
                        for (unsigned int i_21 = 0; i_21 < 24; i_21 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1175103830)))))));
                                var_26 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (min((-6644839368586637177LL), (((/* implicit */long long int) (unsigned char)6)))) : (((/* implicit */long long int) min(((+(var_0))), (((/* implicit */int) var_10)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_22 = 1; i_22 < 23; i_22 += 4) 
                    {
                        for (unsigned int i_23 = 0; i_23 < 24; i_23 += 4) 
                        {
                            {
                                var_27 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((var_0) < (((/* implicit */int) var_1)))))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)96)) <= (((/* implicit */int) (signed char)-70))))) | (((((/* implicit */_Bool) var_4)) ? (arr_60 [i_17] [(short)8]) : (((/* implicit */int) var_10))))))) : (var_5)));
                                arr_75 [i_17] [i_22] [(unsigned short)18] [(short)15] [i_17] = ((/* implicit */short) min(((~(((unsigned int) -6644839368586637152LL)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6644839368586637161LL)) ? (16084191515086843152ULL) : (((/* implicit */unsigned long long int) var_0))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_66 [i_17] [i_18] [i_19]) : (var_4)))))))));
                                arr_76 [i_17] [(unsigned char)16] = ((/* implicit */signed char) var_6);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_24 = 0; i_24 < 11; i_24 += 3) 
    {
        for (unsigned int i_25 = 4; i_25 < 9; i_25 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_26 = 2; i_26 < 10; i_26 += 2) 
                {
                    for (signed char i_27 = 0; i_27 < 11; i_27 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */short) arr_59 [i_24] [20] [i_26]);
                            arr_85 [i_24] [2U] [i_27] = ((/* implicit */short) min((min((((((/* implicit */_Bool) 0U)) ? (16445019486468272559ULL) : (((/* implicit */unsigned long long int) 1358488250U)))), (((((/* implicit */_Bool) arr_4 [0U] [i_27])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_24]))) : (arr_29 [i_25 - 4] [i_26] [i_25 - 4] [i_24] [i_24] [i_24]))))), (((/* implicit */unsigned long long int) min((arr_23 [i_26 - 2]), (((((/* implicit */_Bool) arr_23 [i_24])) ? (arr_47 [i_24] [i_25 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_83 [i_26] [i_27]))))))))));
                            var_29 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) (~(-2147483647)))))));
                            var_30 = ((/* implicit */unsigned char) 16445019486468272554ULL);
                            var_31 = ((/* implicit */signed char) ((max((1032634583U), (min((var_4), (((/* implicit */unsigned int) (unsigned char)186)))))) < (arr_3 [i_24])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_28 = 1; i_28 < 8; i_28 += 4) 
                {
                    for (unsigned long long int i_29 = 0; i_29 < 11; i_29 += 2) 
                    {
                        {
                            var_32 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) -6644839368586637161LL)) ? (((/* implicit */int) (unsigned short)62026)) : (1956965747)));
                            arr_90 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1032634583U))));
                            arr_91 [i_24] [i_24] [i_28] = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) ((unsigned int) (signed char)94))), (((6644839368586637189LL) << (((/* implicit */int) (unsigned char)0)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)19)) || (((/* implicit */_Bool) 1994696716888642844LL)))))));
                            arr_92 [i_24] [i_25] [i_24] [i_29] = ((/* implicit */short) arr_50 [i_24] [i_25 + 1] [i_24] [(unsigned char)7]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_30 = 0; i_30 < 11; i_30 += 2) 
                {
                    for (unsigned int i_31 = 0; i_31 < 11; i_31 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) -2069482973))));
                            arr_98 [i_31] [i_24] [(unsigned char)8] [i_24] [4LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_25 - 3] [(unsigned char)0] [i_25 - 3] [i_31] [(short)7])) ? (((/* implicit */unsigned int) ((arr_21 [i_30]) >> (((((/* implicit */int) var_10)) - (96)))))) : (((((/* implicit */_Bool) (signed char)122)) ? (arr_65 [i_24] [i_24] [i_24] [i_31]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_86 [i_24])))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) 2069482973))))))) : (-6584175750758339818LL)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_32 = 1; i_32 < 9; i_32 += 1) 
                {
                    for (unsigned char i_33 = 0; i_33 < 11; i_33 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_93 [i_24] [i_32] [i_33]))))) != (((/* implicit */int) ((4804003412004430843ULL) != (((/* implicit */unsigned long long int) 8060792559611252724LL)))))))), (min((min((((/* implicit */unsigned long long int) var_0)), (arr_31 [i_24] [i_25] [i_24] [(unsigned char)10] [i_33]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) | (((/* implicit */int) arr_77 [8ULL] [i_25 - 1])))))))));
                            arr_104 [i_33] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_101 [i_32]))));
                            arr_105 [8LL] [i_25] [i_24] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_69 [i_24] [i_25] [i_32] [i_32] [i_25])) ? (arr_97 [i_24] [i_24] [5U] [i_24]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_24] [6U] [i_32] [i_33])))))))))) != (((((/* implicit */long long int) ((/* implicit */int) arr_74 [i_25 - 3] [(signed char)10] [i_32 - 1] [i_32] [i_32 + 2] [i_33]))) % (max((-3570616249302281170LL), (((/* implicit */long long int) arr_47 [i_25] [i_32]))))))));
                            arr_106 [i_24] [i_25] [i_25] [i_25] [i_25 - 2] = min((((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_32] [i_32 + 1] [i_32 + 1] [i_32 + 2])) * (((/* implicit */int) arr_12 [19ULL] [i_32 + 1] [i_32 + 1] [i_32 + 2]))))), (((((/* implicit */_Bool) 16445019486468272551ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)238)))))) : (-3570616249302281149LL))));
                        }
                    } 
                } 
            }
        } 
    } 
}
