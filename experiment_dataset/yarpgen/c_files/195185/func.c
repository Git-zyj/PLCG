/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195185
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
    var_11 = ((/* implicit */unsigned long long int) ((signed char) (unsigned short)39077));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) var_10);
        var_12 = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0 - 1])) / (((/* implicit */int) arr_1 [i_0 + 1]))));
    }
    for (long long int i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) min((var_8), (((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_1)))))));
        arr_5 [i_1] &= ((/* implicit */_Bool) (+((-(3580027166U)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            for (long long int i_3 = 1; i_3 < 24; i_3 += 1) 
            {
                {
                    var_14 = ((/* implicit */long long int) ((min((((unsigned long long int) var_4)), (((/* implicit */unsigned long long int) (~(arr_8 [i_2])))))) << (((3580027174U) - (3580027142U)))));
                    arr_12 [(short)21] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(max((((/* implicit */long long int) var_9)), (var_4)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 10872244108116675238ULL)))) : (714940129U)));
                    arr_13 [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */long long int) (~(714940142U)))) : (arr_8 [i_1])));
                }
            } 
        } 
        arr_14 [i_1] [14ULL] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_5)))), (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : ((~(4207471176U)))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            for (int i_5 = 1; i_5 < 21; i_5 += 4) 
            {
                {
                    var_15 = ((/* implicit */short) ((((/* implicit */long long int) var_8)) & (min(((~(var_4))), (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1] [i_1] [i_1])) & (((/* implicit */int) arr_19 [i_1] [i_4] [24LL])))))))));
                    var_16 = ((/* implicit */unsigned long long int) var_9);
                    arr_20 [i_1] [i_4] [i_5] = ((/* implicit */short) min((min((arr_7 [i_5 + 2] [i_5] [i_5 - 1]), (arr_7 [i_5 + 1] [i_5] [18U]))), (((/* implicit */unsigned short) ((signed char) min((var_7), ((short)-25100)))))));
                    var_17 = ((/* implicit */short) max((((/* implicit */unsigned char) ((signed char) (-(1ULL))))), (var_0)));
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) 1564596685U);
                        var_19 = ((/* implicit */short) min((((/* implicit */long long int) var_1)), ((~(((((/* implicit */_Bool) var_0)) ? (arr_8 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
                    }
                }
            } 
        } 
    }
    for (long long int i_7 = 0; i_7 < 25; i_7 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */short) ((((((/* implicit */int) arr_25 [19U] [19U])) < (((/* implicit */int) arr_19 [i_7] [i_7] [(_Bool)1])))) ? (max((min((18446744073709551614ULL), (((/* implicit */unsigned long long int) arr_25 [i_7] [i_7])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_7] [i_7] [i_7] [i_7])) || (((/* implicit */_Bool) var_3))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
        var_21 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) arr_7 [i_7] [i_7] [i_7])), (3ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 714940155U)) || (((/* implicit */_Bool) arr_11 [i_7] [i_7] [i_7])))))));
        arr_27 [(unsigned short)8] |= ((/* implicit */long long int) (!((!(((((/* implicit */unsigned long long int) 2147483647)) == (arr_3 [(short)2])))))));
    }
    for (short i_8 = 0; i_8 < 18; i_8 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_9 = 2; i_9 < 14; i_9 += 2) 
        {
            for (unsigned short i_10 = 0; i_10 < 18; i_10 += 4) 
            {
                for (unsigned char i_11 = 4; i_11 < 17; i_11 += 2) 
                {
                    {
                        var_22 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)18824))));
                        arr_41 [i_8] [i_8] [i_9] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7161))) : (714940122U)))), ((+(var_10)))))) ? (((((/* implicit */_Bool) arr_34 [i_8] [i_9] [i_9 - 2])) ? (((/* implicit */int) arr_34 [i_8] [15LL] [i_10])) : (var_8))) : (((/* implicit */int) arr_32 [i_8]))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_12 = 0; i_12 < 18; i_12 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_13 = 0; i_13 < 18; i_13 += 4) 
            {
                for (long long int i_14 = 1; i_14 < 15; i_14 += 4) 
                {
                    {
                        arr_51 [i_8] [i_8] [i_8] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2730370610U)) || (((/* implicit */_Bool) arr_32 [i_8]))));
                        arr_52 [i_8] [i_8] [i_8] [i_8] = var_3;
                        var_23 *= ((/* implicit */unsigned long long int) (short)-1);
                        var_24 = ((/* implicit */_Bool) ((arr_28 [i_14 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
                    }
                } 
            } 
            var_25 = ((/* implicit */short) var_1);
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            arr_55 [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
            var_26 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_19 [i_8] [0ULL] [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_15] [(signed char)9] [i_8]))) : (714940129U)))));
            /* LoopNest 2 */
            for (short i_16 = 0; i_16 < 18; i_16 += 2) 
            {
                for (unsigned char i_17 = 3; i_17 < 15; i_17 += 3) 
                {
                    {
                        var_27 = ((/* implicit */signed char) var_7);
                        var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) max((arr_37 [(short)2] [i_8] [i_17 - 2] [i_17 + 1]), (arr_37 [i_16] [i_8] [i_17 - 2] [i_17 + 2]))))));
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)15)) & (((/* implicit */int) min((((/* implicit */short) (!((_Bool)0)))), (min(((short)-7161), ((short)32761))))))));
                        arr_60 [i_16] [(unsigned short)4] [i_16] |= ((/* implicit */long long int) (+(((/* implicit */int) (short)-7149))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_18 = 0; i_18 < 18; i_18 += 3) 
                        {
                            var_30 = ((/* implicit */int) arr_54 [(unsigned short)13]);
                            arr_64 [i_18] [i_8] [i_18] [i_18] [i_18] = ((/* implicit */unsigned char) (short)26390);
                        }
                    }
                } 
            } 
        }
        var_31 = ((/* implicit */short) min((max((((/* implicit */unsigned char) (signed char)39)), (var_0))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_23 [3ULL] [18ULL] [i_8] [i_8])))))));
    }
    var_32 = ((/* implicit */signed char) ((8839643347009922659LL) >> (((((min((714940120U), (((/* implicit */unsigned int) var_9)))) << (((((/* implicit */int) var_7)) + (16885))))) - (1442840523U)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_19 = 0; i_19 < 15; i_19 += 3) 
    {
        var_33 = arr_17 [i_19] [i_19] [i_19] [i_19];
        arr_67 [i_19] [i_19] = ((/* implicit */long long int) ((((/* implicit */int) arr_24 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])) + (((/* implicit */int) arr_24 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]))));
    }
}
