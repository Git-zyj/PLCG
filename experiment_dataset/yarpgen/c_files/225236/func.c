/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225236
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
    var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((short) var_11))) : (((((/* implicit */_Bool) var_8)) ? (-369798562) : (((/* implicit */int) var_0))))))) ? (((/* implicit */long long int) var_11)) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_4))))) ? (-2818406579461870304LL) : (((long long int) (short)-22502)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_13 -= ((/* implicit */signed char) arr_0 [i_0]);
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */int) ((unsigned char) 0LL));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) (short)-22502))) ^ (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        for (short i_4 = 1; i_4 < 11; i_4 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_5 = 4; i_5 < 12; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned int i_7 = 0; i_7 < 13; i_7 += 2) 
                            {
                                var_15 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3] [i_5] [i_5 - 2] [i_6] [i_5]))) >= ((~(-24LL)))));
                                var_16 = ((/* implicit */long long int) (~(((/* implicit */int) (short)(-32767 - 1)))));
                            }
                            arr_21 [i_3] [i_5] [i_6] [i_3] = ((/* implicit */unsigned long long int) min((((-12) / (((/* implicit */int) (unsigned char)232)))), (((var_7) & (var_7)))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    arr_24 [i_8] [i_3] [i_3] [i_8] = ((/* implicit */int) ((long long int) ((short) -1LL)));
                    var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (-4790212283855807728LL) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_8] [i_4 - 1] [i_4])))));
                }
                /* vectorizable */
                for (int i_9 = 2; i_9 < 9; i_9 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) 3917012101189215476LL)) ? (((/* implicit */long long int) (-2147483647 - 1))) : ((-9223372036854775807LL - 1LL))));
                    var_19 += ((/* implicit */unsigned char) (-(((/* implicit */int) arr_9 [i_9 + 1]))));
                    var_20 = ((/* implicit */unsigned int) arr_22 [i_3] [i_4 + 1] [i_4 + 2] [i_3]);
                }
                for (int i_10 = 2; i_10 < 9; i_10 += 1) /* same iter space */
                {
                    var_21 -= ((/* implicit */long long int) arr_14 [i_3] [i_4 + 1] [(short)8]);
                    arr_31 [i_3] [i_3] [i_3] = ((/* implicit */signed char) max((arr_28 [i_3] [i_4] [i_10]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) arr_20 [i_4] [i_4 - 1])))))));
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 13; i_11 += 3) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 2) 
                        {
                            {
                                arr_36 [i_3] [i_3] [i_10] [i_11] [i_12] = ((/* implicit */short) (+(((/* implicit */int) arr_33 [i_3] [i_4] [i_10] [i_10 - 2] [i_3] [i_12]))));
                                var_22 ^= ((/* implicit */long long int) arr_19 [i_3] [i_4] [i_10 + 1]);
                                arr_37 [i_3] [i_4] [i_4] [i_10] [i_11] [i_12] [i_12] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */int) var_9)), (((int) (signed char)106)))))));
                            }
                        } 
                    } 
                    var_23 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [(short)4] [i_4] [i_4 - 1] [(short)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((unsigned int) 0LL))))) ? (var_11) : (((/* implicit */int) (!(((/* implicit */_Bool) max((8796093014016LL), (((/* implicit */long long int) 2450565411U))))))))));
                }
            }
        } 
    } 
}
