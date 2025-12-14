/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195072
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
    var_19 *= ((/* implicit */short) var_2);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_20 = ((/* implicit */short) (+(((/* implicit */int) var_10))));
        var_21 = ((/* implicit */unsigned short) (+(((unsigned long long int) 2211793436653121322LL))));
        var_22 = ((/* implicit */long long int) (~(((/* implicit */int) var_1))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    for (unsigned short i_5 = 1; i_5 < 15; i_5 += 2) 
                    {
                        {
                            arr_13 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((((-7537454442414635979LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)-38)) + (65))))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2])))));
                            var_23 += ((/* implicit */unsigned short) (-(-3616913853223068443LL)));
                            arr_14 [i_2] [i_4] [i_3] [(unsigned short)0] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) -8226272124079847785LL))));
                        }
                    } 
                } 
            } 
            arr_15 [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)41236))));
            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_1])) << ((((~(-8226272124079847785LL))) - (8226272124079847770LL))))))));
        }
        for (long long int i_6 = 3; i_6 < 15; i_6 += 3) 
        {
            var_25 ^= ((((/* implicit */_Bool) arr_11 [i_1] [i_6] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_9 [i_6] [i_6] [i_1]));
            var_26 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [(signed char)14] [i_6] [i_1] [i_6 - 3] [i_1])) ? (-8226272124079847757LL) : (((/* implicit */long long int) ((/* implicit */int) var_17)))));
            /* LoopSeq 2 */
            for (unsigned short i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                var_27 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_8))));
                arr_21 [i_1] [i_6] [i_7] = ((/* implicit */signed char) var_11);
            }
            for (short i_8 = 2; i_8 < 14; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 16; i_9 += 2) 
                {
                    for (long long int i_10 = 0; i_10 < 16; i_10 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned long long int) ((arr_2 [i_1]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_11 [i_8] [i_6] [i_1]))));
                            arr_30 [i_1] [i_6] [i_8] [i_9] [i_10] &= ((/* implicit */unsigned short) ((unsigned char) arr_7 [i_9] [i_6 + 1] [i_1]));
                            arr_31 [i_1] [i_6 + 1] [i_8 - 2] [i_9] [i_6 + 1] = ((/* implicit */unsigned long long int) (+(arr_0 [i_8])));
                            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (_Bool)1))));
                            arr_32 [i_1] [i_6] = -8226272124079847748LL;
                        }
                    } 
                } 
                var_30 = ((/* implicit */long long int) (+((+(((/* implicit */int) var_8))))));
            }
            arr_33 [i_6] = ((((/* implicit */_Bool) arr_26 [i_6 - 1] [i_6] [i_1] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) > (arr_9 [i_1] [i_1] [i_6]))))) : ((+(-8226272124079847785LL))));
        }
        for (unsigned int i_11 = 0; i_11 < 16; i_11 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_12 = 3; i_12 < 15; i_12 += 2) 
            {
                for (unsigned short i_13 = 1; i_13 < 14; i_13 += 2) 
                {
                    for (int i_14 = 3; i_14 < 15; i_14 += 2) 
                    {
                        {
                            arr_45 [i_1] [i_1] [i_1] [i_1] [i_13] = ((/* implicit */long long int) ((unsigned char) 262143LL));
                            arr_46 [0LL] [i_13] [i_13 + 2] [i_12] [i_11] [i_13] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)148)) ^ (((/* implicit */int) var_0))));
                        }
                    } 
                } 
            } 
            var_31 -= ((/* implicit */_Bool) (~(var_11)));
            arr_47 [i_11] [i_11] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(8226272124079847764LL)))) ? ((~(((/* implicit */int) var_13)))) : (((/* implicit */int) arr_5 [i_1]))));
        }
        arr_48 [i_1] = ((/* implicit */long long int) ((signed char) (_Bool)1));
        arr_49 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)5419))));
    }
    /* LoopNest 3 */
    for (long long int i_15 = 1; i_15 < 15; i_15 += 2) 
    {
        for (signed char i_16 = 1; i_16 < 15; i_16 += 1) 
        {
            for (long long int i_17 = 0; i_17 < 17; i_17 += 2) 
            {
                {
                    var_32 = max((min((4908054914381881662ULL), (((/* implicit */unsigned long long int) var_3)))), (min((4908054914381881662ULL), (((/* implicit */unsigned long long int) arr_55 [i_15 + 1] [i_16 + 2] [i_17])))));
                    var_33 = ((/* implicit */long long int) (((+(arr_51 [i_16 + 2] [i_15 + 2]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29934)))));
                    var_34 -= ((/* implicit */short) (+(((((((/* implicit */_Bool) (short)-5436)) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) (unsigned short)15299)))) * (((/* implicit */int) (!((_Bool)1))))))));
                    arr_57 [i_15] [i_16] [i_16] [i_17] = ((/* implicit */_Bool) arr_53 [i_17] [i_15 - 1]);
                    var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)118)) ? (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_1 [i_16])))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                }
            } 
        } 
    } 
    var_36 &= ((/* implicit */_Bool) var_5);
}
