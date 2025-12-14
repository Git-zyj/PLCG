/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42237
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
    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) var_9))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_12 *= ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_0] [i_0]))));
        arr_3 [i_0] = ((/* implicit */int) (unsigned char)24);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                {
                    var_13 *= ((/* implicit */unsigned char) ((int) arr_6 [i_0]));
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 9; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 8; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) arr_15 [i_3] [i_3] [i_0] [i_1] [i_0]))));
                                arr_16 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */int) arr_14 [i_4 + 3] [i_3 - 3] [i_3 - 3] [i_2 - 1] [i_2 - 1] [i_1]);
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_3 + 1])) ? (((((/* implicit */int) arr_8 [i_0] [(signed char)4] [i_0])) << (((var_10) - (9935811876467304391ULL))))) : ((+(((/* implicit */int) (short)-7525))))));
                                var_16 = ((/* implicit */unsigned char) (short)27257);
                            }
                        } 
                    } 
                    arr_17 [i_2] = ((/* implicit */signed char) ((int) (_Bool)1));
                }
            } 
        } 
        var_17 = ((/* implicit */signed char) (((~(3730794101U))) != (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
    }
    for (unsigned int i_5 = 2; i_5 < 23; i_5 += 4) 
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (unsigned char)24))));
        var_19 &= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((signed char) 7195684735297566862LL))), (arr_20 [i_5])))), (((((/* implicit */_Bool) arr_19 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_5])) ? (arr_18 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5])))))) : (min((((/* implicit */unsigned long long int) arr_18 [i_5])), (7165770297535215349ULL)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 1) 
        {
            for (unsigned int i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) var_9);
                            arr_32 [i_5 + 1] [i_5] [(signed char)16] |= ((/* implicit */signed char) ((((/* implicit */_Bool) -616799361)) && (((/* implicit */_Bool) max((((/* implicit */int) var_0)), (arr_24 [i_5] [i_6 + 2] [i_9] [i_6 + 2]))))));
                            var_21 = ((/* implicit */long long int) (-(((/* implicit */int) min(((unsigned char)235), (max(((unsigned char)255), (arr_30 [i_9] [i_6] [i_5] [i_6] [i_5]))))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */long long int) (~(var_4)));
                            arr_36 [i_6] [i_6] [i_6] [i_6 + 2] [i_6] [i_8] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) (unsigned char)20)), (1026024084629211482LL))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)222)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_34 [i_5] [i_6]), ((signed char)-45)))))))) : ((-(((arr_21 [i_5 - 2] [i_7]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)131))) : (var_6)))))));
                            var_23 = ((/* implicit */unsigned short) var_9);
                        }
                        /* vectorizable */
                        for (unsigned char i_11 = 0; i_11 < 24; i_11 += 2) /* same iter space */
                        {
                            arr_39 [i_5] [i_5] [i_5] [i_5] [i_8] [i_5] = ((unsigned short) 3730794101U);
                            arr_40 [i_8] [i_8] [i_7] [i_6] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_18 [i_5 + 1]))));
                            var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)24)) - (((/* implicit */int) arr_25 [i_6] [i_8 - 1] [i_11]))))) ? (arr_24 [i_8] [i_7] [i_7] [i_8]) : (arr_19 [i_5] [i_7])));
                        }
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8759)) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_23 [i_6] [i_6])) ? (((/* implicit */int) arr_25 [i_8] [i_7] [i_5])) : (((/* implicit */int) (unsigned short)23884)))) * ((+(((/* implicit */int) (unsigned char)255))))))) : (arr_27 [i_5] [i_6] [23] [i_8])));
                        var_26 = ((/* implicit */int) 2698598724260250336LL);
                    }
                    for (int i_12 = 0; i_12 < 24; i_12 += 1) 
                    {
                        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (unsigned short)65535))));
                        var_28 += ((/* implicit */signed char) (+(((/* implicit */int) ((max((arr_24 [i_7] [i_7] [i_7] [i_7]), (((/* implicit */int) arr_30 [(unsigned short)17] [(unsigned short)3] [i_6] [i_6] [i_5 - 2])))) >= (arr_38 [i_5]))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_13 = 0; i_13 < 24; i_13 += 4) 
                        {
                            arr_47 [i_5] [i_6] [i_13] [i_12] [i_13] [14] [i_5] = ((/* implicit */int) (!((!(((/* implicit */_Bool) 7195684735297566862LL))))));
                            var_29 += ((/* implicit */_Bool) (signed char)125);
                            var_30 *= ((/* implicit */unsigned int) (-(var_10)));
                            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) max((var_4), (((/* implicit */unsigned int) ((short) arr_21 [i_6 - 1] [i_5 - 2]))))))));
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 24; i_14 += 3) 
                        {
                            var_32 ^= ((/* implicit */_Bool) (unsigned char)196);
                            var_33 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */int) (signed char)44)) : (((/* implicit */int) arr_33 [i_5] [i_6 + 2] [i_6 + 2] [i_6 + 2] [i_5] [i_6 + 2] [i_14]))))) / (var_6)));
                            arr_50 [i_5] [i_5] [i_6] [i_7] [i_12] [i_5] [i_14] = ((/* implicit */unsigned short) arr_48 [i_5] [i_5] [i_5] [i_12] [i_14] [i_14]);
                        }
                        var_34 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) (short)2322)), (((unsigned short) var_8)))))));
                    }
                    arr_51 [i_5] [i_5 - 2] [i_5 - 1] = ((/* implicit */unsigned short) min(((short)-2323), (((/* implicit */short) ((signed char) arr_25 [i_6 - 1] [i_5 + 1] [i_5 - 2])))));
                }
            } 
        } 
    }
    var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) var_5))));
}
