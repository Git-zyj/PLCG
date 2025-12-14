/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52000
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_16 ^= ((/* implicit */long long int) (~(((/* implicit */int) max((var_15), (((/* implicit */unsigned short) arr_3 [i_0])))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_17 += ((/* implicit */short) (-(arr_4 [i_2] [i_3])));
                            var_18 |= ((/* implicit */unsigned long long int) var_8);
                            var_19 = ((/* implicit */short) var_15);
                            arr_10 [i_0] [i_0] [i_2] [i_0] [i_3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned short) (unsigned char)36))), (((((/* implicit */_Bool) (unsigned char)220)) ? (15786630756231306789ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)220)))))))) ? (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_0 [i_3])))))) : (((((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_2] [i_1])) + (((/* implicit */int) arr_9 [i_3] [i_1] [i_0] [i_2] [i_1]))))));
                        }
                    } 
                } 
                arr_11 [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) >> (((((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_1])) - (55505)))))), (max((((/* implicit */long long int) (unsigned char)24)), (-2668891610405494814LL)))));
                var_20 += ((/* implicit */short) max((arr_5 [i_0] [i_0] [i_1] [i_1]), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [(short)7] [i_0])) != (((/* implicit */int) arr_2 [2] [2] [i_1])))))) <= (((((/* implicit */_Bool) (unsigned char)219)) ? (6983781737072002622LL) : (9006099743113216LL))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((/* implicit */int) (_Bool)0))))) ? (min((((/* implicit */long long int) arr_14 [i_4])), (arr_15 [i_5]))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) ((((/* implicit */int) max(((short)-8460), (((/* implicit */short) (_Bool)1))))) << (((((/* implicit */int) (unsigned short)4095)) - (4066)))))))))));
            var_22 = ((/* implicit */signed char) arr_15 [i_4]);
        }
        for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)65535)) >> (((((/* implicit */int) arr_13 [i_6])) + (7101))))), (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) arr_17 [i_4] [i_4])))))))) ? (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)219)))))) ^ (((arr_15 [i_6]) + (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_4] [i_4]))))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)46)) >> (((((/* implicit */int) (short)3163)) - (3135))))))));
            var_24 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((short) arr_16 [i_4] [i_4]))), (7560752395090896823ULL)));
            arr_18 [i_4] = ((unsigned long long int) (unsigned short)61134);
            var_25 = ((/* implicit */short) var_1);
        }
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 14; i_7 += 2) 
        {
            for (short i_8 = 2; i_8 < 10; i_8 += 1) 
            {
                {
                    var_26 = ((/* implicit */short) arr_19 [i_4]);
                    var_27 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) max(((_Bool)1), ((_Bool)0)))) < (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)1536))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 3) 
        {
            for (signed char i_10 = 4; i_10 < 11; i_10 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 14; i_11 += 2) 
                    {
                        for (short i_12 = 0; i_12 < 14; i_12 += 1) 
                        {
                            {
                                var_28 -= min((((/* implicit */long long int) ((((((/* implicit */int) var_15)) * (((/* implicit */int) var_0)))) | (((/* implicit */int) max((var_6), (arr_17 [i_4] [i_9]))))))), (((long long int) (((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))));
                                var_29 = (+(((/* implicit */int) (unsigned short)61701)));
                                arr_32 [i_4] [i_4] [i_4] [i_12] [i_4] = ((/* implicit */unsigned short) arr_13 [i_4]);
                                arr_33 [i_4] [i_10] [i_10] [i_9] [(short)11] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_15)))) < (((/* implicit */int) min((arr_26 [i_10] [i_10] [i_10] [i_10 + 2]), (((/* implicit */short) arr_29 [i_9] [i_9] [i_9] [i_10 + 1] [0] [(unsigned short)0])))))));
                                var_30 *= ((unsigned long long int) min((((/* implicit */int) (unsigned char)37)), (1040187392)));
                            }
                        } 
                    } 
                    arr_34 [i_4] [i_4] [i_4] [(unsigned char)8] = ((/* implicit */short) max(((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (arr_30 [i_4] [i_4] [i_9] [(unsigned char)13] [i_10 - 1]))))), (((((/* implicit */_Bool) arr_16 [i_4] [i_4])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_16 [3] [i_4]))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_13 = 0; i_13 < 14; i_13 += 3) 
        {
            var_31 |= ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_9))))) != (8948465612036030097LL))))));
            var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((12434113672815538728ULL) - (7495338301249516404ULL))))));
        }
    }
    for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 3) 
    {
        arr_40 [i_14] [i_14] = ((/* implicit */unsigned char) max((((/* implicit */short) ((((/* implicit */int) arr_39 [i_14])) < (((/* implicit */int) arr_39 [i_14]))))), (max((arr_39 [i_14]), (arr_39 [i_14])))));
        var_33 = arr_39 [i_14];
        /* LoopNest 3 */
        for (unsigned long long int i_15 = 3; i_15 < 16; i_15 += 1) 
        {
            for (unsigned short i_16 = 0; i_16 < 19; i_16 += 3) 
            {
                for (int i_17 = 0; i_17 < 19; i_17 += 2) 
                {
                    {
                        var_34 = ((/* implicit */short) ((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)32721))))) || (((/* implicit */_Bool) arr_41 [i_14] [i_15 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (max((((/* implicit */long long int) (-(((/* implicit */int) arr_38 [i_14]))))), (min((7709109475863898970LL), (((/* implicit */long long int) arr_48 [i_14] [i_15] [i_15] [(unsigned short)4] [1] [(unsigned char)6]))))))));
                        arr_50 [i_15] = ((/* implicit */signed char) max(((~(min((870469535161901824ULL), (((/* implicit */unsigned long long int) arr_43 [i_15])))))), (((/* implicit */unsigned long long int) (+(-6475478248262491257LL))))));
                        var_35 = max((((/* implicit */unsigned long long int) max((arr_38 [i_15 + 2]), (arr_38 [i_15 + 2])))), (min((((/* implicit */unsigned long long int) arr_38 [i_15 - 3])), (16ULL))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_18 = 0; i_18 < 25; i_18 += 1) 
    {
        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_52 [i_18] [i_18])) ? (((/* implicit */int) arr_52 [i_18] [i_18])) : (arr_51 [i_18] [i_18])));
        var_37 = ((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (-5216733078419945694LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)128)))));
    }
    var_38 = ((/* implicit */long long int) (((-((~(((/* implicit */int) var_14)))))) - (((/* implicit */int) ((short) (-9223372036854775807LL - 1LL))))));
    var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) (short)-24117)) + (((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */int) max((var_9), (var_6)))) : (((/* implicit */int) var_9))));
}
