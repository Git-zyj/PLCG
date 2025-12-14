/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205619
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_18 = ((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (short)-23352)))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_5)) ? (342902736) : (var_6)))));
        /* LoopSeq 2 */
        for (int i_1 = 3; i_1 < 7; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1 - 1] [i_0])))))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 2; i_2 < 8; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 7; i_3 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) max((var_20), (arr_0 [i_0])));
                            var_21 = ((/* implicit */_Bool) (unsigned char)174);
                            var_22 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (short)-12589)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-28248))) : (491417047U)))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
                        {
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (242034467) : (((/* implicit */int) (_Bool)1))));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) ((unsigned short) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            arr_17 [i_0] [i_0] [i_0] [i_3 + 4] [i_5] [i_5] = ((/* implicit */long long int) ((unsigned long long int) (unsigned char)141));
                            var_25 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))));
                        }
                        var_26 += ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)449))))) : (arr_7 [i_1] [i_3 + 3] [i_3 + 3] [i_1])));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned char) var_0);
            var_28 = ((((/* implicit */_Bool) -242034460)) ? (((/* implicit */int) (short)-28248)) : (90918970));
            var_29 -= ((/* implicit */unsigned char) (~(((/* implicit */int) var_12))));
        }
        for (int i_6 = 3; i_6 < 10; i_6 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_7 = 1; i_7 < 8; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -7639065402178090917LL))));
                            var_31 -= ((/* implicit */short) (~(((((/* implicit */_Bool) (short)-28714)) ? (((/* implicit */int) (short)511)) : (((/* implicit */int) var_16))))));
                        }
                    } 
                } 
                var_32 = ((/* implicit */long long int) (+(((/* implicit */int) var_16))));
                arr_33 [i_0] [(unsigned char)6] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) arr_27 [i_0] [i_6 - 1] [i_0])))))));
                var_33 += ((/* implicit */unsigned long long int) ((unsigned short) -242034432));
            }
            /* LoopSeq 1 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_34 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_10)))));
                arr_37 [i_0] [i_0] = ((/* implicit */long long int) (+(-1240859349)));
                /* LoopSeq 1 */
                for (long long int i_11 = 0; i_11 < 11; i_11 += 2) 
                {
                    var_35 += ((((/* implicit */_Bool) arr_19 [0] [i_6 - 1] [i_6 - 1])) ? (((/* implicit */int) (short)-8885)) : (arr_19 [i_6] [i_6 - 3] [i_6 - 3]));
                    var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) (-(var_14))))));
                }
                var_37 = (+(arr_38 [i_0] [i_0] [i_6 - 3] [i_6] [i_6] [i_10]));
                arr_41 [i_0] = (_Bool)1;
            }
        }
    }
    /* LoopNest 3 */
    for (unsigned short i_12 = 0; i_12 < 22; i_12 += 4) 
    {
        for (unsigned short i_13 = 0; i_13 < 22; i_13 += 3) 
        {
            for (signed char i_14 = 3; i_14 < 20; i_14 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_15 = 3; i_15 < 19; i_15 += 4) 
                    {
                        for (short i_16 = 1; i_16 < 20; i_16 += 2) 
                        {
                            {
                                var_38 += ((/* implicit */short) min((arr_52 [i_12] [i_12] [i_12] [(short)0] [i_12] [i_12]), (((/* implicit */unsigned short) (_Bool)1))));
                                var_39 ^= ((/* implicit */short) (!(((/* implicit */_Bool) min((290806126U), (((/* implicit */unsigned int) (unsigned char)3)))))));
                            }
                        } 
                    } 
                    arr_54 [i_13] [16] [i_14] [i_12] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_13] [i_13] [i_13])) ? (2193507677U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_14 + 1]))) : (min((5073799977387570807ULL), (((/* implicit */unsigned long long int) arr_47 [i_13] [i_13] [i_13] [i_13])))))), (5073799977387570829ULL)));
                    /* LoopNest 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (unsigned int i_18 = 2; i_18 < 21; i_18 += 2) 
                        {
                            {
                                var_40 = ((/* implicit */short) ((775555755346161808LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
                                var_41 = ((/* implicit */unsigned long long int) (+(5027758676395207499LL)));
                                arr_59 [i_13] [i_17] [i_14 - 2] [i_13] [i_13] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 13372944096321980805ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_12] [i_13] [i_13] [i_17] [i_18]))) : (arr_47 [7] [i_13] [i_17] [7]))) != (((/* implicit */long long int) min((arr_51 [i_18] [i_17] [i_13] [i_13] [i_13] [i_12]), (((/* implicit */int) (unsigned char)207))))))))) ^ (min((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_12])) ? (((/* implicit */int) (short)26128)) : (((/* implicit */int) var_12)))))))));
                                var_42 |= (((-(((/* implicit */int) (_Bool)1)))) * ((-(1838512000))));
                                arr_60 [i_12] [i_13] [(short)12] [i_13] [i_18 - 2] [i_17] [(short)12] = ((/* implicit */unsigned int) ((0ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28236)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_19 = 0; i_19 < 22; i_19 += 4) 
                    {
                        for (unsigned short i_20 = 1; i_20 < 20; i_20 += 2) 
                        {
                            {
                                arr_67 [i_13] = ((/* implicit */long long int) (+(((/* implicit */int) (short)2598))));
                                arr_68 [i_20] [5] [i_13] [5] [i_12] = ((/* implicit */int) (-(((unsigned long long int) ((((/* implicit */_Bool) (short)-17350)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
