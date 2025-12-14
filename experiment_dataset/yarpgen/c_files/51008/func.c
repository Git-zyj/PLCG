/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51008
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
    var_14 = ((/* implicit */int) ((long long int) var_7));
    var_15 ^= ((/* implicit */long long int) var_3);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_9 [i_3] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)65504))));
                        var_16 += ((/* implicit */unsigned char) arr_7 [i_0] [i_1] [i_0 + 1] [i_3]);
                        arr_10 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */int) (unsigned short)3170)) : (((/* implicit */int) arr_2 [i_3] [i_2] [i_1]))))));
                        arr_11 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_0 - 1])) * (arr_0 [i_0])));
                        var_17 = ((/* implicit */signed char) arr_1 [i_0] [i_1 - 1]);
                    }
                } 
            } 
        } 
        arr_12 [i_0 - 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)1)) - (((/* implicit */int) arr_8 [i_0]))))) | (((unsigned int) (short)32767))));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                {
                    var_18 = ((/* implicit */long long int) min((var_18), (((((/* implicit */_Bool) (short)32760)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5]))) : (-1LL)))));
                    var_19 = ((/* implicit */unsigned short) arr_0 [i_0]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 4) 
    {
        arr_20 [i_6] [i_6] = ((/* implicit */unsigned int) (+((+((-9223372036854775807LL - 1LL))))));
        var_20 = (!(((/* implicit */_Bool) ((9223372036854775807LL) - (((/* implicit */long long int) 2147483631))))));
        var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_0)) + (((/* implicit */int) (unsigned short)28633)))) * (((((/* implicit */int) (signed char)15)) + (((/* implicit */int) (signed char)126))))));
    }
    for (unsigned char i_7 = 1; i_7 < 11; i_7 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_8 = 4; i_8 < 8; i_8 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_9 = 2; i_9 < 9; i_9 += 3) /* same iter space */
            {
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) ((-8809791192193039732LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-126)))))) : (arr_0 [(signed char)4])));
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_19 [i_8 + 2] [i_7 + 1])))))));
            }
            for (unsigned char i_10 = 2; i_10 < 9; i_10 += 3) /* same iter space */
            {
                var_24 *= ((/* implicit */long long int) ((int) (signed char)0));
                /* LoopNest 2 */
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 3) 
                    {
                        {
                            arr_36 [i_7] [i_8 - 3] [i_10] [i_7] [i_7] [i_7] [i_12] = ((/* implicit */unsigned long long int) arr_5 [i_10] [i_11] [i_12]);
                            var_25 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)126)) + (((/* implicit */int) (signed char)-122))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_13 = 0; i_13 < 12; i_13 += 4) 
                {
                    var_26 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_27 [i_7 + 1]))));
                    var_27 = ((/* implicit */signed char) ((((/* implicit */int) arr_27 [i_7 + 1])) < (((/* implicit */int) arr_30 [i_8 + 4]))));
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((966738144U) % (((/* implicit */unsigned int) arr_17 [i_10] [i_8]))))) != (((((/* implicit */_Bool) 562949953421312LL)) ? (((/* implicit */long long int) arr_21 [i_7])) : (8809791192193039746LL)))));
                    arr_39 [i_7] [i_7] [i_10] [i_10] = ((/* implicit */int) ((unsigned char) (~(3328229130U))));
                    arr_40 [i_10] = (-(((/* implicit */int) (signed char)-126)));
                }
                var_29 = ((/* implicit */unsigned short) (signed char)-16);
                var_30 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)9)) ? (((/* implicit */int) arr_27 [i_7])) : (((/* implicit */int) arr_13 [i_10])))) >> (((18446744073709551615ULL) - (18446744073709551611ULL)))));
            }
            var_31 = ((/* implicit */long long int) (unsigned short)65531);
            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)44075)) ? (((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */int) (short)-18666)) : (((/* implicit */int) (signed char)-119)))) : (((/* implicit */int) (signed char)15))));
        }
        /* LoopNest 3 */
        for (unsigned short i_14 = 2; i_14 < 10; i_14 += 4) 
        {
            for (long long int i_15 = 0; i_15 < 12; i_15 += 4) 
            {
                for (signed char i_16 = 0; i_16 < 12; i_16 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_17 = 2; i_17 < 10; i_17 += 2) 
                        {
                            arr_52 [i_7] [i_7] [i_7] [i_15] [i_16] [i_17] = ((/* implicit */_Bool) arr_35 [i_17]);
                            var_33 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((max((var_8), (((/* implicit */int) (signed char)113)))) > (((/* implicit */int) ((unsigned char) arr_47 [i_7] [i_7] [i_7] [i_7])))))) > (max((((((/* implicit */int) arr_35 [i_14])) >> (((((/* implicit */int) (signed char)-106)) + (119))))), (((/* implicit */int) (unsigned char)0))))));
                            arr_53 [i_17 + 1] [i_16] [i_14] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_7 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (8809791192193039732LL)))) ? (arr_50 [i_7 - 1]) : ((~(-2147483630)))));
                        }
                        for (unsigned int i_18 = 1; i_18 < 10; i_18 += 2) 
                        {
                            var_34 = ((((/* implicit */int) ((((((/* implicit */_Bool) (signed char)3)) && (((/* implicit */_Bool) (signed char)-17)))) && (((/* implicit */_Bool) arr_33 [i_14] [i_14] [i_18] [i_18] [i_18 + 1]))))) / (((/* implicit */int) ((_Bool) (-(arr_17 [i_7] [i_14]))))));
                            var_35 = ((/* implicit */unsigned short) ((unsigned int) ((short) (signed char)120)));
                            var_36 = ((/* implicit */unsigned short) (signed char)-111);
                            arr_57 [i_7] [i_14 + 2] [i_14 + 2] [i_16] [i_16] [i_16] [i_18] = ((/* implicit */unsigned short) ((((long long int) arr_0 [i_14])) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)-115)) : (-106903771))))));
                        }
                        arr_58 [i_16] [i_15] [i_14] [i_7] = ((/* implicit */long long int) ((((unsigned long long int) ((((/* implicit */_Bool) -2147483630)) ? (arr_37 [i_16] [i_7] [i_14] [i_7] [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-17)))))) >> (((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_19 [i_7] [i_15])), (4294967295U)))) ? (((/* implicit */int) arr_35 [i_14])) : (((/* implicit */int) ((unsigned char) (signed char)-99))))) - (55062)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_19 = 1; i_19 < 17; i_19 += 3) 
    {
        var_37 = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_19] [i_19] [(signed char)7])) ? (((/* implicit */int) var_11)) : (arr_17 [i_19] [i_19])))));
        var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_19] [i_19])) ? (((int) min((((/* implicit */int) (unsigned short)30831)), (arr_17 [i_19] [i_19])))) : ((~((+(((/* implicit */int) (unsigned short)52911))))))));
    }
}
