/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201696
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
    var_19 |= ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) arr_0 [i_0 + 1] [i_0 - 2]);
        arr_3 [i_0] [i_0] = ((/* implicit */short) 3828124264U);
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((short) var_8))) ? (max((4294967277U), (((/* implicit */unsigned int) var_7)))) : (((((/* implicit */_Bool) min((-650246480), (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))) : (24U))))))));
        var_21 &= ((/* implicit */unsigned short) arr_0 [i_0 + 1] [(unsigned char)9]);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_22 = ((/* implicit */short) ((int) ((((/* implicit */int) var_2)) >> (9U))));
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) arr_7 [i_1]);
        var_23 &= ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) var_4))) > (-8698301014023265446LL))) ? (((/* implicit */int) arr_6 [i_1])) : (arr_0 [i_1] [i_1])));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 6; i_3 += 2) 
        {
            for (short i_4 = 2; i_4 < 9; i_4 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_0))));
                    var_25 -= ((/* implicit */_Bool) arr_5 [i_2]);
                }
            } 
        } 
        var_26 = ((/* implicit */signed char) ((unsigned char) var_12));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 9; i_5 += 3) 
    {
        arr_23 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_5])) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) (signed char)-16))));
        var_27 &= ((/* implicit */long long int) 4294967277U);
    }
    var_28 -= ((/* implicit */short) ((long long int) 4294967286U));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((arr_7 [i_6]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_10)))))));
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (short i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        for (signed char i_10 = 0; i_10 < 16; i_10 += 2) 
                        {
                            {
                                var_30 *= ((/* implicit */int) ((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_9]))) : (19U)));
                                var_31 |= ((/* implicit */unsigned short) ((_Bool) ((unsigned long long int) arr_5 [i_6])));
                                var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_10] [i_6])) ? (arr_35 [i_6] [i_7] [i_8] [i_6] [i_9]) : (arr_35 [i_7] [i_7] [i_8] [i_9] [i_6])));
                            }
                        } 
                    } 
                    arr_36 [i_6] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)10899))));
                }
            } 
        } 
        var_33 = ((/* implicit */short) var_13);
        var_34 -= ((/* implicit */unsigned short) var_1);
        var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) (+(((/* implicit */int) arr_5 [i_6])))))));
    }
    for (long long int i_11 = 3; i_11 < 12; i_11 += 4) 
    {
        var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_11])) ? (var_14) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))))) ? ((+(arr_34 [i_11 + 2] [i_11] [i_11 + 2]))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_14)) ? (4294967277U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))))) / ((~(3324427487U)))))))))));
        var_37 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_32 [i_11 + 1])), (3610408713U)))) ? (((((unsigned long long int) (unsigned short)56830)) + (((/* implicit */unsigned long long int) 2010807898U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)148)))));
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
        {
            for (unsigned long long int i_13 = 1; i_13 < 13; i_13 += 4) 
            {
                {
                    var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24932)) ? (min((684558582U), (((/* implicit */unsigned int) var_3)))) : (((unsigned int) var_2))))) ? (var_12) : (((((/* implicit */_Bool) ((arr_35 [i_11 + 2] [i_12 + 1] [i_13 + 1] [i_13] [i_13 + 1]) | (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)26))))) : (((unsigned int) var_3))))));
                    var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_13 - 1]))) / (arr_35 [i_11] [i_12 + 1] [i_11 - 1] [i_13 - 1] [i_13 + 1])))) ? (4294967295U) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (var_12) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))))));
                    var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)18317))))) ? ((+(((/* implicit */int) arr_5 [i_11 + 1])))) : (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (short)32026)) : (((/* implicit */int) (unsigned short)2))))));
                }
            } 
        } 
    }
}
