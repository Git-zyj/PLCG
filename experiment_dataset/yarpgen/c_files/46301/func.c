/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46301
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */unsigned long long int) max((var_10), (arr_0 [i_0])));
                    var_11 += ((/* implicit */short) ((((/* implicit */_Bool) 5038507)) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_5 [i_2] [i_1] [i_0])));
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 10071313257294167607ULL))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [(signed char)1] [i_1] [i_4] [i_3] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2]))));
                                var_12 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)7725))) & (8375430816415384009ULL)));
                                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_2] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [(short)6] [i_3] [i_4])))))) : (arr_10 [i_0] [i_0] [i_2] [i_3] [i_4]))))));
                                var_14 |= ((/* implicit */short) ((4ULL) & (8375430816415384011ULL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            {
                                arr_21 [(unsigned char)0] [i_1] [i_1] [i_1] [i_5] = ((/* implicit */unsigned long long int) ((unsigned char) (~(var_4))));
                                arr_22 [i_1] [i_1] [i_1] [i_2] [i_5] [i_6] |= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)477))) >= (((1351107343U) + (var_9)))));
                                arr_23 [i_6] [i_6] [i_5] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) << (((((/* implicit */int) (short)-12558)) + (12579)))))) - (arr_10 [i_0] [i_1] [i_1] [(unsigned char)11] [i_0])));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_24 [i_0] = ((/* implicit */signed char) 10167284);
    }
    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) >> (((-1585516360) + (1585516391))))))));
        var_16 = (~(((arr_1 [i_7] [i_7]) - (arr_8 [i_7]))));
        var_17 = ((/* implicit */short) min((var_3), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-14))))) > (arr_6 [(unsigned short)13] [i_7] [i_7]))))));
        arr_27 [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_7] [i_7] [i_7]))) : (min((((/* implicit */unsigned int) (signed char)123)), (arr_11 [i_7] [i_7] [i_7] [i_7] [i_7] [9U])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(3947561149U)))) ? (((/* implicit */unsigned long long int) arr_28 [i_8])) : (((arr_6 [i_7] [i_7] [(unsigned short)12]) - (((/* implicit */unsigned long long int) 67108862))))));
            /* LoopSeq 3 */
            for (unsigned int i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                arr_34 [i_7] [i_8] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 4294967285U)) || (((/* implicit */_Bool) 67108872)))) ? (arr_13 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) : (arr_11 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])));
                arr_35 [i_7] [i_8] [i_8] [i_9] = ((((/* implicit */long long int) ((/* implicit */int) var_0))) >= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39823))) : (-5408763863852817127LL))));
                arr_36 [i_8] = ((/* implicit */unsigned int) (+(arr_16 [i_7] [i_7] [i_7] [i_7])));
                var_19 = ((/* implicit */long long int) (~((~(4294967290U)))));
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_7))));
            }
            for (short i_10 = 0; i_10 < 11; i_10 += 3) 
            {
                var_21 = ((/* implicit */signed char) ((long long int) var_2));
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) arr_29 [i_7] [i_8] [i_10]))));
                /* LoopSeq 1 */
                for (unsigned int i_11 = 0; i_11 < 11; i_11 += 1) 
                {
                    arr_41 [i_7] [i_8] [i_10] [i_7] [i_11] |= ((/* implicit */long long int) ((((/* implicit */int) arr_31 [i_7] [i_8] [i_10] [i_11])) >= (((/* implicit */int) arr_31 [i_11] [i_10] [i_8] [i_7]))));
                    var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) arr_31 [i_7] [i_7] [(unsigned char)2] [i_11])))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 2) 
                    {
                        var_24 += ((/* implicit */int) ((signed char) 67108874));
                        var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [i_7] [i_10] [i_7])) + (((var_7) - (((/* implicit */unsigned long long int) arr_26 [i_12]))))));
                        var_26 -= ((/* implicit */short) (+(((13673525847344605965ULL) + (((/* implicit */unsigned long long int) var_9))))));
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (short)12951))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        arr_48 [(unsigned char)7] [i_8] [i_8] [i_11] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_8] [i_10] [i_11])) ? (arr_6 [i_11] [i_10] [i_7]) : (arr_6 [i_10] [i_8] [i_7])));
                        var_28 &= ((/* implicit */long long int) ((((/* implicit */_Bool) -8804692717377049140LL)) ? (((/* implicit */int) arr_39 [i_7] [i_11] [i_10] [i_7])) : (((/* implicit */int) ((9031493400454162190ULL) > (9746289869061556945ULL))))));
                        arr_49 [i_8] [i_11] [i_10] [i_8] [i_8] = ((/* implicit */short) (signed char)-6);
                    }
                    for (int i_14 = 0; i_14 < 11; i_14 += 4) 
                    {
                        arr_54 [i_8] [i_8] = ((((arr_10 [23LL] [i_8] [i_10] [i_11] [i_14]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [(unsigned char)0] [10] [(unsigned char)0] [i_8]))))) * (((/* implicit */unsigned long long int) 4294967277U)));
                        var_29 += ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)2)) && (((/* implicit */_Bool) 1585516371))))) ^ (((/* implicit */int) var_0))));
                        arr_55 [i_11] [i_8] = ((/* implicit */unsigned short) arr_31 [i_7] [i_8] [i_10] [i_14]);
                    }
                }
            }
            for (int i_15 = 0; i_15 < 11; i_15 += 3) 
            {
                var_30 = ((/* implicit */unsigned char) max((var_30), ((unsigned char)0)));
                arr_58 [i_7] [i_8] [i_15] [i_15] |= ((/* implicit */short) arr_57 [i_7] [i_15]);
            }
            arr_59 [i_8] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_7] [i_7] [i_8])) || (((/* implicit */_Bool) arr_6 [i_7] [i_8] [i_8]))));
            arr_60 [i_8] = ((/* implicit */int) var_3);
        }
    }
    var_31 |= ((/* implicit */int) max((max((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */unsigned long long int) -67108874)) | (18446744073709551598ULL))))), (((/* implicit */unsigned long long int) var_1))));
    var_32 += ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */unsigned long long int) var_9)) + (var_8)))));
    var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) var_2))));
    var_34 = ((/* implicit */unsigned long long int) (unsigned char)95);
}
