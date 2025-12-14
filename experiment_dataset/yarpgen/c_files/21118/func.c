/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21118
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
    for (short i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) min((((unsigned long long int) (unsigned short)37886)), (min((((arr_2 [i_0] [i_1 + 2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24375))))), (((/* implicit */unsigned long long int) arr_0 [i_0 - 3])))))))));
                /* LoopSeq 4 */
                for (unsigned short i_2 = 3; i_2 < 15; i_2 += 1) 
                {
                    var_12 = ((/* implicit */unsigned char) ((var_1) & ((+((((_Bool)0) ? (((/* implicit */int) arr_5 [i_0] [i_2] [i_2] [i_2])) : (((/* implicit */int) (unsigned char)254))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_3] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) 1);
                        var_13 = ((/* implicit */unsigned short) arr_7 [i_0] [i_1] [i_0 - 2] [i_3]);
                    }
                    arr_11 [i_0] [i_2] = ((/* implicit */unsigned long long int) arr_9 [i_2] [i_1] [i_1] [i_2] [i_2 - 1]);
                }
                /* vectorizable */
                for (unsigned int i_4 = 4; i_4 < 12; i_4 += 3) 
                {
                    arr_14 [9] [i_4] [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_9 [i_4] [i_1] [i_1] [i_1] [i_1 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)3))));
                                arr_21 [i_4] = ((_Bool) (short)0);
                            }
                        } 
                    } 
                    arr_22 [i_4] [8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 12614526131099221010ULL)) ? (((/* implicit */int) (unsigned char)131)) : (((/* implicit */int) (unsigned short)20304)))) : (((/* implicit */int) ((unsigned short) 12614526131099220980ULL)))));
                    arr_23 [i_4] [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_10))));
                }
                /* vectorizable */
                for (short i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_8 = 2; i_8 < 15; i_8 += 1) 
                    {
                        arr_28 [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1))));
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            var_15 += ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                            arr_31 [i_0] [i_7] = ((/* implicit */unsigned int) ((arr_1 [i_0 - 1]) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 1]))));
                        }
                        arr_32 [i_0] [i_1] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)120)) ? (17668684433223465045ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4)))));
                    }
                    for (unsigned long long int i_10 = 1; i_10 < 14; i_10 += 3) 
                    {
                        arr_35 [i_0 - 1] [i_1] [i_7] [i_7] = ((/* implicit */unsigned int) ((14889109037912325895ULL) * (5832217942610330596ULL)));
                        /* LoopSeq 2 */
                        for (unsigned short i_11 = 0; i_11 < 16; i_11 += 3) 
                        {
                            arr_38 [i_7] [i_1] = ((/* implicit */int) 3575361119U);
                            arr_39 [i_0] [(unsigned short)14] [i_7] [(unsigned short)14] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_2 [0ULL] [i_1])))) ? (arr_25 [i_1 + 2] [i_7] [i_10 + 2]) : (arr_36 [i_7] [i_1 - 3])));
                        }
                        for (long long int i_12 = 0; i_12 < 16; i_12 += 2) 
                        {
                            arr_42 [i_7] [i_1 - 2] [i_7] [i_7] [i_12] = ((/* implicit */int) var_4);
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 5832217942610330606ULL)) ? (((/* implicit */unsigned long long int) 1718380744U)) : (7180806442380440219ULL)));
                            arr_43 [i_7] [i_12] = ((/* implicit */int) ((arr_16 [i_7] [i_10 - 1] [i_7] [i_7]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)106)))));
                            arr_44 [i_0] [(unsigned char)8] [i_7] = ((/* implicit */signed char) (~((-(((/* implicit */int) arr_37 [i_7]))))));
                        }
                    }
                    for (unsigned char i_13 = 3; i_13 < 14; i_13 += 1) 
                    {
                        arr_48 [i_7] [i_1] = ((/* implicit */_Bool) -1739593544);
                        arr_49 [i_0] [i_0] [i_0] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((unsigned short) 4113123486U))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)63)) <= (((/* implicit */int) (signed char)76)))))));
                    }
                    var_17 = ((/* implicit */unsigned long long int) ((long long int) (-(3557635035797225720ULL))));
                }
                for (unsigned long long int i_14 = 3; i_14 < 13; i_14 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_18 += ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) 3575361111U)), (11265937631329111397ULL))), (max((11997830589872890890ULL), (((/* implicit */unsigned long long int) 635739254U))))));
                        arr_54 [i_0] [i_1] [i_14] [i_15] |= ((/* implicit */signed char) var_8);
                        var_19 = ((/* implicit */unsigned int) (((-(((/* implicit */int) (_Bool)1)))) * (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_24 [i_0 - 2] [(unsigned char)7] [i_14])) : (((/* implicit */int) arr_24 [i_15] [i_1 - 2] [i_14]))))));
                        var_20 *= min((((((/* implicit */int) arr_52 [i_0])) & (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-57)), ((unsigned char)63)))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (3939060313844046208LL))))) > ((((_Bool)1) ? (((/* implicit */unsigned int) -1530064617)) : (arr_20 [i_15] [i_0])))))));
                        var_21 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (+(-1933619551)))) ? (arr_16 [6ULL] [i_1 - 4] [i_14 - 1] [i_15]) : (11265937631329111396ULL)))));
                    }
                    var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((arr_13 [i_14] [i_14] [i_14 + 1]) + (9223372036854775807LL))) << ((((+(((/* implicit */int) arr_37 [(unsigned short)10])))) - (1)))))) / (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)4096)) ? (arr_34 [i_14] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-17158)))))) + (((((/* implicit */_Bool) 2172090239U)) ? (4765582247785598541ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))))));
                    /* LoopNest 2 */
                    for (int i_16 = 3; i_16 < 15; i_16 += 3) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                arr_60 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (_Bool)0);
                                var_23 = ((/* implicit */short) ((max((1048576U), (((/* implicit */unsigned int) 1933619550)))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) 531140406U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)7365)))))));
                                arr_61 [i_0] [i_1] [i_14 - 3] [i_0] [i_17] = ((/* implicit */unsigned short) ((14041307741525904277ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [12] [i_14 + 1] [i_1 - 2] [i_0] [12])))));
                            }
                        } 
                    } 
                }
                var_24 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_15 [2LL] [2LL] [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)53)) : (1051465182)))))), ((-(arr_25 [i_0 + 1] [i_1] [i_1])))));
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3939060313844046208LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (174939634U)));
    var_26 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)41873)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (min((((/* implicit */unsigned int) (_Bool)1)), (1409256892U))))), (((/* implicit */unsigned int) var_4))));
    var_27 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(3763826890U)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)7512))))) ? ((~(8762130744245574431ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (-174291937) : (((/* implicit */int) (unsigned char)240)))))))));
}
