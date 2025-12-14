/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191796
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
    var_14 -= ((/* implicit */unsigned char) var_2);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (~((~(((/* implicit */int) ((((/* implicit */int) (signed char)93)) < (((/* implicit */int) arr_1 [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */int) -325292161250343945LL);
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            arr_6 [i_0] [4U] [i_0] = ((/* implicit */signed char) -325292161250343943LL);
            arr_7 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) 325292161250343945LL)) ? ((~(-325292161250343944LL))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-26939)), ((unsigned short)28089))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192)))));
        }
        for (short i_2 = 2; i_2 < 9; i_2 += 2) 
        {
            arr_10 [i_0] = ((/* implicit */unsigned int) var_9);
            arr_11 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2 + 1] [i_2 - 2]))) + (max((4169837873U), (((/* implicit */unsigned int) arr_4 [i_2] [i_2 - 1] [i_2 - 2]))))));
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
                {
                    arr_18 [(unsigned char)6] [(short)5] [i_3] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) 125129422U)) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_4] [i_4] [i_3])) ^ (((/* implicit */int) arr_15 [i_4] [i_4] [i_4] [i_3] [i_2] [i_0]))))) ? ((~(((/* implicit */int) arr_16 [i_0] [i_2 + 1] [i_2] [i_3] [i_3] [i_4])))) : (((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_14 [i_2] [i_3] [i_4])))))) : (((/* implicit */int) min(((unsigned short)16384), (((/* implicit */unsigned short) (unsigned char)189)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        arr_21 [(unsigned char)2] [i_4] [0LL] [i_2] [i_2] [(unsigned char)4] = ((/* implicit */unsigned char) arr_16 [i_0] [i_2] [i_3] [i_4] [i_4] [i_5]);
                        var_15 -= ((/* implicit */_Bool) (-(max((((/* implicit */long long int) var_1)), (arr_8 [i_0] [i_2] [i_2 - 1])))));
                    }
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        var_16 += ((/* implicit */signed char) (~(((/* implicit */int) arr_15 [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_2 - 2]))));
                        var_17 += ((/* implicit */signed char) (+(125129414U)));
                        arr_24 [i_3] = ((/* implicit */int) (short)23447);
                    }
                    arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) arr_22 [(signed char)7] [i_3] [(signed char)7] [i_0]);
                    arr_26 [(short)0] [(short)0] [(short)0] [(short)0] [i_2 - 2] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)251), (((/* implicit */unsigned char) (_Bool)1)))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_2] [i_3] [i_4])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_23 [i_0] [i_2] [i_2] [i_3] [i_3] [i_4]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))) : (min((4169837882U), (((/* implicit */unsigned int) (_Bool)1))))))));
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        var_18 *= ((/* implicit */short) (-(((/* implicit */int) (short)-6054))));
                        arr_29 [(signed char)4] [(signed char)4] [i_3] [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((_Bool) arr_20 [i_0] [i_0] [i_3] [i_0] [i_7]))), (min((((/* implicit */unsigned int) arr_0 [i_3])), (3675229008U)))));
                        var_19 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-12503)))))));
                    }
                    for (short i_8 = 2; i_8 < 7; i_8 += 3) 
                    {
                        arr_33 [(signed char)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_3] [i_3] [3LL] = ((/* implicit */short) arr_22 [(short)8] [i_2 + 1] [i_3] [i_4]);
                        var_20 |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)64))))), (((/* implicit */unsigned long long int) (-(-325292161250343945LL))))))) ? ((-(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (unsigned char)145))));
                        arr_34 [i_3] [(unsigned short)8] [i_8 + 3] = (_Bool)1;
                    }
                }
                for (int i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
                {
                    arr_37 [i_0] [i_2 - 1] [i_3] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) min((arr_23 [(unsigned char)2] [(unsigned char)2] [i_3] [i_3] [i_3] [i_3]), ((unsigned char)55)))))), (((/* implicit */int) (unsigned char)2))));
                    var_21 ^= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((((/* implicit */short) arr_13 [(signed char)3] [i_2 + 1] [i_2 - 1])), (arr_27 [i_0] [i_2] [i_2] [i_9] [i_3])))) ? (((/* implicit */int) (unsigned char)255)) : (max((((/* implicit */int) (short)23989)), (-239073256))))), (((/* implicit */int) (unsigned char)222))));
                    arr_38 [(signed char)5] [i_2] [(signed char)2] [i_9] = (unsigned char)191;
                }
                arr_39 [i_3] [(unsigned char)5] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_0] [i_2] [i_3])) > (((/* implicit */int) (_Bool)1))));
                arr_40 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) (+(min((6758375031347944063LL), (((/* implicit */long long int) (unsigned char)191)))))));
                var_22 = ((/* implicit */short) max((((/* implicit */long long int) min((((/* implicit */int) ((unsigned char) arr_17 [i_0] [i_0] [i_0] [i_0]))), ((+(((/* implicit */int) arr_0 [i_0]))))))), (((((/* implicit */_Bool) (unsigned char)61)) ? (max((((/* implicit */long long int) arr_12 [i_3] [i_2] [i_0])), (2981679996384754253LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_12)) % (((/* implicit */int) (signed char)-68)))))))));
            }
        }
        /* LoopSeq 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_11 = 0; i_11 < 10; i_11 += 3) 
            {
                for (unsigned char i_12 = 0; i_12 < 10; i_12 += 1) 
                {
                    {
                        var_23 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((unsigned char)215), (((/* implicit */unsigned char) (_Bool)0)))))));
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)48))))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && ((_Bool)0))))))), ((+(3382591710U))))))));
                        arr_50 [i_12] = ((/* implicit */signed char) ((unsigned char) max((arr_0 [i_0]), (((/* implicit */unsigned short) (signed char)70)))));
                    }
                } 
            } 
            arr_51 [i_10] [i_0] [i_0] = ((/* implicit */short) (_Bool)1);
        }
        for (unsigned char i_13 = 0; i_13 < 10; i_13 += 1) 
        {
            arr_55 [i_0] [i_0] [i_13] = ((/* implicit */signed char) (short)20205);
            var_25 *= ((/* implicit */_Bool) var_7);
            var_26 += ((/* implicit */signed char) (~((~(((/* implicit */int) (_Bool)1))))));
        }
        var_27 -= ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) ((((/* implicit */int) arr_54 [i_0] [i_0])) | (((/* implicit */int) (short)-27028))))), ((+(2559976384U))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)-27026)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (2107163632716746561ULL))))))));
    }
    /* vectorizable */
    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
    {
        var_28 *= ((/* implicit */signed char) ((arr_56 [i_14 - 1] [i_14 - 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-27373)))));
        var_29 *= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_57 [(_Bool)1])) : (((/* implicit */int) (short)29672)))));
    }
}
