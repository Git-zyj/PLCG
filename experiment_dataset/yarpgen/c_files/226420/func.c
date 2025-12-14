/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226420
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
    for (signed char i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_10 = ((/* implicit */_Bool) min((700131921132527006ULL), (((/* implicit */unsigned long long int) (unsigned char)127))));
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((2172247486U), (((/* implicit */unsigned int) arr_1 [i_0 - 2] [i_0 - 2]))))))))) : (min((min((7693314073929530481LL), (var_6))), ((+(667503796271697731LL)))))));
        var_12 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) || (((/* implicit */_Bool) 1154158098200583038ULL)))))));
        var_13 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned short)5620)) ? (((/* implicit */int) (unsigned short)59915)) : (((/* implicit */int) (unsigned char)173)))), (((/* implicit */int) min((var_4), (((/* implicit */short) arr_2 [i_0 - 2])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) -5288810318580596957LL))));
                            arr_16 [i_2] = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((min((((/* implicit */unsigned short) (unsigned char)58)), ((unsigned short)53242))), (((/* implicit */unsigned short) min(((unsigned char)252), (((/* implicit */unsigned char) arr_10 [2ULL])))))))), (min((((/* implicit */long long int) 139905812)), (min((((/* implicit */long long int) var_8)), (arr_3 [i_5])))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_13 [10ULL] [i_1] [i_2] [5U] [i_3]) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) | ((+(10338548553802740338ULL)))))) ? (((/* implicit */unsigned long long int) (+(((var_7) >> (((((/* implicit */int) arr_12 [i_1] [i_2] [i_1] [i_3] [i_3])) + (23277)))))))) : (min((var_1), (((/* implicit */unsigned long long int) (unsigned char)255))))));
            }
            /* LoopSeq 1 */
            for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                var_16 ^= min((var_2), (((/* implicit */long long int) var_3)));
                var_17 = ((/* implicit */_Bool) arr_15 [i_1] [i_2] [i_6] [i_2] [2LL] [i_1]);
                var_18 = ((/* implicit */long long int) arr_1 [i_1] [i_1]);
            }
        }
        for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_19 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) arr_14 [(unsigned short)5] [i_7] [i_7] [3U])), (var_0))) >> ((((-(((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (var_1) : (((/* implicit */unsigned long long int) var_9)))))) - (12569661757545250334ULL)))));
                var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)249)) ? (10132799352578589646ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_7] [i_7] [i_8] [i_7])))))))) != (min((((/* implicit */long long int) arr_8 [i_1] [i_7] [i_8])), ((+(-5288810318580596957LL)))))));
            }
            for (unsigned short i_9 = 0; i_9 < 11; i_9 += 1) 
            {
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((unsigned long long int) arr_15 [(unsigned char)1] [i_1] [i_7] [i_7] [i_9] [i_9])) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5620))))))));
                arr_27 [i_1] [i_7] [i_1] [i_9] = ((/* implicit */long long int) arr_17 [i_1] [i_7] [i_7] [i_1]);
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59902))) + (542133005U))))) ? (((/* implicit */unsigned long long int) -1409667038)) : (min((((/* implicit */unsigned long long int) var_3)), (((var_0) << (((var_1) - (5877082316164301211ULL)))))))));
            }
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_7] [i_1])) ? (min((3752834281U), (((/* implicit */unsigned int) arr_1 [i_1] [i_1])))) : (((/* implicit */unsigned int) ((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) << (((((/* implicit */int) (unsigned char)251)) - (243))))))));
        }
        /* LoopNest 2 */
        for (signed char i_10 = 0; i_10 < 11; i_10 += 3) 
        {
            for (short i_11 = 0; i_11 < 11; i_11 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 2) 
                        {
                            {
                                arr_39 [i_1] [i_10] [i_10] [(unsigned short)6] [i_12] [i_13] &= ((/* implicit */_Bool) var_4);
                                arr_40 [i_1] = ((/* implicit */int) ((long long int) var_3));
                                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1] [i_10] [i_10] [i_10] [i_13] [8ULL]))) - (min((((/* implicit */long long int) (short)-15833)), (min((var_6), (((/* implicit */long long int) (_Bool)0)))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_25 |= ((/* implicit */long long int) ((arr_5 [i_11] [i_10]) << (((arr_34 [i_14] [i_11] [i_10] [i_1]) + (3657784771340641697LL)))));
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_43 [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                        var_27 = ((/* implicit */_Bool) (-(14866196423656865127ULL)));
                        var_28 = var_3;
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 2) 
                    {
                        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) arr_47 [i_1] [(_Bool)0] [(short)6]))));
                        var_30 = ((/* implicit */unsigned long long int) min((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_6))) % (((/* implicit */long long int) (~(3726051202U)))))), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1] [i_1] [i_11] [i_15] [i_15] [(unsigned short)0]))) != (var_1)))) : (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) arr_41 [i_15] [i_15] [i_11] [i_10] [i_1] [i_1]))))))))));
                    }
                    var_31 = ((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_1] [i_10] [i_11]))) + (1611510412U))), (((/* implicit */unsigned int) ((unsigned short) 3097548570244079901LL)))));
                }
            } 
        } 
    }
    var_32 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1043111316U)) ? (min((var_7), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)51)) != (((/* implicit */int) var_8))))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    var_33 = ((/* implicit */unsigned short) var_6);
    var_34 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) (+(10132799352578589646ULL)))) ? (var_2) : (min((var_7), (((/* implicit */long long int) 3752834279U)))))) + (9223372036854775807LL))) >> (((min((((((/* implicit */_Bool) 14390726212721331780ULL)) ? (8416163236224287432ULL) : (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) var_8)))) - (8416163236224287418ULL)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_17 = 0; i_17 < 19; i_17 += 2) 
        {
            for (unsigned short i_18 = 4; i_18 < 15; i_18 += 1) 
            {
                {
                    var_35 = ((/* implicit */unsigned int) min((((/* implicit */int) (!((!(((/* implicit */_Bool) (short)32758))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) >> (((((/* implicit */int) arr_49 [i_18 + 2])) - (11064)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) -2147483645)) || (((/* implicit */_Bool) (unsigned short)59912)))))))));
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 19; i_19 += 3) 
                    {
                        for (unsigned short i_20 = 0; i_20 < 19; i_20 += 3) 
                        {
                            {
                                arr_59 [i_16] [i_17] [i_18] [i_19] [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned short)4092), (((/* implicit */unsigned short) (unsigned char)238)))))))) ? (((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63052)))))) : ((+(var_2))))) : (((/* implicit */long long int) (-(arr_53 [i_18 + 4]))))));
                                var_36 ^= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */unsigned long long int) var_9)) : (var_0))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_21 = 0; i_21 < 19; i_21 += 2) 
                    {
                        for (short i_22 = 3; i_22 < 17; i_22 += 4) 
                        {
                            {
                                var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) min((var_3), (((/* implicit */unsigned short) arr_61 [i_16] [i_17] [i_18] [i_16] [(unsigned char)10]))))) ^ (((/* implicit */int) arr_48 [i_16]))));
                                var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) (+(((((/* implicit */_Bool) min(((unsigned short)63052), (((/* implicit */unsigned short) arr_54 [i_16] [i_17] [i_18 + 1] [i_21] [i_22]))))) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)255)), (var_3))))))))))));
                                var_39 = ((/* implicit */unsigned long long int) min((((/* implicit */short) arr_61 [i_16] [i_16] [i_16] [i_16] [i_16])), (var_8)));
                                var_40 ^= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_48 [i_22 + 2])) ? (((/* implicit */int) arr_48 [i_22 + 2])) : (((/* implicit */int) (unsigned char)0)))), (((((/* implicit */_Bool) -133949409534472065LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_48 [i_22 - 2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_23 = 0; i_23 < 19; i_23 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                arr_70 [i_23] [i_24] [i_24] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_49 [2ULL])) : (((/* implicit */int) (_Bool)1))))));
                var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_57 [i_16] [i_16] [(unsigned short)18] [i_16] [i_16])) : (((/* implicit */int) (_Bool)1)))))));
                arr_71 [i_24] [i_24] [(unsigned char)11] [i_24] = ((/* implicit */unsigned long long int) (~(2397145026U)));
            }
            var_42 += ((/* implicit */int) min((var_5), (((/* implicit */unsigned long long int) ((var_2) / (min((((/* implicit */long long int) 105262921U)), (var_6))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_25 = 0; i_25 < 19; i_25 += 1) 
        {
            arr_75 [i_16] [i_16] [i_25] = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_74 [i_16] [i_25]) > (var_0)))) ^ (((/* implicit */int) (unsigned short)5599))));
            arr_76 [i_25] [i_25] = ((/* implicit */short) arr_48 [1]);
        }
        var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((+(0U)))))) ? (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_4)), (var_3)))), (arr_74 [i_16] [7U]))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))), (((/* implicit */int) (unsigned char)233)))))));
    }
}
