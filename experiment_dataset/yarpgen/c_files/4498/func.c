/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4498
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1]))) : (((/* implicit */long long int) ((3727914100U) << (((max((arr_0 [i_0]), (arr_0 [i_0]))) - (8303552521826211411LL))))))));
        arr_2 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)65535))), (var_12)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (unsigned char i_3 = 3; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)13)) <= (((/* implicit */int) (short)2507))));
                        var_23 = ((/* implicit */signed char) (_Bool)0);
                        arr_10 [i_3] [i_3] [i_2] [i_3 - 1] [i_1] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32757)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) arr_7 [i_0 + 1])) : (((int) var_1)));
                    }
                } 
            } 
            var_24 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (-1300533581));
            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) -1516022280))) ? ((((-9223372036854775807LL - 1LL)) - (((/* implicit */long long int) ((/* implicit */int) (short)-32759))))) : (((long long int) var_19))));
            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((var_16) >> (((((/* implicit */_Bool) 927499363U)) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) : (((/* implicit */int) var_15)))))))));
            arr_11 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32758)) ? (arr_8 [i_0] [i_1] [i_1] [i_0 + 1]) : (arr_8 [i_1] [i_1] [i_1] [i_1])));
        }
        arr_12 [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) min((7654418057918391495ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) : ((+(arr_5 [i_0 + 2] [i_0 + 1])))));
    }
    /* LoopSeq 3 */
    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */short) var_7);
        /* LoopNest 3 */
        for (unsigned char i_5 = 1; i_5 < 16; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    {
                        arr_23 [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) var_7)))));
                        arr_24 [i_4] [i_5 - 1] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483638)) ? (4294967294U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7)))));
                        arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) (+((+(((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) -2147483640)))))))));
                        arr_26 [i_4] [i_5] [i_6] [i_6] [i_7] [i_7] = ((/* implicit */signed char) ((((((/* implicit */int) (short)32767)) & (((/* implicit */int) arr_15 [i_5 - 1])))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_5 + 1])) && (((/* implicit */_Bool) var_3)))))));
                    }
                } 
            } 
        } 
        arr_27 [i_4] = ((/* implicit */unsigned char) ((unsigned long long int) (+(((/* implicit */int) (_Bool)1)))));
    }
    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_9 = 1; i_9 < 15; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 17; i_10 += 2) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 2) 
                {
                    {
                        var_28 = max((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (short)-18828))))))), (((arr_31 [i_8] [i_8]) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) arr_17 [i_8] [i_9] [i_9])) : (var_13)))))));
                        arr_38 [i_8] = ((/* implicit */short) min((((var_1) ^ (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_8] [i_8] [i_8] [i_8] [i_8]))))), (((/* implicit */long long int) max((arr_18 [i_9 + 1] [i_9] [i_10] [i_11]), (((/* implicit */unsigned int) ((var_2) != (((/* implicit */unsigned long long int) -2147483646))))))))));
                    }
                } 
            } 
            arr_39 [i_8] [i_9] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) (short)32767)))))));
        }
        var_29 = ((/* implicit */unsigned short) var_15);
    }
    for (long long int i_12 = 0; i_12 < 19; i_12 += 4) 
    {
        var_30 |= ((/* implicit */unsigned int) 9ULL);
        arr_42 [i_12] [i_12] = ((/* implicit */unsigned short) min((((unsigned long long int) ((long long int) var_0))), (((/* implicit */unsigned long long int) (~(-8882775413439760462LL))))));
        var_31 = ((/* implicit */int) var_16);
    }
}
