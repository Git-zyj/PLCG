/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191200
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
    var_18 = ((/* implicit */unsigned int) max((min((-6174950809490697758LL), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) ((((/* implicit */int) var_9)) << (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_0 [i_0 + 2]))) << (((((/* implicit */int) ((unsigned char) arr_1 [i_0 + 2]))) - (76)))));
        var_20 ^= var_8;
        var_21 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */int) max((arr_0 [(unsigned short)10]), (((/* implicit */signed char) (_Bool)1))))), ((((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 13; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */_Bool) max((var_22), (((arr_2 [2] [i_1 + 4] [i_2]) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min(((signed char)14), (arr_3 [i_1] [i_1 - 1]))))));
                    var_24 = ((/* implicit */short) (_Bool)1);
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 13; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 3) 
                {
                    {
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((unsigned long long int) arr_1 [i_0 + 2])))));
                        /* LoopSeq 2 */
                        for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            arr_18 [(unsigned char)12] [i_4] [i_4 + 1] [(unsigned short)9] [(unsigned char)13] [i_5] [i_6] = ((/* implicit */signed char) ((short) arr_15 [i_0 + 1] [i_0 - 1] [i_4] [i_5 - 1]));
                            var_26 = ((/* implicit */short) (~(((/* implicit */int) arr_13 [i_0] [13ULL] [i_4] [i_0 + 1] [i_6]))));
                            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) var_9))));
                        }
                        for (short i_7 = 0; i_7 < 14; i_7 += 1) 
                        {
                            var_28 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)9)) ? (((/* implicit */int) arr_20 [(unsigned short)10] [11U] [i_5 - 1] [i_5 + 2] [i_5])) : (((/* implicit */int) arr_20 [13ULL] [i_5] [i_5 + 2] [i_7] [(unsigned char)7]))));
                            var_29 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_8 [i_0 - 1])) && (((/* implicit */_Bool) arr_2 [i_0] [i_3] [i_5 + 2])))));
                        }
                    }
                } 
            } 
            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_0 + 1]))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_20 [i_0 - 1] [i_0 - 1] [(unsigned char)12] [i_0 + 1] [i_0 + 1])))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 3; i_8 < 13; i_8 += 4) 
            {
                /* LoopSeq 2 */
                for (signed char i_9 = 0; i_9 < 14; i_9 += 4) 
                {
                    /* LoopSeq 4 */
                    for (short i_10 = 0; i_10 < 14; i_10 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned char) ((short) arr_24 [i_0 + 2]));
                        arr_30 [(short)8] [i_9] [(signed char)10] [i_9] [i_10] &= ((/* implicit */short) (((_Bool)1) && ((_Bool)1)));
                    }
                    for (unsigned long long int i_11 = 2; i_11 < 12; i_11 += 2) 
                    {
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) arr_19 [i_0 + 2] [i_0 - 1] [i_8 + 1] [i_8] [8] [i_9]))));
                        arr_34 [i_0] [i_3] [i_9] = ((/* implicit */unsigned short) var_4);
                    }
                    for (int i_12 = 0; i_12 < 14; i_12 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_23 [11] [i_3] [7]))));
                        arr_37 [i_12] [(unsigned char)9] [i_12] = ((/* implicit */unsigned short) var_5);
                    }
                    for (short i_13 = 0; i_13 < 14; i_13 += 3) 
                    {
                        var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_6 [(signed char)1])) : (((/* implicit */int) var_1)))) << (((((/* implicit */int) var_9)) - (30143))))))));
                        arr_41 [i_13] [i_0 + 1] = ((/* implicit */signed char) ((arr_29 [i_9]) << (((((/* implicit */int) arr_25 [i_0 + 1] [i_0])) - (76)))));
                    }
                    var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) (_Bool)1))));
                }
                for (unsigned char i_14 = 0; i_14 < 14; i_14 += 3) 
                {
                    arr_44 [i_0] [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned int) (((((~(((/* implicit */int) var_8)))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [(signed char)5] [(unsigned short)13])) && (((/* implicit */_Bool) arr_40 [i_0 - 1] [i_3] [i_8 - 3] [i_14] [i_0 + 2]))))) - (1)))));
                    arr_45 [i_14] [(unsigned short)3] [i_8] [i_14] |= ((/* implicit */short) ((arr_28 [i_0 + 1] [0] [i_8] [i_14] [3ULL] [i_14] [(signed char)5]) << ((((~(((/* implicit */int) arr_20 [i_0] [i_3] [i_8] [i_14] [(short)13])))) + (39)))));
                    var_36 = ((/* implicit */unsigned int) min((var_36), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) arr_29 [2U])) : (var_6)))));
                }
                var_37 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_0 + 1]))));
                var_38 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (13ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((((/* implicit */int) var_13)) <= (arr_24 [i_3])))) : (((/* implicit */int) ((unsigned short) var_1)))));
            }
        }
        for (short i_15 = 3; i_15 < 10; i_15 += 4) 
        {
            var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) min((var_15), (arr_21 [i_0 + 2] [i_0 - 1] [i_0] [i_15] [i_15]))))));
            var_40 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(((/* implicit */int) (signed char)(-127 - 1))))) << (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((((/* implicit */_Bool) arr_9 [(signed char)9])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))))))) : ((+(((/* implicit */int) (_Bool)1))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_17 = 0; i_17 < 14; i_17 += 2) 
                {
                    for (signed char i_18 = 0; i_18 < 14; i_18 += 1) 
                    {
                        {
                            arr_59 [i_18] [i_17] [i_16] [i_15] [i_0 + 2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((int) (short)-32767))) ? (((((/* implicit */_Bool) arr_46 [12] [i_15] [1ULL])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_17)))))), (((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)-10))))) && (((/* implicit */_Bool) (-(2ULL)))))))));
                            var_41 = ((/* implicit */unsigned long long int) (((((-(max((var_7), (((/* implicit */int) var_2)))))) + (2147483647))) << (((((((/* implicit */_Bool) arr_26 [6] [i_15 + 1] [i_16] [i_17] [i_17] [i_18])) ? (((/* implicit */int) arr_26 [i_0 - 1] [i_15 - 1] [(signed char)0] [i_17] [12LL] [i_17])) : (((/* implicit */int) arr_26 [i_0 - 1] [i_15] [i_15 + 3] [13U] [i_17] [i_18])))) - (25932)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_19 = 0; i_19 < 14; i_19 += 3) 
                {
                    var_42 ^= ((/* implicit */signed char) (+((+(min((((/* implicit */int) var_14)), (var_7)))))));
                    arr_62 [i_19] [i_19] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)250)), (arr_43 [(short)11] [i_15 - 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_16))), (((/* implicit */unsigned int) var_17))));
                    var_43 = ((/* implicit */unsigned int) (~(max((((/* implicit */int) (short)-7755)), (var_7)))));
                }
                var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) (-((((_Bool)1) ? (13ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8))))))))));
            }
        }
        for (unsigned char i_20 = 0; i_20 < 14; i_20 += 3) 
        {
            var_45 = ((/* implicit */signed char) (_Bool)1);
            var_46 = ((/* implicit */unsigned long long int) max((var_46), (((/* implicit */unsigned long long int) var_7))));
        }
    }
    for (unsigned long long int i_21 = 3; i_21 < 10; i_21 += 1) 
    {
        arr_67 [i_21] [i_21 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (((_Bool)1) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))) ? (((/* implicit */int) arr_40 [i_21] [(short)8] [i_21 - 2] [i_21 + 1] [i_21])) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (arr_14 [i_21 + 2] [i_21 + 2])))) : (((/* implicit */int) (signed char)-1))))));
        var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) -5LL))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_40 [i_21] [i_21 + 2] [i_21 + 1] [i_21 - 2] [i_21 - 3]))))) : (((/* implicit */int) max((((/* implicit */signed char) ((arr_31 [i_21] [(unsigned char)13] [4ULL] [i_21] [i_21] [(short)9]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), ((signed char)113))))));
        /* LoopNest 2 */
        for (int i_22 = 0; i_22 < 12; i_22 += 1) 
        {
            for (short i_23 = 0; i_23 < 12; i_23 += 4) 
            {
                {
                    arr_74 [(signed char)3] [i_21] [i_23] = ((/* implicit */unsigned long long int) 2147483646);
                    arr_75 [i_21] [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_46 [i_21 - 3] [i_21 + 2] [i_22]) | (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-115))) ^ (1U))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_56 [i_21 - 3] [i_23]), (((/* implicit */unsigned char) (_Bool)1)))))) : (((((/* implicit */_Bool) arr_60 [i_21] [i_22] [i_23] [i_21 - 2])) ? (((5980363520127714113LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) var_13)))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_24 = 0; i_24 < 12; i_24 += 1) 
                    {
                        var_48 = ((/* implicit */short) (signed char)-23);
                        var_49 = ((/* implicit */unsigned int) 2ULL);
                    }
                }
            } 
        } 
    }
}
