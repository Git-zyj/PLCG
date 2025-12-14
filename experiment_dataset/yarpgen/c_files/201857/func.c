/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201857
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
    var_12 -= var_4;
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((var_8), (((/* implicit */unsigned int) (unsigned short)60324)))), (((/* implicit */unsigned int) (unsigned short)5215))))) ? ((-((~(var_5))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)232)), (var_7)))))))));
    var_14 = ((/* implicit */unsigned short) ((signed char) max((max((((/* implicit */int) (unsigned short)25890)), (var_0))), (min((((/* implicit */int) var_10)), (var_2))))));
    var_15 = ((/* implicit */_Bool) (signed char)12);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) -206564183));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            var_16 -= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)62100)), (1805766488)))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)60324)), (var_5)))) : (min((((/* implicit */unsigned int) var_0)), (var_6))))), (min((max((((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_1])), (3U))), (((/* implicit */unsigned int) ((var_0) | (((/* implicit */int) (unsigned char)18)))))))));
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    for (long long int i_4 = 1; i_4 < 19; i_4 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */int) ((((/* implicit */int) ((signed char) min((571957152676052992LL), (((/* implicit */long long int) var_9)))))) != (((int) arr_3 [i_0] [i_1]))));
                            arr_17 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */int) ((((((/* implicit */int) arr_10 [i_4 - 1])) | (((/* implicit */int) var_3)))) >= (((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) (signed char)-13))))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_18 = ((/* implicit */short) (-(max((((/* implicit */long long int) (unsigned char)190)), (((((/* implicit */long long int) ((/* implicit */int) (short)2451))) + (514136659198015211LL)))))));
            var_19 = ((/* implicit */signed char) min((var_19), ((signed char)-13)));
            arr_20 [i_0] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (-(arr_6 [i_5] [i_5] [i_5])))), ((+(1434676729U)))));
            arr_21 [i_0] [i_5] = 90592188;
        }
        var_20 = max((((/* implicit */int) max((((unsigned short) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])), (var_10)))), (((((/* implicit */_Bool) (short)-2452)) ? (var_7) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))));
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 16; i_6 += 3) 
    {
        /* LoopSeq 4 */
        for (long long int i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            arr_27 [i_6] [i_7] [i_7] = ((/* implicit */int) arr_2 [i_6]);
            /* LoopSeq 2 */
            for (short i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_32 [i_6] [i_7] [i_8] [i_8] = ((/* implicit */int) (!(((((/* implicit */_Bool) 90592188)) || (((/* implicit */_Bool) (short)-2439))))));
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-26498)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -4937059892510615941LL)))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)23))) : (var_1)))));
                }
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_6])) ? (((/* implicit */int) ((((/* implicit */_Bool) 8ULL)) || (((/* implicit */_Bool) (unsigned short)60337))))) : ((-(((/* implicit */int) (unsigned char)24))))));
            }
            for (unsigned short i_10 = 2; i_10 < 15; i_10 += 2) 
            {
                var_23 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (unsigned short)5231))) ^ (536870784)));
                arr_36 [i_6] [i_6] [i_7] [i_10 + 1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_6] [i_7] [i_10 + 1])) ? (((/* implicit */int) arr_13 [i_6] [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_7])) : (((/* implicit */int) arr_13 [i_6] [i_10 - 1] [i_10 - 2] [i_6] [(unsigned char)0]))));
            }
        }
        for (unsigned char i_11 = 0; i_11 < 16; i_11 += 1) 
        {
            arr_41 [i_6] = ((/* implicit */_Bool) arr_0 [i_6]);
            var_24 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)48)))))));
            var_25 += ((/* implicit */unsigned char) ((_Bool) (unsigned char)202));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [i_6] [i_12] [(unsigned short)5] [i_6] [i_12] [i_12]))));
            arr_46 [i_6] &= ((((/* implicit */int) arr_26 [i_6] [i_6] [i_12])) / ((-(((/* implicit */int) arr_12 [i_6])))));
            var_27 *= ((/* implicit */signed char) ((((/* implicit */int) arr_14 [i_6] [i_12] [i_6] [(signed char)5] [i_12] [i_12])) > (((/* implicit */int) (unsigned short)62112))));
        }
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            var_28 *= ((/* implicit */signed char) (~(4294967295U)));
            arr_50 [i_6] [i_6] [11LL] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_10)))) * (((((/* implicit */_Bool) arr_25 [(_Bool)1])) ? (((/* implicit */long long int) 1006997581U)) : (arr_49 [i_13 - 1] [i_13 - 1])))));
        }
        /* LoopSeq 1 */
        for (int i_14 = 1; i_14 < 15; i_14 += 3) 
        {
            var_29 = ((/* implicit */unsigned short) var_9);
            var_30 = ((/* implicit */int) 9223372036854775781LL);
            /* LoopNest 2 */
            for (short i_15 = 2; i_15 < 13; i_15 += 3) 
            {
                for (short i_16 = 2; i_16 < 15; i_16 += 4) 
                {
                    {
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)60324)) || (((/* implicit */_Bool) arr_35 [i_14] [i_14 + 1] [i_6]))));
                        var_32 = (unsigned short)8;
                        arr_60 [i_6] [i_14] [i_15] [i_15] = ((/* implicit */int) ((arr_26 [i_16] [i_15 + 2] [i_14 + 1]) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1)))));
                    }
                } 
            } 
        }
    }
}
