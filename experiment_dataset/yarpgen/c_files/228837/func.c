/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228837
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
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_13 ^= ((/* implicit */signed char) (_Bool)1);
                    var_14 = ((/* implicit */short) min(((+(10072043243711235442ULL))), ((-(arr_4 [i_0 + 4] [i_0 + 1] [i_0 + 4])))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_15 *= ((/* implicit */signed char) (-(max((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (var_8) : (((/* implicit */int) arr_5 [(unsigned char)16] [(unsigned char)16] [(unsigned char)16] [i_3])))), (((/* implicit */int) arr_8 [i_0]))))));
                                var_16 = ((/* implicit */_Bool) min((var_16), ((_Bool)0)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (58272414297081404LL))))));
        /* LoopNest 3 */
        for (unsigned int i_6 = 1; i_6 < 21; i_6 += 4) 
        {
            for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                for (unsigned int i_8 = 0; i_8 < 22; i_8 += 3) 
                {
                    {
                        var_18 -= ((/* implicit */_Bool) (~(((/* implicit */int) var_9))));
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_16 [i_5] [i_5] [i_7])))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-1LL))))))));
                        arr_23 [i_6] [20U] [i_7] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_6] [i_6] [i_6] [i_6 - 1] [i_6 + 1])) ? (arr_18 [i_6] [i_6]) : (((/* implicit */long long int) var_6)))))));
                        var_20 = ((arr_17 [i_5] [i_5]) ^ (((/* implicit */int) ((58272414297081388LL) == (arr_18 [i_7] [i_7])))));
                    }
                } 
            } 
        } 
        var_21 *= ((/* implicit */int) arr_14 [(_Bool)1]);
        var_22 = (~(((/* implicit */int) (short)-32764)));
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) 7895441365370964120LL)) ? (((/* implicit */int) arr_20 [i_5] [i_5] [i_5] [i_5])) : (-100382992)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((-58272414297081413LL) / (-58272414297081404LL))))));
        /* LoopNest 3 */
        for (unsigned char i_10 = 0; i_10 < 22; i_10 += 1) 
        {
            for (long long int i_11 = 0; i_11 < 22; i_11 += 1) 
            {
                for (int i_12 = 0; i_12 < 22; i_12 += 3) 
                {
                    {
                        var_25 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_9] [(unsigned short)20] [(unsigned short)20] [8U])) ^ (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)32767)))))));
                        var_26 -= ((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) (short)-32753))))));
                        var_27 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_21 [i_9] [i_9] [(short)14] [i_11] [(short)14] [i_11])) ? (((/* implicit */int) arr_26 [i_9])) : (((/* implicit */int) var_7))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_13 = 0; i_13 < 22; i_13 += 3) 
        {
            for (unsigned short i_14 = 0; i_14 < 22; i_14 += 2) 
            {
                {
                    var_28 = ((/* implicit */signed char) (+(((/* implicit */int) arr_14 [i_14]))));
                    arr_38 [i_9] [i_9] [(short)14] = ((/* implicit */short) (-((-(((/* implicit */int) (short)32764))))));
                    var_29 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32758))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    arr_44 [i_9] [i_15] [i_15] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_40 [i_15])) ? (arr_36 [i_16]) : (((/* implicit */long long int) 125829120))))));
                    var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_39 [i_9] [i_16])) ? (((/* implicit */int) (signed char)106)) : (var_8))) / ((~(((/* implicit */int) (_Bool)0)))))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 1) 
    {
        var_31 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_31 [i_17])) >= (((((/* implicit */_Bool) arr_31 [i_17])) ? (((/* implicit */int) arr_31 [i_17])) : (((/* implicit */int) arr_31 [i_17]))))));
        /* LoopSeq 1 */
        for (signed char i_18 = 1; i_18 < 15; i_18 += 3) 
        {
            arr_50 [i_17] [i_17] [i_17] |= ((/* implicit */unsigned char) ((signed char) (_Bool)1));
            /* LoopNest 2 */
            for (int i_19 = 4; i_19 < 14; i_19 += 1) 
            {
                for (signed char i_20 = 2; i_20 < 15; i_20 += 1) 
                {
                    {
                        var_32 ^= ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */int) (short)27322)) & (((/* implicit */int) (signed char)-106))))) ? (((/* implicit */int) arr_27 [i_17])) : (((/* implicit */int) var_3))))));
                        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((((/* implicit */_Bool) 58272414297081398LL)) && (((/* implicit */_Bool) 60LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (!(((/* implicit */_Bool) (signed char)127))))))) : (2047U))))));
                    }
                } 
            } 
        }
        var_34 = ((/* implicit */unsigned short) ((max((58272414297081412LL), (((/* implicit */long long int) (short)-32767)))) <= (58272414297081368LL)));
    }
    for (signed char i_21 = 1; i_21 < 6; i_21 += 1) 
    {
        var_35 -= ((/* implicit */signed char) (~(min((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) -58272414297081388LL))))));
        var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_52 [1LL] [i_21] [i_21 - 1]) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 449601509U))))))) ? (min((58272414297081376LL), (((/* implicit */long long int) (signed char)106)))) : (((/* implicit */long long int) ((/* implicit */int) ((short) min(((short)30016), ((short)13408)))))))))));
        arr_60 [i_21] = ((((unsigned int) max((((/* implicit */unsigned int) var_3)), (arr_53 [i_21] [i_21])))) + (((/* implicit */unsigned int) ((/* implicit */int) var_4))));
        /* LoopNest 3 */
        for (unsigned short i_22 = 1; i_22 < 8; i_22 += 4) 
        {
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                {
                    {
                        var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) ((arr_1 [i_22] [i_22]) << (((((((/* implicit */_Bool) (~(arr_4 [i_22] [i_22] [i_22])))) ? (arr_12 [4ULL] [i_22 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (var_4))))))) - (6480150641624516819ULL))))))));
                        var_38 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)0))));
                        arr_68 [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(min((((/* implicit */long long int) arr_7 [i_21] [i_22] [i_22] [i_22 - 1])), (arr_47 [i_23])))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_2))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_22])))))) >= (min((((/* implicit */long long int) -472399994)), (58272414297081364LL))))))));
                    }
                } 
            } 
        } 
    }
}
