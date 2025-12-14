/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242830
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
    var_11 &= ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (short)8207))));
                arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [(signed char)3])) <= (((/* implicit */int) ((_Bool) (-(((/* implicit */int) arr_1 [i_0]))))))));
                arr_8 [(unsigned char)4] [i_1] &= ((/* implicit */unsigned char) arr_5 [i_1]);
                var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)61029)) / (((/* implicit */int) (unsigned short)61029))))) ? (((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) : (var_5))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)64))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (arr_4 [(signed char)2])))) * ((-(((/* implicit */int) arr_6 [i_0] [i_1]))))))))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 3) 
                {
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)69)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))))) ? (((((/* implicit */_Bool) arr_1 [i_2])) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) (unsigned char)192)))) : (((/* implicit */int) var_7))));
                    var_15 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (arr_0 [i_2 - 2]) : (arr_0 [i_2 + 2])))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_18 [i_4] [i_0] [i_4] = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_12 [i_0] [i_2])))), (((/* implicit */int) arr_11 [i_4]))));
                                arr_19 [i_0] [i_0] [i_0] [i_0] [13ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)15))))) * (12425950737670513368ULL)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_17 [(_Bool)1] [i_2 + 1] [i_2] [(unsigned char)14] [i_2])), (var_9)))) : (var_0)));
                                var_16 = ((/* implicit */unsigned char) arr_11 [i_0]);
                            }
                        } 
                    } 
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), ((((((!(((/* implicit */_Bool) 0ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) * (((/* implicit */int) (_Bool)1))))) : ((-(18177085527139658546ULL))))) % (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)1)) << (((arr_10 [i_0] [i_0] [i_1] [i_5]) - (2049711536164155304ULL))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)0)), (arr_0 [i_1])))) < (max((8374212962543993855ULL), (((/* implicit */unsigned long long int) (unsigned char)64))))));
                                var_19 = 18177085527139658556ULL;
                                var_20 = ((/* implicit */signed char) max((min((var_4), (arr_13 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]))), (min((arr_24 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_0] [(unsigned char)1]), (arr_13 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1])))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)213)) << (((min((((((/* implicit */_Bool) (unsigned short)61029)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (17508663882615196041ULL))), (max((((/* implicit */unsigned long long int) var_2)), (18177085527139658559ULL))))) - (5249ULL)))));
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_1] [i_8])))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        arr_30 [i_9] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+((+(((/* implicit */int) max((var_10), (var_10))))))));
                        var_23 |= ((/* implicit */unsigned char) arr_4 [(short)17]);
                        var_24 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_23 [(unsigned char)16] [(unsigned short)3] [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_0] [i_0])) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)120))))))))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned char) var_6);
                        var_26 -= ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)0)), ((+(((/* implicit */int) var_3))))))) ? (arr_15 [(unsigned char)0] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) : (10ULL));
                        arr_33 [i_0] [i_0] [i_0] [i_0] = (_Bool)1;
                    }
                    for (unsigned char i_11 = 4; i_11 < 17; i_11 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) >> (((((((/* implicit */int) (unsigned char)103)) * (((/* implicit */int) ((((/* implicit */int) (signed char)0)) <= (((/* implicit */int) (_Bool)1))))))) - (99))))))));
                        arr_36 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) ((short) (unsigned short)50447))) + (2147483647))) >> (((max((arr_22 [i_11] [i_11]), (((/* implicit */unsigned long long int) arr_28 [i_0] [i_0] [i_0] [i_0])))) - (12440305828193069488ULL)))))) ? (min((((((/* implicit */int) arr_16 [i_0] [i_0] [(unsigned char)7] [(_Bool)0] [i_8] [i_11] [i_8])) ^ (((/* implicit */int) arr_27 [i_0] [i_0] [i_0])))), (((/* implicit */int) min((arr_6 [(_Bool)1] [8ULL]), ((unsigned short)46982)))))) : (((/* implicit */int) arr_27 [i_0] [5U] [5U]))));
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)177)))))));
                        var_29 = ((/* implicit */unsigned long long int) max(((unsigned char)245), (((unsigned char) arr_1 [i_11 - 4]))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_12 = 0; i_12 < 18; i_12 += 2) 
                    {
                        var_30 &= ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) (unsigned char)31)), (938080191094355575ULL))), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (_Bool)1)))) == ((-(((/* implicit */int) arr_20 [i_12] [i_8] [i_8] [i_0])))))))));
                        var_31 = arr_31 [i_12] [i_0] [i_0] [i_0];
                    }
                    for (signed char i_13 = 0; i_13 < 18; i_13 += 1) /* same iter space */
                    {
                        var_32 += ((/* implicit */unsigned int) arr_21 [i_0] [i_1] [(_Bool)1] [i_8]);
                        arr_44 [i_0] [i_0] [i_0] [(unsigned char)6] = ((/* implicit */int) 18177085527139658528ULL);
                        var_33 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) min((arr_20 [7] [i_0] [7] [i_13]), (((/* implicit */short) var_2))))) ? ((+(-500663833))) : (((/* implicit */int) arr_2 [i_13])))));
                        var_34 += ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (var_0)))))))));
                        arr_45 [i_0] [i_0] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) max((((unsigned int) var_6)), (((/* implicit */unsigned int) ((_Bool) 1911777332)))));
                    }
                    for (signed char i_14 = 0; i_14 < 18; i_14 += 1) /* same iter space */
                    {
                        var_35 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_25 [i_1])))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22834))) / (((938080191094355576ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8192)))))))));
                        var_36 *= ((/* implicit */unsigned char) arr_26 [i_1] [5U]);
                        /* LoopSeq 3 */
                        for (unsigned char i_15 = 0; i_15 < 18; i_15 += 3) 
                        {
                            var_37 *= ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43545))) : (18177085527139658556ULL))) < ((-(var_5)))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) 17508663882615196027ULL)) && (((/* implicit */_Bool) ((unsigned short) -500663833))))))));
                            var_38 = min((arr_21 [(unsigned char)2] [i_1] [(unsigned char)2] [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_46 [i_0] [i_0] [i_1] [i_1] [i_1]))))));
                        }
                        /* vectorizable */
                        for (signed char i_16 = 0; i_16 < 18; i_16 += 1) 
                        {
                            arr_54 [i_0] = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_0] [i_0]))))));
                            var_39 = ((/* implicit */unsigned long long int) min((var_39), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) != (arr_38 [(unsigned char)2] [i_1] [i_8] [i_16]))))) & (arr_10 [14ULL] [i_1] [14ULL] [i_1])))));
                            var_40 = ((/* implicit */_Bool) max((var_40), (((_Bool) ((arr_47 [i_16] [(unsigned char)15] [i_1] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
                        }
                        for (signed char i_17 = 1; i_17 < 16; i_17 += 4) 
                        {
                            arr_57 [i_0] [i_1] [i_8] [i_14] [i_17] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)45993)) && (((/* implicit */_Bool) 2370645919U))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0])) ? (12705061009153101966ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? ((-(arr_47 [i_0] [i_0] [i_14] [6U]))) : ((+(var_5)))))));
                            var_41 -= ((/* implicit */unsigned char) ((unsigned long long int) min((((unsigned long long int) arr_10 [i_0] [i_1] [(_Bool)1] [i_17 + 2])), ((-(288230376151711743ULL))))));
                        }
                    }
                    var_42 = ((5741683064556449650ULL) - ((+(((var_7) ? (arr_22 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)64))))))));
                }
            }
        } 
    } 
}
