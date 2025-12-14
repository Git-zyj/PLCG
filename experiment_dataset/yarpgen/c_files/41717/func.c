/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41717
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (arr_2 [i_0]) : (arr_2 [i_1])));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_0]);
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_7))) >= (576460683583946752LL)));
                var_20 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_14)))) ? (arr_2 [i_2]) : (((/* implicit */int) var_6))));
            }
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                arr_12 [i_0] [12] = ((/* implicit */unsigned int) ((1125899906842624LL) / (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                arr_13 [i_0] [i_0] = ((/* implicit */long long int) var_6);
            }
        }
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            for (unsigned short i_5 = 1; i_5 < 21; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 3; i_6 < 22; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            {
                                arr_25 [(_Bool)1] [i_7] [i_5] [i_7] [i_0] = ((/* implicit */int) arr_23 [(unsigned short)6] [i_4] [i_5] [i_7] [i_7] [i_6]);
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1125899906842638LL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_16 [16LL]))));
                            }
                        } 
                    } 
                    arr_26 [i_0] [i_4] [i_5] = ((/* implicit */short) arr_1 [i_5]);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_8 = 2; i_8 < 19; i_8 += 4) 
        {
            var_22 = ((/* implicit */unsigned char) ((arr_14 [i_0] [i_8 - 1] [i_8 + 2]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_8 + 4])))));
            arr_30 [i_8] [1ULL] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)0)) ? (1125899906842624LL) : (((/* implicit */long long int) arr_24 [8U] [i_8] [i_8] [i_8] [i_8] [i_8])))) % (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 66846720))))));
        }
        /* LoopSeq 1 */
        for (short i_9 = 0; i_9 < 23; i_9 += 3) 
        {
            var_23 = ((/* implicit */int) arr_5 [i_0] [i_9] [i_0]);
            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_4 [i_0]))) ? (((/* implicit */unsigned long long int) 3555537022U)) : (((((/* implicit */_Bool) (unsigned char)229)) ? (7648842151532483188ULL) : (0ULL)))));
        }
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) 2133129726)) ? (484477023) : (((/* implicit */int) (short)36))));
    }
    for (unsigned int i_10 = 0; i_10 < 23; i_10 += 4) /* same iter space */
    {
        var_26 *= ((/* implicit */unsigned short) (unsigned char)0);
        arr_36 [i_10] = 2059678709U;
        var_27 ^= ((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (4152701780U)))), ((-(arr_20 [12U] [i_10] [i_10] [i_10] [i_10])))))));
        arr_37 [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_32 [i_10] [i_10] [i_10])), (-1676117076)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_10] [(short)11] [i_10])) ? (((/* implicit */int) arr_32 [i_10] [i_10] [i_10])) : (((/* implicit */int) arr_32 [i_10] [i_10] [i_10]))))) : (((((/* implicit */_Bool) arr_34 [i_10])) ? ((-(arr_14 [i_10] [i_10] [i_10]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_10] [18U] [i_10])) ? (1125899906842637LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_10] [i_10] [i_10])))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_11 = 1; i_11 < 11; i_11 += 4) 
    {
        for (long long int i_12 = 0; i_12 < 13; i_12 += 2) 
        {
            for (short i_13 = 1; i_13 < 10; i_13 += 4) 
            {
                {
                    var_29 *= arr_17 [i_13] [i_12] [i_11];
                    var_30 = ((/* implicit */int) ((((/* implicit */_Bool) 3755557010U)) ? (min((var_8), (((/* implicit */unsigned long long int) 898555114U)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)50680)))))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_8) : (18446744073709551606ULL))))))) : (((/* implicit */int) (unsigned char)190))));
    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) (short)-32265)), (var_4))) >= (((/* implicit */unsigned long long int) ((int) var_8))))))) : (max((min((7648842151532483188ULL), (((/* implicit */unsigned long long int) (unsigned short)37725)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7)))))))));
}
