/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212142
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) >> (((((((((/* implicit */int) var_6)) + (2147483647))) >> (((/* implicit */int) arr_0 [i_0])))) - (1073731731)))));
        /* LoopSeq 3 */
        for (signed char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            var_18 += ((/* implicit */signed char) (~(((/* implicit */int) var_13))));
            var_19 -= ((/* implicit */unsigned char) var_7);
        }
        for (short i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            var_20 &= ((/* implicit */_Bool) (short)-30);
            var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11588)) ? (6121492877218381348LL) : (-7548071037848700647LL))))));
            var_22 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_6)) ? (2272875681U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)11588)))))));
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (arr_5 [i_0])))) != (((/* implicit */int) arr_8 [i_0]))));
                arr_10 [i_0] [i_2] [i_3] = ((/* implicit */int) ((7182302385791649837LL) > (((/* implicit */long long int) ((/* implicit */int) (signed char)116)))));
                var_24 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_0 [i_2]))))));
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    var_25 = ((/* implicit */unsigned long long int) arr_8 [i_0]);
                    var_26 = ((/* implicit */unsigned long long int) ((arr_11 [i_0] [i_0] [i_0] [i_0]) && ((_Bool)0)));
                }
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2272875663U)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (947027579U)));
                    arr_15 [i_0] [i_0] [i_5] [i_0] [i_5] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                }
                /* LoopSeq 1 */
                for (short i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    var_28 = ((/* implicit */short) 451106503);
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        arr_22 [i_7] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) -6364911849798151084LL);
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16362738525077560987ULL)) ? (((/* implicit */int) (short)-5701)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24573))) : ((+(0ULL)))));
                        var_30 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) (short)14))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_11))) ? ((~(((/* implicit */int) (signed char)0)))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_11 [i_0] [i_2] [i_3] [i_3]))))));
                        var_32 |= ((/* implicit */unsigned char) ((unsigned long long int) (_Bool)0));
                        var_33 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) 2500119649U)) ? (1116892707587883008ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2048))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_18 [i_0] [i_0] [i_3] [i_0] [i_8]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
                        var_34 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4674135376830481830ULL)) ? (((/* implicit */int) (unsigned char)229)) : (((((/* implicit */_Bool) (short)-14501)) ? (((/* implicit */int) (short)-22597)) : (((/* implicit */int) arr_4 [i_2]))))));
                    }
                    var_35 ^= ((/* implicit */short) var_5);
                }
            }
            /* LoopSeq 2 */
            for (unsigned char i_9 = 3; i_9 < 13; i_9 += 3) /* same iter space */
            {
                var_36 = ((/* implicit */int) (~(var_8)));
                var_37 = ((/* implicit */int) (-(arr_14 [i_9] [i_9] [i_9] [i_9 - 3] [i_9 - 2] [i_9])));
                var_38 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
            }
            for (unsigned char i_10 = 3; i_10 < 13; i_10 += 3) /* same iter space */
            {
                var_39 = ((/* implicit */short) var_8);
                var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_27 [i_10] [i_10 - 1] [i_10 - 3] [i_10])) == (((/* implicit */int) var_4))));
            }
        }
        for (int i_11 = 4; i_11 < 11; i_11 += 4) 
        {
            var_41 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)0))));
            var_42 += ((/* implicit */int) var_6);
            var_43 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)46))) % (3004539853487299023ULL)));
        }
    }
    for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 4) 
    {
        var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(1115222570)))) ? (((((/* implicit */_Bool) min(((unsigned short)26297), (((/* implicit */unsigned short) (_Bool)1))))) ? (((var_2) ? (((/* implicit */unsigned long long int) var_7)) : (9223372036854775807ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_12] [i_12] [i_12] [i_12]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_12])))));
        arr_36 [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_27 [i_12] [i_12] [i_12] [i_12])), (14ULL)))) ? (((/* implicit */int) arr_4 [i_12])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_25 [i_12] [i_12] [i_12])))) ? (((/* implicit */int) min((arr_2 [i_12]), (((/* implicit */unsigned short) (short)-1))))) : ((-(((/* implicit */int) (_Bool)1))))))));
        arr_37 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_10)))))) * (((((-6642775776516843141LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15995))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_27 [i_12] [i_12] [i_12] [i_12]))))));
    }
    for (short i_13 = 0; i_13 < 25; i_13 += 4) 
    {
        var_45 += ((/* implicit */unsigned int) ((17600479114373392640ULL) + (((((/* implicit */_Bool) -888363514)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9344609668144657039ULL)))));
        /* LoopSeq 1 */
        for (int i_14 = 0; i_14 < 25; i_14 += 4) 
        {
            var_46 = ((/* implicit */unsigned char) arr_41 [i_13]);
            var_47 = (-(min(((-(((/* implicit */int) (unsigned char)76)))), (((/* implicit */int) ((unsigned short) var_12))))));
        }
        var_48 = ((/* implicit */_Bool) ((unsigned short) arr_40 [i_13] [i_13] [i_13]));
    }
    /* LoopSeq 4 */
    for (int i_15 = 3; i_15 < 10; i_15 += 3) 
    {
        var_49 = ((/* implicit */short) arr_4 [i_15]);
        var_50 -= (((_Bool)1) ? (2198754820096LL) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [(signed char)12] [(signed char)12]))));
        arr_46 [i_15] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4182)) ? (((/* implicit */unsigned int) var_1)) : (2743476154U)))) ? (4633659380651605127LL) : (((/* implicit */long long int) 1115222570)));
    }
    for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 4) 
    {
        var_51 = ((/* implicit */short) min((var_51), (((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
        var_52 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 15473582030029524964ULL)) ? (((/* implicit */int) (unsigned char)88)) : (((/* implicit */int) (_Bool)0))));
        var_53 = ((/* implicit */unsigned char) max((var_53), (((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_47 [i_16])))))))));
    }
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        var_54 = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) (_Bool)1)), (5389430851696849224ULL))), (max((((/* implicit */unsigned long long int) 37520833)), (((((/* implicit */_Bool) (unsigned short)14307)) ? (7578718803332860465ULL) : (var_12)))))));
        var_55 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) (signed char)0)) * (((/* implicit */int) (!((_Bool)0)))))));
        var_56 = ((/* implicit */unsigned char) (short)2016);
    }
    for (short i_18 = 3; i_18 < 11; i_18 += 3) 
    {
        var_57 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_18])) ? (var_8) : (((/* implicit */unsigned long long int) 3211877478U))))) ? (268435455LL) : (((/* implicit */long long int) 1448288144))))) ? ((~(((/* implicit */int) arr_0 [i_18 - 3])))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)64)) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)8987))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_19 = 1; i_19 < 13; i_19 += 2) 
        {
            var_58 += ((/* implicit */unsigned int) ((-4915286381667932450LL) - (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_18] [i_18 - 3] [i_18] [(unsigned short)6])))));
            arr_57 [i_19] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-5))));
        }
        for (int i_20 = 1; i_20 < 13; i_20 += 3) 
        {
            var_59 += ((/* implicit */unsigned long long int) ((((unsigned int) (-(((/* implicit */int) (short)-20))))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_11 [i_20] [i_20 + 1] [i_20 + 1] [i_20])) : (((/* implicit */int) arr_11 [i_20] [i_20] [i_20] [i_18 - 2])))))));
            arr_60 [i_20] = ((/* implicit */unsigned int) var_10);
        }
        arr_61 [i_18] [i_18] = ((/* implicit */unsigned short) 2272875681U);
        arr_62 [i_18] = var_12;
    }
    var_60 = ((/* implicit */signed char) var_4);
}
