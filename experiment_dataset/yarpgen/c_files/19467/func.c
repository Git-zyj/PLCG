/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19467
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
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_12)) : ((+(var_8)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) ((unsigned char) var_3));
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 8145147857191374163ULL))));
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            var_19 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0 - 1] [i_1]))));
                            var_20 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) 8145147857191374189ULL)) || (((/* implicit */_Bool) 10301596216518177453ULL))))) << (((((((/* implicit */_Bool) var_9)) ? (15653798443817490975ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0]))))) - (15653798443817490955ULL)))));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 8145147857191374143ULL)) ? (10301596216518177435ULL) : (((/* implicit */unsigned long long int) 2002629217))));
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65518))) + (10301596216518177464ULL)))) ? (((((/* implicit */_Bool) arr_3 [i_0] [7ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (10301596216518177446ULL))) : (((/* implicit */unsigned long long int) 4294967295U))));
                        }
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            arr_18 [i_0] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_2 [i_0])))));
                            var_23 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)24215))));
                        }
                        for (int i_6 = 1; i_6 < 20; i_6 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)511))));
                            arr_23 [i_0] [i_1] [i_2] [(short)12] [i_0] [i_0] [i_1] = (+(((/* implicit */int) (signed char)81)));
                            arr_24 [i_0] [i_1] [i_1] [18] [i_1] [i_1] = ((((/* implicit */_Bool) (~(-1700583497)))) ? (((/* implicit */int) arr_15 [i_0 + 1] [i_1] [i_2] [i_3] [i_6 + 1] [i_3])) : (((/* implicit */int) ((((/* implicit */int) arr_16 [i_0] [i_2] [1U])) >= (((/* implicit */int) (unsigned short)48045))))));
                        }
                        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((4294967295U) << (((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            for (signed char i_8 = 1; i_8 < 21; i_8 += 2) 
            {
                {
                    arr_33 [i_0] [i_0] [21ULL] = ((/* implicit */signed char) arr_31 [i_0]);
                    arr_34 [i_0] [i_7] [i_8] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [(unsigned short)14] [i_8 + 1] [i_0 - 2] [i_0 - 3])) ? (arr_10 [i_8] [i_8 - 1] [i_0 + 1] [i_0 - 2]) : (arr_10 [i_8] [i_8 + 1] [i_0 - 1] [i_0 - 3])));
                    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_21 [i_0] [(unsigned short)8] [i_8] [i_8] [i_0] [i_7] [i_0])) : (((/* implicit */int) var_0))))))))));
                    var_27 = ((/* implicit */_Bool) (~(var_6)));
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned char) ((signed char) arr_29 [i_0 - 3] [i_0] [i_0]));
        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_0 [12U])))))));
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 23; i_9 += 4) 
        {
            for (unsigned long long int i_10 = 3; i_10 < 22; i_10 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (int i_12 = 0; i_12 < 23; i_12 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned int) var_9);
                                arr_46 [i_0] [i_9] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 - 2])) ? (26092299U) : (((((/* implicit */_Bool) 3285114280U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))));
                                var_31 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-843)) ? (-9223372036854775805LL) : (7496447363285031035LL))) > ((-(var_11)))));
                                var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_0 - 1])) ? (((/* implicit */int) arr_25 [i_0 - 3])) : (((/* implicit */int) arr_25 [i_0 - 3])))))));
                            }
                        } 
                    } 
                    arr_47 [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) 2941862198434387675ULL);
                    arr_48 [6LL] [i_9] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                    arr_49 [i_0] [i_0] [i_9] [i_10] = ((/* implicit */unsigned char) (~(arr_31 [i_0 + 1])));
                }
            } 
        } 
    }
    var_33 = ((/* implicit */signed char) min((((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) >= (var_10)))), (var_4)));
    /* LoopNest 3 */
    for (unsigned char i_13 = 2; i_13 < 14; i_13 += 4) 
    {
        for (long long int i_14 = 2; i_14 < 14; i_14 += 4) 
        {
            for (signed char i_15 = 0; i_15 < 16; i_15 += 1) 
            {
                {
                    var_34 = ((/* implicit */int) (signed char)-58);
                    var_35 -= ((/* implicit */int) arr_16 [i_14] [i_14 + 2] [i_14]);
                    /* LoopSeq 1 */
                    for (unsigned char i_16 = 1; i_16 < 15; i_16 += 2) 
                    {
                        var_36 = ((/* implicit */signed char) max(((-(15504881875275163935ULL))), (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                        arr_61 [i_13] [i_13] [i_16] = ((/* implicit */short) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [2LL] [i_14] [i_14]))) : (((((/* implicit */_Bool) (short)22653)) ? (arr_32 [(short)15]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))), (((/* implicit */unsigned int) ((arr_57 [i_13 - 1] [i_14 - 2]) > (((/* implicit */unsigned int) min((1545793635), (((/* implicit */int) (unsigned char)10))))))))));
                        arr_62 [10U] [i_14] [i_14] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_39 [12LL] [i_14 + 2] [i_14 - 2] [(unsigned char)19])) ? (arr_39 [(unsigned char)0] [(unsigned char)0] [i_14 + 1] [18]) : (arr_39 [i_14] [(_Bool)1] [i_14 + 1] [i_14])))));
                        var_37 ^= ((/* implicit */unsigned long long int) ((((min((arr_51 [i_13]), (((/* implicit */long long int) (signed char)29)))) < (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-29))) : (arr_36 [i_13] [i_13])))))) ? (((/* implicit */long long int) max((((unsigned int) 9223372036854775807LL)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -923069290)) ? (882995286) : (-1))))))) : (((max((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)60991)))) << (((((arr_51 [i_13]) + (1377840761706677647LL))) - (27LL)))))));
                    }
                }
            } 
        } 
    } 
}
