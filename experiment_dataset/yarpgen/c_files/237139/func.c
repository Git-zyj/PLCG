/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237139
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
    var_11 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */int) (short)9225)) : (((/* implicit */int) (unsigned short)61032))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_12 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)65535)))) : ((-(min((((/* implicit */unsigned long long int) (signed char)23)), (var_8)))))));
        var_13 = ((/* implicit */unsigned int) max((var_13), ((~(var_3)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    var_14 ^= ((/* implicit */unsigned char) ((((_Bool) min((var_8), (17157394429287648169ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65507))) ^ (max((var_8), (((/* implicit */unsigned long long int) var_1)))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_2 - 1] [i_1] [i_0] [i_0])))))));
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)24)))))));
                }
            } 
        } 
        var_16 ^= ((/* implicit */_Bool) (~(-552545233)));
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) arr_2 [i_0] [i_0] [i_0]))));
    }
    for (signed char i_3 = 0; i_3 < 21; i_3 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_4 = 3; i_4 < 18; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                for (short i_6 = 1; i_6 < 20; i_6 += 2) 
                {
                    {
                        var_18 |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(arr_9 [i_4 - 3])))), (min((min((928822867940687029ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))), (((/* implicit */unsigned long long int) min((((/* implicit */short) var_7)), (var_10))))))));
                        var_19 |= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)2017))));
                        var_20 ^= ((/* implicit */_Bool) (~((-(((((/* implicit */_Bool) arr_7 [i_5] [i_5])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3] [i_4] [4U])))))))));
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) arr_8 [i_4])) ? (((/* implicit */int) (unsigned short)11489)) : (((/* implicit */int) (unsigned short)16417)))), (((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_5] [i_6 - 1] [i_4])) ? (arr_2 [i_4] [i_4] [i_5]) : (((/* implicit */int) var_0)))))) == (((/* implicit */int) min((((/* implicit */unsigned short) arr_16 [i_6] [i_6 + 1] [i_3])), (arr_4 [i_4 + 2] [i_5] [i_6 - 1] [i_6 - 1])))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_7 = 2; i_7 < 19; i_7 += 1) 
        {
            for (unsigned int i_8 = 2; i_8 < 20; i_8 += 4) 
            {
                {
                    var_22 ^= (unsigned short)61038;
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1)))))));
                    var_24 |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */short) arr_1 [i_7 + 1] [i_8 - 1]))))) ? (min((var_9), (((/* implicit */int) arr_17 [i_3] [i_8] [i_8] [i_8 - 2] [i_8])))) : (((((/* implicit */int) arr_17 [i_3] [i_7] [i_8] [i_8 - 1] [i_8])) ^ (((/* implicit */int) arr_1 [i_7 - 2] [i_8 - 1]))))));
                }
            } 
        } 
        var_25 ^= ((/* implicit */long long int) var_0);
        arr_22 [i_3] |= ((/* implicit */int) arr_10 [i_3] [i_3] [i_3]);
    }
    for (signed char i_9 = 0; i_9 < 21; i_9 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (-((((_Bool)1) ? (((/* implicit */int) arr_23 [i_9])) : (((/* implicit */int) arr_23 [i_9])))))))));
        var_27 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_9] [i_9]))))) ? ((~(var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2184474380U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_9] [i_9]))))))), (((/* implicit */unsigned long long int) arr_13 [i_9] [i_9] [i_9]))));
        /* LoopSeq 1 */
        for (long long int i_10 = 0; i_10 < 21; i_10 += 2) 
        {
            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_17 [i_9] [(signed char)18] [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_17 [i_9] [i_9] [i_10] [i_10] [i_9])) : (((/* implicit */int) arr_17 [i_9] [i_10] [i_9] [i_10] [i_9])))))))));
            var_29 |= ((/* implicit */unsigned int) min((((/* implicit */int) min((arr_17 [i_9] [i_9] [i_9] [i_10] [i_10]), (arr_17 [i_9] [i_9] [i_9] [i_9] [i_10])))), (((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (signed char)98))))));
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 3) 
            {
                for (signed char i_12 = 2; i_12 < 19; i_12 += 3) 
                {
                    {
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((((/* implicit */int) var_6)) + (2147483647))) >> (((((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_31 [i_10] [i_10] [i_12])))) ? (min((((/* implicit */long long int) arr_18 [i_10] [i_10] [i_12])), (arr_26 [i_9] [i_11] [i_9]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_9] [i_9] [i_12 + 2])))))))) + (7890935735051970352LL))))))));
                        arr_32 [i_9] [i_10] [i_10] [i_9] [i_10] |= ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) arr_11 [i_9] [i_12 - 2] [i_12 - 1] [i_12 + 1])))));
                        var_31 = ((/* implicit */unsigned int) max((var_31), (((((((/* implicit */_Bool) arr_30 [i_10] [i_12 + 2] [i_12 + 2])) ? (((((/* implicit */_Bool) (unsigned short)54042)) ? (((/* implicit */unsigned int) 801097710)) : (var_5))) : (max((((/* implicit */unsigned int) arr_30 [i_9] [i_9] [i_12])), (var_3))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_9] [(unsigned char)11] [i_9])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_27 [i_9]))))) ? (((((/* implicit */int) var_0)) / (((/* implicit */int) arr_25 [i_10] [i_11])))) : (((((/* implicit */int) arr_13 [i_9] [i_10] [3])) ^ (((/* implicit */int) var_6)))))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 21; i_13 += 2) 
            {
                for (unsigned short i_14 = 0; i_14 < 21; i_14 += 1) 
                {
                    {
                        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((unsigned short) var_1)))));
                        var_33 |= ((/* implicit */signed char) (~((~(-801097710)))));
                        /* LoopSeq 4 */
                        for (short i_15 = 0; i_15 < 21; i_15 += 1) 
                        {
                            arr_39 [i_9] [i_10] [19] [i_15] [i_15] [i_10] [i_10] |= (~(min((((/* implicit */unsigned long long int) arr_27 [i_9])), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8804))) : (arr_24 [i_9]))))));
                            var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_9] [i_9] [i_9] [i_14]))))) ? (((/* implicit */int) ((short) arr_5 [i_9] [i_9] [i_9] [i_9]))) : (((/* implicit */int) (_Bool)1)))))));
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 21; i_16 += 3) 
                        {
                            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) (~(0ULL))))));
                            var_36 |= ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (unsigned short)11493))) - (((-801097727) | ((-(((/* implicit */int) (short)(-32767 - 1)))))))));
                            var_37 ^= ((/* implicit */short) (~(var_9)));
                        }
                        for (signed char i_17 = 0; i_17 < 21; i_17 += 3) /* same iter space */
                        {
                            var_38 |= ((/* implicit */signed char) ((unsigned char) ((long long int) ((((/* implicit */int) (unsigned short)62135)) - (((/* implicit */int) (unsigned char)7))))));
                            var_39 = ((/* implicit */unsigned int) max((var_39), (((((/* implicit */_Bool) arr_2 [i_13] [i_10] [i_17])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_13] [i_13] [i_13]))))) : (((((((/* implicit */_Bool) (unsigned short)31626)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_3))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_10] [i_13])))))))));
                            arr_45 [i_9] [i_10] [i_13] [11U] [11U] |= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)127)), ((~(((/* implicit */int) arr_42 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))))))) ? (((((/* implicit */int) (short)3806)) ^ (((/* implicit */int) (unsigned short)14)))) : (min((((/* implicit */int) ((short) var_9))), ((-(((/* implicit */int) (unsigned short)12883))))))));
                            var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) min((((((/* implicit */_Bool) (-(var_2)))) ? ((-(((/* implicit */int) arr_0 [i_9])))) : (((/* implicit */int) (short)20638)))), (((/* implicit */int) var_1)))))));
                            var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) (~(((/* implicit */int) min((arr_21 [i_9] [i_10]), (arr_21 [i_17] [i_10])))))))));
                        }
                        for (signed char i_18 = 0; i_18 < 21; i_18 += 3) /* same iter space */
                        {
                            var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) ((((/* implicit */_Bool) (-(arr_24 [i_18])))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_4))))))))));
                            arr_49 [i_10] [i_18] [i_13] [(unsigned short)14] [i_18] |= arr_23 [i_9];
                            var_43 = ((/* implicit */int) min((var_43), ((-(min((((/* implicit */int) arr_42 [i_9] [i_18] [i_18] [i_9] [(unsigned short)16] [i_10])), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_17 [i_9] [i_9] [i_13] [i_14] [i_18])) : (((/* implicit */int) arr_29 [i_10] [i_10] [i_14] [i_18]))))))))));
                        }
                    }
                } 
            } 
            var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_48 [i_9] [i_10] [i_10])))))));
        }
    }
}
