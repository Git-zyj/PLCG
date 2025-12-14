/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199572
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_5 [i_0] [i_1])) / (((/* implicit */int) arr_3 [i_1]))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-1))))) : ((+(arr_6 [i_0] [i_0 - 1] [i_2]))))))));
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_0] [i_0])) <= (((/* implicit */int) arr_7 [i_1] [i_1] [i_0]))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_3 = 3; i_3 < 22; i_3 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_5 = 3; i_5 < 21; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_18 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [i_3 - 3] [i_3 + 1] [i_3 - 3] [i_3]))));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_8 [i_0])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_25 [i_0] [i_3] [i_7] [i_7] [i_8] = ((/* implicit */unsigned short) ((((_Bool) var_15)) || (((/* implicit */_Bool) arr_15 [i_0] [i_3 - 3] [i_4] [i_7] [i_3]))));
                            var_20 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_8]))) | (((arr_17 [i_8] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_3])))))));
                        }
                    } 
                } 
            }
            var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (unsigned char)127))) ? (max((((-1LL) * (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_3]))))), (((/* implicit */long long int) arr_10 [i_0 + 1])))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)117)))));
            var_22 ^= ((/* implicit */unsigned char) ((arr_20 [i_0]) && (((/* implicit */_Bool) max((((/* implicit */long long int) arr_9 [i_0 - 1])), (var_4))))));
        }
        /* vectorizable */
        for (short i_9 = 0; i_9 < 23; i_9 += 2) 
        {
            var_23 = ((/* implicit */unsigned int) (unsigned char)139);
            var_24 -= ((/* implicit */unsigned int) (unsigned short)42639);
            arr_28 [i_0] = ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 + 1]));
        }
        for (long long int i_10 = 3; i_10 < 19; i_10 += 1) 
        {
            arr_31 [i_0] [i_0] = ((/* implicit */signed char) (((+(((long long int) 8169964769935304737LL)))) != (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_0] [i_10] [i_0])))));
            arr_32 [i_0] = ((/* implicit */short) ((min((((/* implicit */long long int) (+(((/* implicit */int) arr_13 [i_10] [i_10] [i_0] [i_0]))))), (((-4339930891831087678LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_10])) : (((/* implicit */int) (short)-1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) arr_24 [i_10 - 1] [i_10 - 1] [i_10] [i_0] [i_0 - 1] [i_0])))))));
        }
        arr_33 [i_0] = ((/* implicit */long long int) arr_14 [i_0] [i_0] [i_0]);
        arr_34 [i_0] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0]);
        var_25 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned short) arr_20 [i_0])))))))), (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)16383))))));
    }
    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 1) 
    {
        var_26 = ((((/* implicit */_Bool) max((arr_26 [i_11]), (arr_26 [i_11])))) ? (((((/* implicit */_Bool) var_1)) ? (max((((/* implicit */long long int) var_12)), (arr_1 [i_11]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (arr_16 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_11] [i_11])))))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_22 [i_11] [i_11] [i_11] [i_11])) ? (var_8) : (((/* implicit */int) arr_19 [i_11] [i_11] [i_11] [i_11])))) | (((/* implicit */int) ((arr_17 [i_11] [i_11]) > (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_11]))))))))));
        var_27 = ((/* implicit */_Bool) (unsigned char)255);
        arr_37 [i_11] [i_11] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)128))));
        /* LoopSeq 1 */
        for (int i_12 = 0; i_12 < 10; i_12 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_13 = 0; i_13 < 10; i_13 += 3) 
            {
                for (int i_14 = 0; i_14 < 10; i_14 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_15 = 2; i_15 < 9; i_15 += 1) 
                        {
                            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_14])) ? (max((arr_16 [i_11] [i_12] [i_13] [i_14] [i_11] [i_15]), (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)34)))));
                            var_29 = ((/* implicit */short) max((((((((/* implicit */int) (signed char)-71)) >= (((/* implicit */int) (unsigned char)128)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_11] [i_12] [i_13])) && (((/* implicit */_Bool) arr_47 [i_12] [i_11]))))) : (((((/* implicit */_Bool) arr_38 [i_11] [i_12])) ? (((/* implicit */int) (short)-27218)) : (((/* implicit */int) arr_39 [i_11] [i_12] [i_11])))))), (((/* implicit */int) ((unsigned short) ((-5648687225733806437LL) % (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_11] [i_12])))))))));
                            var_30 |= max((max((max((((/* implicit */long long int) arr_0 [20LL])), (arr_1 [i_11]))), (((/* implicit */long long int) ((signed char) var_10))))), (((((/* implicit */_Bool) arr_30 [i_12] [i_13] [i_15])) ? (arr_15 [i_11] [i_11] [i_13] [i_14] [i_15 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))));
                        }
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_11] [i_14]))) - (((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_0)), (var_12))))) + (max((-5648687225733806436LL), (((/* implicit */long long int) (unsigned char)123))))))));
                        var_32 = ((/* implicit */_Bool) arr_9 [i_14]);
                    }
                } 
            } 
            var_33 = ((/* implicit */unsigned int) ((var_11) == (((/* implicit */long long int) ((/* implicit */int) var_0)))));
        }
    }
    /* LoopSeq 1 */
    for (signed char i_16 = 0; i_16 < 20; i_16 += 2) 
    {
        arr_50 [i_16] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_30 [i_16] [i_16] [i_16])), (arr_19 [i_16] [i_16] [i_16] [i_16]))))) + (min((((/* implicit */long long int) arr_49 [i_16])), (var_11)))))) ? (((max((((/* implicit */long long int) arr_30 [i_16] [i_16] [i_16])), (var_4))) - (((/* implicit */long long int) (-(arr_16 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])))))) : (var_11)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_17 = 0; i_17 < 20; i_17 += 2) 
        {
            var_34 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 830532120997635284LL)) ? (arr_16 [i_16] [i_17] [i_16] [i_16] [i_17] [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_17]))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)117)))));
            var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_16] [i_17])) >> (((-5064999636457072492LL) + (5064999636457072516LL)))))) ? ((+(((/* implicit */int) var_2)))) : (var_8)));
            var_36 = ((/* implicit */_Bool) 76816905U);
            var_37 = var_4;
        }
        arr_54 [i_16] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_16] [i_16] [i_16])) ? (((/* implicit */int) var_1)) : (min((var_15), (((/* implicit */int) var_2))))))) ? (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)88)), ((short)-5470))))) - (((arr_6 [i_16] [i_16] [i_16]) - (((/* implicit */long long int) var_15)))))) : (((((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_16] [i_16] [i_16] [i_16]))) - (arr_15 [i_16] [i_16] [i_16] [i_16] [i_16]))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))));
        var_38 |= ((/* implicit */long long int) (+(((/* implicit */int) arr_18 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]))));
    }
    var_39 &= ((/* implicit */signed char) ((((_Bool) var_14)) ? (var_14) : (((/* implicit */int) var_0))));
    var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? ((+(max((603978802254229179LL), (((/* implicit */long long int) (unsigned char)138)))))) : (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) (unsigned char)0)), ((short)1023)))) - (var_8))))));
}
