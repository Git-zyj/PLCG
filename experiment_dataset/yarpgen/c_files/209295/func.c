/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209295
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)247))));
                                var_21 *= ((/* implicit */signed char) (+(((/* implicit */int) (((-(var_5))) < (((long long int) (unsigned char)99)))))));
                                var_22 |= ((/* implicit */unsigned int) 2097024);
                                arr_15 [i_0] [i_1] [i_1] [i_1 + 1] [10] [5U] [i_4 + 1] |= ((/* implicit */signed char) ((long long int) var_9));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)117))));
                /* LoopSeq 2 */
                for (unsigned char i_5 = 4; i_5 < 12; i_5 += 1) 
                {
                    arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_7 [i_0] [i_0] [i_0])))) ? ((~(var_12))) : (((/* implicit */int) arr_17 [i_0] [i_1 - 2] [i_0] [i_5 + 1]))));
                    arr_21 [i_0] [i_1 + 2] [i_5] [i_0] = ((/* implicit */unsigned char) (signed char)-114);
                }
                for (unsigned char i_6 = 2; i_6 < 11; i_6 += 1) 
                {
                    arr_25 [i_6] [i_6] [i_6 + 1] [i_6 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_6 - 1] [i_6 + 1] [i_1] [3U] [i_0] [i_0])) ? (var_16) : (((/* implicit */int) arr_0 [i_0] [i_6 + 2]))));
                    var_23 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_22 [i_0] [i_1] [i_6 + 2] [i_1 + 1]))))) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_6] [i_1])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_1 - 1]))))));
                    var_24 = ((/* implicit */unsigned char) -35873253);
                    arr_26 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) -590079722)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((8191) & (((/* implicit */int) (unsigned char)201))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_11)) << (((var_6) - (3036299045U))))))))) : (((/* implicit */int) ((unsigned short) 3335744328290300282LL)))));
                }
                var_25 = ((/* implicit */signed char) max((((/* implicit */long long int) arr_0 [i_1] [i_1])), (3226521080982289424LL)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_7 = 2; i_7 < 12; i_7 += 4) 
    {
        for (unsigned char i_8 = 4; i_8 < 13; i_8 += 3) 
        {
            for (signed char i_9 = 1; i_9 < 10; i_9 += 4) 
            {
                {
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)33365)))))));
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) var_11))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_11 = 0; i_11 < 14; i_11 += 4) 
                        {
                            arr_40 [i_7] [i_8 - 4] [i_7] [i_7] [i_11] |= ((/* implicit */unsigned short) var_7);
                            arr_41 [i_10] [i_8] [i_7] = ((/* implicit */int) ((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12358)))));
                        }
                        var_28 = ((/* implicit */long long int) arr_27 [i_10] [i_7]);
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 449012071)) ? (((((/* implicit */_Bool) var_12)) ? (9223372036854775802LL) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_8] [i_8]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)43)))));
                    }
                    for (unsigned int i_12 = 1; i_12 < 13; i_12 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned int) arr_34 [i_7 - 2] [i_12 + 1]);
                        var_31 *= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_17))) % (-8466018806908748347LL)))) ? (((/* implicit */int) (unsigned short)65535)) : ((+(((/* implicit */int) (unsigned char)74)))))));
                    }
                    for (unsigned char i_13 = 1; i_13 < 13; i_13 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned char) min((((/* implicit */long long int) 1637948558U)), (arr_32 [i_13] [i_9] [i_7 + 2] [i_7 + 2])));
                        var_33 -= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_42 [(unsigned char)8] [i_7] [i_7] [i_7] [i_7] [i_7]) | (((/* implicit */int) (unsigned char)252))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_6)))) : ((+(0LL)))));
                        var_34 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 2517732510799059255LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)3035))));
                    }
                    var_35 = ((/* implicit */int) var_1);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_14 = 3; i_14 < 12; i_14 += 3) /* same iter space */
    {
        var_36 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)46341))));
        /* LoopNest 2 */
        for (unsigned char i_15 = 0; i_15 < 13; i_15 += 1) 
        {
            for (long long int i_16 = 1; i_16 < 12; i_16 += 1) 
            {
                {
                    var_37 ^= min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 8715845398655250135LL)) ? (1170604184U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)48453), (((/* implicit */unsigned short) var_8)))))))), (arr_28 [i_16] [i_15]));
                    var_38 = ((/* implicit */long long int) max((var_38), (arr_24 [i_14] [i_15] [i_16])));
                    var_39 *= ((/* implicit */signed char) var_4);
                }
            } 
        } 
        var_40 ^= ((/* implicit */int) arr_50 [i_14 - 2]);
        var_41 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(322087029U)))) ? (((/* implicit */int) arr_45 [i_14 + 1] [i_14] [i_14] [i_14 - 2] [(unsigned char)0])) : ((-(arr_42 [i_14 - 3] [i_14] [3U] [i_14] [i_14 + 1] [i_14])))));
    }
    for (signed char i_17 = 3; i_17 < 12; i_17 += 3) /* same iter space */
    {
        var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_36 [7U])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (signed char)40))))) : (var_2))))))));
        var_43 = ((/* implicit */int) min(((~(arr_27 [i_17] [i_17]))), (((/* implicit */unsigned int) (signed char)18))));
        var_44 = ((/* implicit */signed char) arr_44 [(unsigned short)13] [i_17] [i_17] [i_17 + 1]);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_18 = 0; i_18 < 18; i_18 += 3) 
    {
        var_45 = ((/* implicit */int) var_6);
        var_46 ^= ((/* implicit */unsigned char) (unsigned short)43700);
    }
    for (long long int i_19 = 0; i_19 < 23; i_19 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_20 = 0; i_20 < 23; i_20 += 4) 
        {
            for (signed char i_21 = 0; i_21 < 23; i_21 += 1) 
            {
                {
                    var_47 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) (unsigned short)7818)))));
                    arr_68 [i_21] [i_20] [i_20] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_62 [i_21])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_62 [i_19])))))) : (max((((/* implicit */long long int) arr_60 [i_19] [i_21])), (((((/* implicit */_Bool) var_14)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)24)))))))));
                }
            } 
        } 
        arr_69 [i_19] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(1331607525)))))))));
        var_48 = ((/* implicit */unsigned int) max((var_48), (((/* implicit */unsigned int) ((signed char) 4294967295U)))));
        var_49 -= ((/* implicit */unsigned int) (~((-2147483647 - 1))));
        var_50 = ((/* implicit */unsigned int) var_1);
    }
    var_51 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)113)) ? ((+(var_5))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)241))))))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))));
}
