/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41482
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    arr_6 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) min((arr_2 [i_2] [i_0 + 1]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)8)) && (((/* implicit */_Bool) arr_2 [i_0] [i_0 + 1])))))));
                    var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */short) (signed char)42)), (arr_3 [i_0] [(unsigned short)11])))), (((-1LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)44)))))))) ? (((min((787593129), (((/* implicit */int) var_7)))) * (((/* implicit */int) arr_1 [i_1] [(_Bool)1])))) : (((/* implicit */int) (short)27326))));
                }
                arr_7 [i_0] [i_0] = ((/* implicit */long long int) var_14);
                var_16 += ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_4 [i_1] [(signed char)10] [i_0])) ? (((/* implicit */unsigned long long int) min((-9223372036854775804LL), (((/* implicit */long long int) var_11))))) : (min((var_12), (((/* implicit */unsigned long long int) var_5)))))), (((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) var_0)), (arr_5 [(unsigned char)20] [8LL] [(unsigned short)20] [(unsigned char)8]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)5558)) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) (short)-19778))))))))));
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */short) max((max((((((/* implicit */long long int) 0U)) % (-9223372036854775804LL))), ((+(-163915231669069873LL))))), (((/* implicit */long long int) max(((signed char)42), (((/* implicit */signed char) ((0LL) == ((-9223372036854775807LL - 1LL))))))))));
                            /* LoopSeq 2 */
                            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
                            {
                                arr_17 [i_0 + 1] [i_1] [i_3] [i_3] [i_0] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((arr_8 [i_1] [i_3] [i_4] [i_0]), ((_Bool)1))))) & (arr_4 [i_3] [i_0] [11LL])))) ? ((~(((/* implicit */int) max(((unsigned char)175), ((unsigned char)199)))))) : (((/* implicit */int) arr_10 [i_0] [17LL] [22U] [17LL]))));
                                var_17 ^= ((/* implicit */_Bool) arr_12 [i_0] [14LL] [i_3] [i_4] [i_0] [i_5]);
                            }
                            for (short i_6 = 0; i_6 < 24; i_6 += 2) 
                            {
                                var_18 += ((/* implicit */signed char) (~(((/* implicit */int) max(((unsigned short)16632), (((/* implicit */unsigned short) arr_15 [i_6] [i_4] [i_3] [(short)11] [i_0 + 1])))))));
                                var_19 = ((/* implicit */unsigned short) ((max((var_12), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) % (1387083505289368778ULL))))) | (((/* implicit */unsigned long long int) max((((/* implicit */int) var_13)), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_12 [i_6] [23LL] [i_3] [i_0] [i_1] [i_0])))))))));
                                var_20 = ((/* implicit */long long int) var_0);
                                var_21 &= ((/* implicit */signed char) 9223372036854775790LL);
                            }
                            arr_20 [12] [12] [i_3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)153))) && (((/* implicit */_Bool) (unsigned short)14966))));
                            arr_21 [13] [i_0] [0U] [i_3] [i_4] = ((/* implicit */unsigned char) (short)28313);
                        }
                    } 
                } 
                var_22 = ((/* implicit */short) (((~(min((arr_4 [i_1] [i_0] [17U]), (((/* implicit */long long int) (unsigned char)3)))))) != (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */int) arr_14 [7LL])) >> (((((/* implicit */int) arr_18 [11ULL] [(_Bool)1] [i_1] [i_1] [i_1])) - (39138))))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 15; i_8 += 4) 
        {
            for (short i_9 = 0; i_9 < 15; i_9 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 9223372036854775807LL))));
                    arr_33 [i_7] [i_8] [(short)6] [i_9] = (!(((/* implicit */_Bool) 1541206811U)));
                }
            } 
        } 
        arr_34 [i_7] [i_7] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */int) arr_3 [3U] [i_7])) : (((/* implicit */int) (signed char)-84))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 1) 
        {
            arr_39 [9U] [i_7] [i_10] = ((/* implicit */short) ((((long long int) 188070093U)) | (((/* implicit */long long int) ((/* implicit */int) arr_8 [22LL] [i_7] [i_10] [i_7])))));
            var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)35))))) % (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))));
        }
        for (signed char i_11 = 1; i_11 < 13; i_11 += 1) 
        {
            arr_42 [i_7] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) var_13))))) >> (((((((/* implicit */_Bool) arr_15 [i_7] [(unsigned short)15] [i_11] [i_11 + 2] [(short)0])) ? (((/* implicit */int) (unsigned char)206)) : (((/* implicit */int) (signed char)-60)))) - (183)))));
            arr_43 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((3859322206U) % (2316659534U)))) * (((((/* implicit */_Bool) arr_5 [i_7] [i_11 + 1] [9U] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-74))) : (arr_35 [i_7] [i_11])))));
            arr_44 [i_7] [1LL] [i_11] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) -282986166588555475LL)) ? (var_12) : (((/* implicit */unsigned long long int) -7365547920648453620LL)))));
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 18; i_12 += 1) 
    {
        var_25 = ((/* implicit */signed char) arr_45 [i_12]);
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_12] [4LL] [i_12] [14U])) == (((/* implicit */int) var_2))));
        arr_47 [i_12] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) == (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)253))) % (var_8)))));
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [4LL] [i_12])) && (((((/* implicit */int) var_11)) == (((/* implicit */int) (short)3584))))));
    }
    for (short i_13 = 0; i_13 < 18; i_13 += 2) 
    {
        arr_50 [(short)8] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11944734329025174588ULL)) ? (-4457423757679694857LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)111)))))), (5235350568367571062ULL)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)-88)), (2622662902U)))), (var_12))))));
        /* LoopSeq 1 */
        for (unsigned char i_14 = 0; i_14 < 18; i_14 += 1) 
        {
            arr_53 [i_14] = ((/* implicit */short) ((signed char) arr_11 [i_14] [i_13] [i_13] [i_13] [i_13] [i_14]));
            arr_54 [(unsigned char)10] [i_14] [i_14] = var_3;
            /* LoopNest 3 */
            for (unsigned int i_15 = 0; i_15 < 18; i_15 += 4) 
            {
                for (int i_16 = 0; i_16 < 18; i_16 += 2) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 18; i_17 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) min((((/* implicit */unsigned char) ((17006587115248422287ULL) == (((/* implicit */unsigned long long int) min((arr_62 [i_14]), (((/* implicit */long long int) -2147483643)))))))), (((unsigned char) (!(((/* implicit */_Bool) arr_16 [3LL] [3LL] [i_15] [6] [i_13]))))))))));
                            arr_64 [i_13] [i_14] [i_15] [i_16] [i_16] [i_16] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)73)) * (((/* implicit */int) (signed char)-4))))) ? (((/* implicit */long long int) ((unsigned int) 2494176845757010091ULL))) : (max((((/* implicit */long long int) arr_18 [14LL] [i_14] [i_15] [i_16] [(unsigned short)13])), (arr_4 [i_17] [i_14] [i_13]))))), (((/* implicit */long long int) ((((/* implicit */int) arr_60 [(unsigned char)0] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])) == (((/* implicit */int) min((((/* implicit */short) (unsigned char)255)), ((short)-27748)))))))));
                        }
                    } 
                } 
            } 
        }
        arr_65 [i_13] [i_13] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) (~(var_6)))) == (max((10515119337087936654ULL), (((/* implicit */unsigned long long int) var_8)))))))));
        arr_66 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((var_5) / (((/* implicit */long long int) ((/* implicit */int) var_13)))))))) ? ((+((~(((/* implicit */int) arr_10 [21U] [i_13] [(short)0] [i_13])))))) : (((/* implicit */int) arr_63 [6ULL] [i_13] [8LL]))));
    }
    var_29 += ((/* implicit */unsigned long long int) (~(var_1)));
}
