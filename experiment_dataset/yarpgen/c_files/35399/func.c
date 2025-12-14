/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35399
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
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_12))) ? (((/* implicit */int) (!(var_4)))) : (((((/* implicit */_Bool) var_7)) ? (var_16) : (((/* implicit */int) (_Bool)0))))))), (min((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_5) : (var_5))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9109))) | (2147475456U)))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_7 [(short)7] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_15 [i_0] [(short)14] [(unsigned short)0] [i_0] [i_0] [i_0] [8U] = ((((/* implicit */_Bool) (unsigned char)240)) ? (1138927502) : (((/* implicit */int) (signed char)-65)));
                            arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_12 [i_3 - 2] [i_3 - 1] [i_3 - 2] [i_3 - 1] [i_3 + 3] [i_1 - 1]))));
                            arr_17 [1] [i_3] [i_0] = ((unsigned int) var_9);
                            var_19 *= ((/* implicit */long long int) (((-(18446744073709551615ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11260)))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] |= ((/* implicit */long long int) ((short) var_7));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = ((unsigned int) arr_12 [i_1 + 1] [i_3] [i_3] [i_3 + 3] [i_3 + 2] [i_3 - 1]);
                            arr_22 [i_1] [i_0] [i_0] [i_1] = ((/* implicit */short) ((unsigned short) (+(((/* implicit */int) (unsigned char)0)))));
                        }
                    }
                    arr_23 [i_0] [i_0] [i_2] &= ((/* implicit */unsigned char) ((short) max((((/* implicit */long long int) arr_12 [i_0] [i_0] [i_1 + 1] [i_2] [8U] [i_2])), (8388592LL))));
                    var_20 ^= ((/* implicit */signed char) ((short) (-(((/* implicit */int) (unsigned char)218)))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_6 [10U] [i_1] [i_1 + 1] [i_1])))), (((var_11) ? (((/* implicit */int) (signed char)44)) : (((/* implicit */int) (signed char)-111))))))) ? (((((/* implicit */_Bool) max((641351510U), (2662682615U)))) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) ((unsigned char) (unsigned char)239))))) : (((/* implicit */int) ((short) min((var_5), (((/* implicit */int) var_4))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        for (int i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_8 = 1; i_8 < 16; i_8 += 1) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_37 [i_6] [(unsigned char)2] [i_7] [i_8] [i_9] &= ((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((unsigned int) var_11)) : (((((/* implicit */_Bool) arr_27 [i_8 + 1] [i_8 - 1] [i_8 - 1])) ? (var_9) : (((/* implicit */unsigned int) arr_27 [i_8 - 1] [i_8 + 1] [i_8 + 1])))));
                            arr_38 [i_6] [i_7] [i_8 - 1] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) max((var_15), (((/* implicit */short) arr_35 [i_6] [i_8 + 1] [i_8 - 1] [i_8 - 1]))))) + (((((/* implicit */_Bool) (-(-3198727958922954114LL)))) ? (var_16) : (((/* implicit */int) var_1))))));
                            /* LoopSeq 2 */
                            for (int i_10 = 2; i_10 < 15; i_10 += 2) 
                            {
                                arr_43 [i_10] [i_10] [i_10] [i_10] [16] = ((/* implicit */_Bool) min((-1966931302), (((/* implicit */int) (signed char)-113))));
                                var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_8 - 1])) ? (arr_26 [i_8 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (min((arr_26 [i_8 - 1]), (arr_26 [i_8 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_26 [i_8 - 1]) >= (arr_26 [i_8 - 1])))))));
                                arr_44 [(unsigned short)1] [(unsigned short)1] [i_8 + 1] [i_8] [i_8 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-69)) ? (((/* implicit */int) arr_33 [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_33 [i_6] [i_7] [i_9] [(unsigned short)3]))))) ? (((unsigned int) var_7)) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_31 [14LL] [i_7] [i_7] [i_7]))))));
                                arr_45 [(short)14] [4] [i_8] [i_9] [i_10] &= ((/* implicit */int) ((((((((/* implicit */_Bool) arr_34 [i_8] [i_8] [i_8] [i_8])) || (((/* implicit */_Bool) arr_42 [i_6] [i_6] [i_7] [(unsigned char)6] [i_7] [i_10] [i_10])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_39 [i_8] [i_8]))))) : (((unsigned long long int) -5446902614211474270LL)))) >= (((/* implicit */unsigned long long int) (+(min((((/* implicit */int) (short)-6023)), (1966931302))))))));
                            }
                            for (int i_11 = 0; i_11 < 17; i_11 += 4) 
                            {
                                arr_48 [i_6] [i_7] [i_8] [(unsigned short)4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_35 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 + 1]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13)))))));
                                var_23 ^= ((/* implicit */unsigned long long int) ((_Bool) ((unsigned short) ((signed char) (unsigned char)138))));
                                arr_49 [(unsigned char)14] [i_7] [i_8] [i_9] [i_11] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) -21)) ? (((((/* implicit */_Bool) arr_28 [i_11] [i_11])) ? (((/* implicit */int) (signed char)44)) : (((/* implicit */int) arr_41 [i_6] [i_7])))) : (((/* implicit */int) ((unsigned char) 804986388014702067LL))))));
                            }
                            arr_50 [i_6] [i_7] [i_8 + 1] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (short)11258))))));
                        }
                    } 
                } 
                arr_51 [i_6] = ((/* implicit */_Bool) ((signed char) (~(((arr_29 [i_7]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53704))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_5)) : (((unsigned int) var_0))))) : (min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (-8388607LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 8388585LL)))))))));
    /* LoopSeq 1 */
    for (short i_12 = 0; i_12 < 15; i_12 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_13 = 0; i_13 < 15; i_13 += 2) 
        {
            arr_57 [8LL] [(_Bool)1] = ((/* implicit */long long int) (-(((/* implicit */int) (short)-457))));
            arr_58 [i_12] [i_12] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((long long int) arr_14 [i_12] [(short)0] [i_12] [i_12] [i_12] [(signed char)10])) : (((/* implicit */long long int) arr_18 [i_13] [(unsigned char)14] [i_13] [i_13] [i_13] [i_13] [i_13]))));
            arr_59 [i_12] [i_12] [i_12] = (!((_Bool)1));
            var_25 += ((/* implicit */unsigned int) (+(((var_1) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_2 [i_13]))))));
        }
        arr_60 [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) | (arr_5 [i_12] [14])))) ? (min((((/* implicit */int) var_10)), (arr_5 [i_12] [(_Bool)1]))) : ((~(((/* implicit */int) var_15))))));
    }
}
