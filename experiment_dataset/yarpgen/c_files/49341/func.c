/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49341
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
                        {
                            var_14 = ((/* implicit */unsigned short) max((min((((/* implicit */int) arr_7 [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 + 1])), (var_9))), (((/* implicit */int) (!(((/* implicit */_Bool) -5852759406251537687LL)))))));
                            var_15 = ((((((/* implicit */_Bool) arr_11 [(_Bool)1] [(_Bool)1] [(signed char)16] [(signed char)9] [i_4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) != ((+(((/* implicit */int) max(((_Bool)1), ((_Bool)0)))))));
                            var_16 = ((/* implicit */unsigned int) (-((((((_Bool)1) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) - ((+(var_12)))))));
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)-41))) / (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [8U] [i_2] [i_3] [6LL] [i_1]))) + (var_0))))) ^ (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_4] [4LL] [i_0] [i_1] [i_0])) & (((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 1] [i_4] [16LL] [i_4]))))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) /* same iter space */
                        {
                            var_18 |= ((/* implicit */signed char) 5540499100731764664LL);
                            var_19 &= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)30477))))));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (~(((/* implicit */int) arr_8 [i_1] [i_1 + 1])))))));
                        }
                        for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            var_21 += ((((/* implicit */_Bool) max((2906462897U), (3327325035U)))) ? (((((/* implicit */int) (signed char)71)) | (((/* implicit */int) arr_13 [i_1] [i_1 + 1] [i_1 - 2] [i_1] [i_2])))) : ((~(((/* implicit */int) (_Bool)1)))));
                            var_22 |= ((unsigned short) ((10706415715845557088ULL) >= (((/* implicit */unsigned long long int) ((821327536884113040LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)59))) : (2198350408176740431LL)))), (min((((/* implicit */unsigned long long int) var_10)), (var_8))))))))));
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (_Bool)1))));
                            arr_17 [18U] [i_1] [(unsigned short)16] [i_0] [i_6] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_10 [i_0] [(unsigned char)18] [i_0] [i_1 + 1] [i_6])) : (((/* implicit */int) arr_10 [i_0] [2U] [i_0] [i_1 + 1] [i_1 + 1])))), (((/* implicit */int) max(((_Bool)0), (arr_4 [i_0] [i_1] [i_1 + 1] [i_0]))))));
                        }
                        arr_18 [i_0] [(signed char)15] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-77)) | (((/* implicit */int) arr_5 [i_1 - 2] [(unsigned char)6]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1 + 1] [i_2])) ^ (((/* implicit */int) (unsigned char)167))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) ^ (10706415715845557084ULL))))), (((/* implicit */unsigned long long int) (_Bool)1))));
                        var_25 = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_15 [i_1 - 2] [i_2] [i_1 - 2] [i_1 - 2] [i_0] [i_0])))) | (((/* implicit */int) arr_16 [i_0] [i_1 + 1] [i_2] [(unsigned short)5] [i_1 - 1] [i_3] [i_1 - 2]))));
                    }
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 18; i_7 += 2) /* same iter space */
                    {
                        arr_21 [i_1] |= (unsigned char)179;
                        var_26 &= (-(((/* implicit */int) (signed char)76)));
                        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (!(arr_4 [i_1] [i_1] [i_1 + 1] [i_1]))))));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_7 + 1] [13ULL] [i_7 - 2] [i_7] [13ULL] [i_7 - 1] [i_7 + 1])) ? (((/* implicit */int) arr_16 [i_7 + 1] [i_7 + 1] [i_7 - 2] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 - 1])) : (225822118)));
                        var_29 = var_3;
                    }
                    for (int i_8 = 2; i_8 < 18; i_8 += 2) /* same iter space */
                    {
                        arr_26 [i_0] [i_0] [12] [i_8 - 2] = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) (-(var_5)))), (arr_22 [i_1] [i_1 + 1] [i_1 - 2] [i_2] [i_2]))) * (((((((/* implicit */_Bool) 2187329054084352196ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-5540499100731764657LL))) * (((/* implicit */long long int) 225822132))))));
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (-(((var_3) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_8] [i_8] [i_8] [i_8 - 1] [i_8 - 2]))))))))));
                        var_31 = ((/* implicit */int) (((-(4196717337U))) * (((/* implicit */unsigned int) (-(((/* implicit */int) arr_20 [i_0] [i_1] [i_1 + 1] [i_8])))))));
                        arr_27 [(signed char)13] [i_1 - 1] [i_2] [i_0] = ((/* implicit */unsigned int) (!(var_11)));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 19; i_9 += 4) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 19; i_10 += 2) 
                        {
                            {
                                var_32 -= ((/* implicit */int) ((((/* implicit */_Bool) (+(-462625293)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_14 [(signed char)3] [(signed char)3] [i_2] [i_2] [i_2] [(unsigned char)18]))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_10] [i_9]))))))));
                                var_33 |= ((/* implicit */unsigned char) ((int) arr_28 [i_0] [i_0] [(signed char)9] [i_10]));
                            }
                        } 
                    } 
                    arr_32 [i_1] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-31))));
                    arr_33 [i_0] = ((/* implicit */signed char) (((((((-(var_12))) + (9223372036854775807LL))) << (((((-4065837067933556974LL) + (4065837067933556992LL))) - (17LL))))) | (((/* implicit */long long int) ((3814172223U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14785))))))));
                    /* LoopSeq 3 */
                    for (signed char i_11 = 0; i_11 < 19; i_11 += 3) 
                    {
                        arr_37 [(_Bool)1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) 4090774588U))));
                        arr_38 [i_0] = ((/* implicit */unsigned short) min(((~(arr_19 [i_0] [i_1 + 1]))), (((((/* implicit */_Bool) var_5)) ? (arr_19 [i_1 - 2] [i_11]) : (arr_19 [12U] [i_1 - 2])))));
                    }
                    for (unsigned short i_12 = 0; i_12 < 19; i_12 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1 + 1]))) : (var_12)))));
                        var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((17002471025048147634ULL) + (var_3))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)74))) : (var_10))))))) ? (((int) (unsigned char)134)) : (1186190533)));
                        arr_41 [i_0] = var_9;
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_13 = 0; i_13 < 19; i_13 += 1) 
                        {
                            var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [(unsigned short)5] [i_1 + 1] [i_12])) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) var_2)) * (((/* implicit */int) arr_25 [i_0] [6ULL] [i_1] [i_1] [i_12] [i_13])))))))));
                            arr_45 [i_0] [i_12] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((var_6) - (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0])))));
                            arr_46 [i_2] [i_13] &= ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))) ^ (((var_13) & (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0] [i_1] [(unsigned short)17] [(unsigned char)3])))))));
                        }
                        var_37 = ((/* implicit */unsigned char) var_3);
                    }
                    for (unsigned short i_14 = 0; i_14 < 19; i_14 += 1) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) max(((signed char)-77), (((/* implicit */signed char) (_Bool)1)))))));
                        var_39 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (-(-738890831)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) (unsigned short)30179)) ? (-991167721) : (((/* implicit */int) (unsigned short)48218)))))));
                        arr_49 [i_0] [i_1 + 1] [(unsigned char)16] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)18672), (((/* implicit */short) (signed char)-63)))))) + (arr_35 [(signed char)17] [i_1] [1] [i_1 + 1] [i_1])));
                    }
                }
            } 
        } 
    } 
    var_40 = ((/* implicit */int) var_2);
}
