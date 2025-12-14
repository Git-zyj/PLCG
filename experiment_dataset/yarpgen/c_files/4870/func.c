/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4870
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
    var_13 = ((/* implicit */signed char) (unsigned char)7);
    var_14 = ((/* implicit */unsigned long long int) (signed char)-92);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((unsigned char) ((arr_1 [i_0 + 2]) < (8803768371060516335ULL))));
        arr_2 [i_0] = ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (max(((+(var_1))), (((/* implicit */unsigned int) (+(-1854994135)))))) : (((((/* implicit */_Bool) 2906829464U)) ? (1388137835U) : (2906829464U))));
        var_16 -= (short)21947;
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_3 = 3; i_3 < 13; i_3 += 2) 
                {
                    var_17 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) arr_6 [i_0 - 1] [(short)14] [i_2])) & (((/* implicit */int) var_4)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 2; i_4 < 11; i_4 += 1) 
                    {
                        arr_13 [i_0] |= ((/* implicit */unsigned long long int) (short)255);
                        var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2906829452U)) ? (((/* implicit */int) ((1152921504606846976ULL) <= (arr_7 [(unsigned short)3] [i_4 + 4] [i_4 + 4] [i_3 + 2])))) : (((/* implicit */int) ((unsigned short) 2906829456U)))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_17 [i_1] = (~(var_10));
                        var_19 = ((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) (unsigned char)22)), (1388137831U)))));
                    }
                }
                for (int i_6 = 0; i_6 < 15; i_6 += 3) 
                {
                    arr_20 [i_0 + 3] [i_1] [i_2 - 1] [i_6] = ((/* implicit */long long int) 2906829475U);
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_2))));
                }
                arr_21 [(signed char)12] [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */signed char) (-(max((((/* implicit */long long int) ((7058164344613083822ULL) <= (((/* implicit */unsigned long long int) var_1))))), (2045492071842750718LL)))));
                /* LoopSeq 3 */
                for (unsigned long long int i_7 = 2; i_7 < 14; i_7 += 1) 
                {
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((16126583734429470722ULL), (((/* implicit */unsigned long long int) 3918555731U))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1388137842U)) && (((/* implicit */_Bool) (unsigned char)249))))) : (((((/* implicit */_Bool) (short)17738)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((unsigned char) arr_7 [i_0 + 3] [i_2 + 1] [i_7] [i_7 - 2]))) : (((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_11))) > (((/* implicit */int) arr_15 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_7 + 1] [i_2])))))));
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [(short)6] [i_7]))))) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [(short)4] [i_1] [i_2] [i_7])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-122))) : (2906829460U))))))))))));
                    arr_26 [i_0] [i_1] [i_1] [i_7] = ((/* implicit */signed char) 4244593062U);
                }
                /* vectorizable */
                for (int i_8 = 2; i_8 < 14; i_8 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_9 = 2; i_9 < 12; i_9 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [6ULL] [i_1] [i_2 - 1] [i_1]))) + (2821279421880453543ULL)))));
                        arr_31 [(short)13] = ((/* implicit */unsigned int) arr_10 [i_0 + 1] [i_2] [i_8 + 1] [i_0 + 1]);
                        arr_32 [i_0] [i_1] [i_2] [i_8 - 2] [i_9] = ((/* implicit */unsigned char) arr_22 [i_0] [i_0] [i_1] [i_2] [i_8 - 1] [i_9]);
                    }
                    /* LoopSeq 1 */
                    for (long long int i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        arr_35 [i_0] [i_0] [(signed char)1] [i_2] [i_8 - 1] [i_8] [i_8 - 1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_15 [i_2 + 1] [i_2] [i_2] [i_2] [i_2]))));
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)41946)))))));
                    }
                    var_25 *= ((/* implicit */unsigned long long int) 2045492071842750718LL);
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        arr_38 [i_0] [i_1] [i_0] [i_8] [i_11] = ((/* implicit */short) ((arr_33 [(unsigned char)6] [i_1] [i_2] [i_0 + 1] [(unsigned char)6] [i_8]) & (arr_33 [i_8] [i_8] [i_8] [i_0 - 1] [i_11] [i_8])));
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((((/* implicit */_Bool) (~(2118627152U)))) ? (((/* implicit */unsigned long long int) arr_0 [i_0 - 1])) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_7)) : (var_6)))))));
                        arr_39 [i_2 - 1] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)1575)) << (((((/* implicit */int) var_4)) + (12096)))));
                        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) arr_9 [i_1]))));
                        arr_40 [i_0] [i_2] [4LL] [i_8] [i_11] [i_8 + 1] [i_0] = (~(((/* implicit */int) (signed char)118)));
                    }
                    arr_41 [12] = arr_29 [i_0 + 4] [i_1] [i_2] [i_8 + 1] [i_1] [i_0];
                }
                /* vectorizable */
                for (unsigned long long int i_12 = 3; i_12 < 13; i_12 += 4) 
                {
                    var_28 *= ((/* implicit */_Bool) ((unsigned long long int) arr_37 [i_0] [i_1] [i_2 + 1] [i_12] [i_2 + 1]));
                    arr_46 [i_12] [i_12] = ((/* implicit */signed char) ((unsigned long long int) arr_1 [i_12 + 1]));
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((long long int) 0U)))));
                }
                var_30 -= ((/* implicit */unsigned char) ((unsigned long long int) max((-581615569), (((/* implicit */int) (signed char)-75)))));
            }
            for (int i_13 = 0; i_13 < 15; i_13 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_14 = 1; i_14 < 13; i_14 += 2) 
                {
                    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_0 + 2] [i_14 + 1] [i_14] [0ULL])) ? (arr_27 [i_0 + 4] [i_14 - 1] [i_14] [i_14]) : (arr_27 [i_0 + 3] [i_14 + 1] [3] [i_14])));
                    var_32 += ((/* implicit */unsigned long long int) (_Bool)1);
                }
                var_33 = ((/* implicit */unsigned long long int) max((var_33), (0ULL)));
            }
            for (short i_15 = 0; i_15 < 15; i_15 += 1) 
            {
                arr_55 [i_0] [i_15] [i_15] = ((/* implicit */unsigned char) ((int) var_12));
                arr_56 [i_0 + 2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((int) ((_Bool) arr_4 [i_0] [i_0])))) != (max((-2045492071842750718LL), (((/* implicit */long long int) var_4))))));
                arr_57 [i_0 + 2] [i_1] [i_1] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)251), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)4238)) : ((~(((/* implicit */int) (short)255))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61297))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-41))) : (var_11)))) ? (arr_22 [i_0 + 3] [i_1] [14U] [i_1] [(short)3] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)246)))))));
                var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) <= (arr_22 [i_0 + 4] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0 + 4])))), ((short)-17738))))));
            }
            arr_58 [i_1] [(unsigned char)12] = (+(((/* implicit */int) (_Bool)1)));
        }
        /* vectorizable */
        for (unsigned char i_16 = 0; i_16 < 15; i_16 += 3) 
        {
            arr_61 [i_0] [i_16] = ((/* implicit */int) ((unsigned short) var_0));
            var_35 = (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)32224))))));
            arr_62 [i_0] [i_16] = ((/* implicit */short) (signed char)-1);
        }
    }
    var_36 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (unsigned char)0)), (max((16360454158329957712ULL), (((/* implicit */unsigned long long int) var_1))))));
}
