/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190616
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
    var_12 |= ((/* implicit */unsigned long long int) ((int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) == (15253767609013043332ULL)))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0 + 4] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [i_0 + 1] [i_1]) * (arr_0 [i_0 - 1] [i_1])))) ? ((-(arr_0 [i_0 + 4] [i_0 + 4]))) : (arr_0 [i_0 + 4] [i_1])));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_5 [i_0 + 3] [i_2])) + (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1] [i_2]))))))) ? (((unsigned long long int) arr_5 [i_0 + 2] [i_2])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */int) (unsigned short)18024))))) ? (((((/* implicit */_Bool) var_0)) ? (arr_8 [i_2] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((unsigned int) (unsigned short)18011)))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 14; i_3 += 3) /* same iter space */
                    {
                        var_14 += ((/* implicit */int) arr_9 [i_0] [i_0 + 1]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            var_15 = ((/* implicit */signed char) (unsigned short)47520);
                            var_16 = ((/* implicit */unsigned char) ((signed char) ((unsigned short) -2062936142)));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_3 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_3 - 1])) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_1] [(unsigned char)11]))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */int) ((signed char) arr_2 [i_2] [13ULL] [i_3 - 2]));
                            var_19 ^= ((/* implicit */signed char) ((((/* implicit */int) (signed char)122)) | (((/* implicit */int) ((arr_0 [i_0 - 1] [i_0 - 1]) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18024))))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 3; i_6 < 14; i_6 += 3) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)18011)) >= (((/* implicit */int) arr_2 [i_0 + 2] [i_6 - 1] [i_6 - 3]))));
                        arr_19 [i_6] = ((/* implicit */short) (~(((/* implicit */int) (signed char)0))));
                        arr_20 [i_6] [i_0] [i_6] [(signed char)9] [i_6] = ((/* implicit */signed char) (-(((/* implicit */int) arr_15 [i_6] [i_2] [i_1] [i_1] [i_1] [i_0 + 4] [i_0]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_21 *= ((/* implicit */short) (~(((/* implicit */int) (short)8192))));
                                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((((/* implicit */_Bool) 2062936113)) ? (((/* implicit */int) (short)-4934)) : (((/* implicit */int) (unsigned short)18024)))) != (((/* implicit */int) max((arr_23 [i_0] [i_0 + 4] [i_0 - 1]), (arr_23 [i_0] [i_0 + 3] [i_0 - 1])))))))));
                                arr_27 [i_0] [i_0] [i_2] [i_7] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_0)) : (var_4)))) ? (((((/* implicit */_Bool) arr_21 [i_8 - 1] [i_0 + 1])) ? (((/* implicit */int) arr_5 [i_8 - 1] [i_0 - 1])) : (arr_21 [i_8 - 1] [i_0 + 3]))) : (((((/* implicit */_Bool) arr_21 [i_8 - 1] [i_0 + 2])) ? (((/* implicit */int) (unsigned short)18041)) : (arr_21 [i_8 - 1] [i_0 + 1])))));
                            }
                        } 
                    } 
                }
                var_23 = (-(((/* implicit */int) ((unsigned char) arr_10 [i_0 - 1] [i_0 + 4] [(short)11]))));
                var_24 = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) (short)-15035)) + (((/* implicit */int) ((unsigned char) (short)14103))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 23; i_10 += 3) 
        {
            for (unsigned char i_11 = 1; i_11 < 19; i_11 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_12 = 1; i_12 < 21; i_12 += 3) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                arr_40 [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((int) (unsigned char)195)))) ? (min((-2147483642), (((/* implicit */int) (unsigned char)79)))) : (((/* implicit */int) (signed char)106))));
                                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) <= (0ULL))))))) | ((-(((long long int) arr_30 [i_9] [i_11]))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned char) ((int) ((((/* implicit */int) (signed char)127)) >> (((((/* implicit */int) arr_29 [i_11 + 2])) - (96))))));
                    var_27 = ((signed char) ((unsigned short) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned char)83)) : (((/* implicit */int) (unsigned char)66)))));
                    var_28 = ((signed char) arr_37 [i_10] [i_10] [10] [i_10] [i_10] [i_10]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 3) 
        {
            for (unsigned short i_15 = 0; i_15 < 23; i_15 += 3) 
            {
                {
                    arr_46 [i_14] [i_14] [i_14] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_28 [i_14] [i_14])))))));
                    arr_47 [i_14] [i_14] [i_15] = ((/* implicit */unsigned int) min(((~(min((803669637), (((/* implicit */int) arr_28 [i_9] [i_9])))))), (((/* implicit */int) arr_29 [i_14]))));
                    arr_48 [i_9] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_9] [i_14])) ? (((arr_32 [i_9] [i_14]) | (((/* implicit */long long int) ((((/* implicit */int) var_3)) % (((/* implicit */int) arr_30 [i_15] [i_15]))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((((/* implicit */short) arr_34 [i_15] [i_9] [i_9])), (arr_39 [i_9] [i_9] [(signed char)16] [(signed char)16] [(signed char)16] [i_9]))))))));
                }
            } 
        } 
        arr_49 [i_9] [i_9] = ((/* implicit */unsigned long long int) (-(8923901369485288038LL)));
    }
    for (unsigned char i_16 = 0; i_16 < 23; i_16 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            for (unsigned long long int i_18 = 0; i_18 < 23; i_18 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_19 = 0; i_19 < 23; i_19 += 3) 
                    {
                        var_29 &= ((((/* implicit */int) arr_41 [(_Bool)1] [(unsigned char)1])) >= (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-8191)))));
                        var_30 += ((/* implicit */_Bool) min((((min((((/* implicit */int) arr_55 [i_16] [i_16] [i_18])), (arr_54 [(unsigned char)3] [i_17]))) * (((((/* implicit */_Bool) arr_54 [i_17] [i_19])) ? (((/* implicit */int) arr_30 [i_16] [i_17])) : (((/* implicit */int) arr_39 [i_18] [i_17] [i_18] [i_19] [i_19] [i_17])))))), (((/* implicit */int) (_Bool)1))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_20 = 2; i_20 < 20; i_20 += 3) 
                    {
                        for (unsigned long long int i_21 = 1; i_21 < 22; i_21 += 3) 
                        {
                            {
                                var_31 = ((/* implicit */short) arr_36 [i_17]);
                                arr_70 [i_20 - 1] [i_17] [i_20 - 1] [i_18] [i_18] [i_17] [i_16] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) (unsigned char)7)) << (((/* implicit */int) arr_60 [i_20 - 2] [i_16] [(short)1] [i_20 - 1])))));
                            }
                        } 
                    } 
                    arr_71 [i_16] [i_16] [(_Bool)1] |= ((/* implicit */long long int) max((((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_28 [i_16] [i_17])))))), (((arr_60 [i_16] [i_16] [i_18] [i_17]) ? (((/* implicit */int) arr_60 [(unsigned char)2] [i_17] [(unsigned short)19] [i_18])) : (((/* implicit */int) arr_60 [i_16] [i_17] [i_18] [i_18]))))));
                }
            } 
        } 
        var_32 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_9)), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)66))) : (var_4)))), (arr_59 [i_16] [i_16])))));
    }
    for (unsigned char i_22 = 0; i_22 < 23; i_22 += 3) /* same iter space */
    {
        var_33 ^= ((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) (unsigned char)62))));
        /* LoopNest 2 */
        for (signed char i_23 = 1; i_23 < 22; i_23 += 3) 
        {
            for (unsigned char i_24 = 0; i_24 < 23; i_24 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_25 = 0; i_25 < 23; i_25 += 3) 
                    {
                        var_34 = ((/* implicit */unsigned short) arr_30 [i_23 - 1] [i_23]);
                        arr_85 [20ULL] [20ULL] [i_24] [i_24] = ((/* implicit */signed char) ((arr_59 [i_25] [i_23 + 1]) * (((/* implicit */unsigned long long int) arr_72 [i_25]))));
                    }
                    var_35 ^= ((/* implicit */unsigned char) arr_78 [i_24] [i_23]);
                    var_36 = (i_24 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)66)) >> (((((/* implicit */int) arr_82 [i_23] [i_23 - 1] [i_23 + 1] [i_24])) - (108)))))) ? (((((/* implicit */_Bool) arr_59 [i_23 - 1] [i_23 - 1])) ? (arr_59 [i_23 + 1] [i_23 + 1]) : (arr_59 [i_23 - 1] [i_23 - 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-4934)) + (((/* implicit */int) (unsigned short)36726)))))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)66)) >> (((((((/* implicit */int) arr_82 [i_23] [i_23 - 1] [i_23 + 1] [i_24])) - (108))) + (122)))))) ? (((((/* implicit */_Bool) arr_59 [i_23 - 1] [i_23 - 1])) ? (arr_59 [i_23 + 1] [i_23 + 1]) : (arr_59 [i_23 - 1] [i_23 - 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-4934)) + (((/* implicit */int) (unsigned short)36726))))))));
                }
            } 
        } 
    }
    var_37 = ((/* implicit */unsigned short) ((unsigned char) ((min((((/* implicit */int) var_10)), (var_9))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_10))))))));
}
