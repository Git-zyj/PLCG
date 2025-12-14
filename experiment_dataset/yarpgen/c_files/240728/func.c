/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240728
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
    var_12 = ((/* implicit */short) var_7);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) max((var_6), ((signed char)58)))) - (((/* implicit */int) ((unsigned short) (signed char)58)))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 4; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_13 = ((unsigned short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_4] [i_0])) : (((/* implicit */int) (unsigned short)53229)))) / (arr_1 [i_4 + 1])));
                                var_14 -= ((/* implicit */long long int) ((((unsigned int) (-(((/* implicit */int) (signed char)58))))) + (((/* implicit */unsigned int) ((/* implicit */int) max((arr_7 [i_2 + 1] [i_4 + 1] [i_4 + 1]), ((signed char)58)))))));
                                arr_14 [13LL] [i_1] [i_2] [i_3] [i_4 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (arr_11 [(_Bool)1] [i_1] [i_1] [i_2] [i_3] [i_4]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (signed char)24)))))))) ? (((/* implicit */int) ((_Bool) arr_13 [17LL] [i_4 + 1] [i_0] [i_3] [i_4] [i_4] [i_2]))) : (((/* implicit */int) min((max((var_1), ((unsigned short)41612))), (((/* implicit */unsigned short) arr_3 [i_2 + 1] [i_4] [i_4])))))));
                                arr_15 [i_2] [i_1] [i_2] [i_2] [i_4] |= ((/* implicit */unsigned short) max((((short) (+(((/* implicit */int) arr_5 [i_2 - 3]))))), (((/* implicit */short) ((unsigned char) arr_13 [i_2 - 4] [i_2 - 4] [i_4 + 1] [i_4] [i_4] [i_4] [i_4])))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 2; i_6 < 18; i_6 += 3) 
                        {
                            var_15 ^= ((/* implicit */_Bool) var_11);
                            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((unsigned short) ((short) var_8))))));
                        }
                        var_17 += ((/* implicit */unsigned short) var_6);
                    }
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) max((-8281221520814208563LL), (((/* implicit */long long int) var_4))))) || ((!(((/* implicit */_Bool) var_6))))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 2; i_8 < 16; i_8 += 3) 
                        {
                            var_19 = ((/* implicit */long long int) max((var_19), (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_12 [i_8 - 2] [i_8 + 3] [i_8 - 2] [(unsigned short)7] [i_2 - 2] [i_2 + 3])), (((((/* implicit */_Bool) 2417041188U)) ? (arr_8 [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_1])))))))) ? (((var_7) ? (((((/* implicit */_Bool) arr_23 [(signed char)15] [i_8] [i_7] [i_0] [i_1] [i_0])) ? (8281221520814208562LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_5))))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                            var_20 = (signed char)41;
                        }
                        /* vectorizable */
                        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            arr_28 [i_0] [(_Bool)1] [(_Bool)1] [i_7] [i_9] = ((signed char) ((unsigned long long int) 3059063927U));
                            var_21 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_4)) ? (-8281221520814208563LL) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0])))))));
                            var_22 = ((((/* implicit */int) ((unsigned char) var_0))) | (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)49)) : (((/* implicit */int) (_Bool)1)))));
                        }
                    }
                    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (long long int i_11 = 0; i_11 < 20; i_11 += 3) /* same iter space */
                        {
                            arr_34 [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) var_6)))))) && ((!(((/* implicit */_Bool) max((var_3), (arr_31 [i_0] [i_1] [i_2] [i_10] [i_11]))))))));
                            arr_35 [i_0] [i_11] [i_11] [i_10] [(unsigned short)5] [i_0] [i_1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) 16939632933398169327ULL)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_10])) : (((/* implicit */int) var_4)))), (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_2 - 2] [i_2])) < (((/* implicit */int) arr_3 [i_1] [i_2 - 3] [i_10])))))));
                            arr_36 [9ULL] [i_10] [i_10] [i_10] [i_11] = ((/* implicit */unsigned long long int) var_9);
                        }
                        /* vectorizable */
                        for (long long int i_12 = 0; i_12 < 20; i_12 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned int) ((unsigned long long int) arr_37 [i_2 - 2] [9ULL] [(signed char)15] [i_1] [(unsigned char)2]));
                            var_24 -= ((/* implicit */unsigned long long int) ((signed char) var_9));
                            arr_39 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((1151108743U) ^ (881817487U))));
                        }
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)54887)), (8281221520814208562LL)))) ^ (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_1] [i_2] [(unsigned short)13]))) : (186503454987425131ULL))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_2)))), (((/* implicit */int) ((_Bool) var_8))))))));
                        var_26 = ((/* implicit */signed char) (-(((/* implicit */int) max((arr_23 [i_0] [i_1] [i_2] [i_2 + 3] [i_10] [i_2]), (var_2))))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 20; i_13 += 4) /* same iter space */
                    {
                        arr_43 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((signed char) max((max((var_9), (((/* implicit */unsigned int) (unsigned char)226)))), (((/* implicit */unsigned int) max((((/* implicit */short) arr_4 [i_0])), (arr_40 [i_0] [i_1] [i_2])))))));
                        var_27 = ((long long int) (~(((/* implicit */int) arr_40 [i_0] [7U] [i_2 + 2]))));
                        var_28 += ((/* implicit */unsigned int) arr_0 [i_0] [i_1]);
                    }
                    var_29 = ((/* implicit */signed char) max((2251799813685247ULL), (((((unsigned long long int) var_6)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_1), (((/* implicit */unsigned short) (unsigned char)67))))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_14 = 0; i_14 < 20; i_14 += 4) 
        {
            arr_46 [i_0] = min((752934641739819009LL), (((((/* implicit */_Bool) (+(-8281221520814208563LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43485))) : (-9095113152999062027LL))));
            arr_47 [i_0] [i_14] = ((/* implicit */long long int) min((arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (max((arr_23 [(short)19] [i_0] [i_14] [i_14] [i_0] [i_0]), (((/* implicit */unsigned short) (signed char)-37))))));
        }
    }
    for (signed char i_15 = 0; i_15 < 20; i_15 += 3) /* same iter space */
    {
        arr_52 [i_15] |= ((/* implicit */unsigned char) max((((arr_16 [i_15] [i_15] [i_15] [i_15]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_15] [i_15] [8LL] [i_15]))) : (1023U))), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_20 [i_15] [i_15] [i_15] [i_15])) + (2147483647))) >> (((((/* implicit */int) arr_20 [i_15] [i_15] [i_15] [i_15])) + (52))))))));
        /* LoopNest 2 */
        for (unsigned char i_16 = 1; i_16 < 16; i_16 += 3) 
        {
            for (signed char i_17 = 0; i_17 < 20; i_17 += 3) 
            {
                {
                    arr_57 [i_15] [i_15] [i_15] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_19 [i_16] [i_16 - 1] [i_16 - 1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112))))))))) ? ((((!(((/* implicit */_Bool) arr_22 [4U] [i_16] [i_16 + 3] [i_16 - 1] [i_16 - 1])))) ? (((/* implicit */int) arr_26 [i_16 + 1] [i_16] [i_16] [i_16 + 4] [i_16 + 2] [i_16 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))) : (((/* implicit */int) ((signed char) var_1)))));
                    arr_58 [i_17] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)144)) ? (arr_6 [i_15] [i_15] [i_16 - 1] [i_16 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_15] [i_16] [i_16 + 1] [i_16 + 2]))))));
                    var_30 -= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_48 [i_15])) : (((/* implicit */int) ((((/* implicit */_Bool) 2147467264U)) && (((/* implicit */_Bool) 260046848)))))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))) : (max((((/* implicit */unsigned long long int) (signed char)-37)), (18446744073709551615ULL)))))));
                }
            } 
        } 
    }
    for (signed char i_18 = 0; i_18 < 20; i_18 += 3) /* same iter space */
    {
        var_31 -= ((/* implicit */_Bool) (signed char)36);
        var_32 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) var_11)))), (((/* implicit */int) var_1)))))));
        var_33 = ((/* implicit */unsigned long long int) max(((~(((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)106)))))), (((/* implicit */int) ((unsigned short) ((long long int) var_1))))));
    }
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        var_34 = ((/* implicit */_Bool) max((max((((/* implicit */int) max((((/* implicit */unsigned char) arr_41 [i_19] [i_19] [(signed char)19] [i_19])), (arr_45 [i_19])))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-9016)) : (((/* implicit */int) var_3)))))), (((/* implicit */int) (_Bool)1))));
        var_35 = ((/* implicit */_Bool) max((var_35), ((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)21)), ((+(186503454987425146ULL))))))))));
        var_36 = ((/* implicit */short) min((((/* implicit */int) max((((unsigned short) arr_27 [i_19] [i_19])), (((unsigned short) var_7))))), (min((((((/* implicit */int) (signed char)108)) / (((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_59 [i_19])) || (((/* implicit */_Bool) var_5)))))))));
        var_37 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) min(((unsigned short)24576), (((/* implicit */unsigned short) (short)32766))))), (((unsigned int) var_4)))), (max((3828225680U), (((/* implicit */unsigned int) var_7))))));
    }
    var_38 ^= ((/* implicit */long long int) var_7);
}
