/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35860
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
    var_19 &= ((/* implicit */signed char) ((long long int) (short)-27210));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (+(((/* implicit */int) (_Bool)1)));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) arr_0 [i_0]))));
                var_21 -= ((/* implicit */unsigned int) (((_Bool)0) ? ((~(14875504289848886437ULL))) : (arr_1 [i_0 + 1])));
            }
            for (signed char i_3 = 2; i_3 < 22; i_3 += 4) 
            {
                var_22 |= ((/* implicit */int) ((arr_6 [i_3 - 2] [i_3] [i_3] [(unsigned char)17]) <= (arr_6 [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_3 + 1])));
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 4; i_4 < 22; i_4 += 1) 
                {
                    arr_15 [i_0] [i_1] [i_3 - 2] [i_4] [(unsigned char)17] [i_4] = ((/* implicit */short) arr_9 [i_1] [i_1]);
                    arr_16 [i_0] [i_1] [(unsigned short)17] [i_4 - 2] = ((/* implicit */unsigned long long int) (unsigned char)62);
                    var_23 = ((/* implicit */short) -22);
                    /* LoopSeq 1 */
                    for (long long int i_5 = 3; i_5 < 22; i_5 += 4) 
                    {
                        var_24 += ((/* implicit */unsigned long long int) var_14);
                        arr_19 [i_0] [i_0] [i_5] [i_1] [i_3] [i_4] [i_5] = var_18;
                        var_25 |= ((/* implicit */signed char) 3571239783860665205ULL);
                        var_26 = ((/* implicit */int) ((((/* implicit */unsigned long long int) 8611009488629116156LL)) | (arr_17 [i_5 - 2] [i_3 - 2] [i_5] [i_4 - 4] [i_5] [i_3 - 2] [i_1])));
                    }
                }
                arr_20 [i_0] [i_1] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_18)) : (var_5)))) ^ (((8088122567314554699LL) | (4553761444091231154LL)))));
                arr_21 [i_0 - 1] [i_0] [i_1] [i_3] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_1] [i_3 + 1] [i_3 - 2]))));
                arr_22 [20U] [i_1] [i_3] [i_3 + 1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_14 [i_0] [i_3])) ? (((/* implicit */long long int) 693201466)) : (var_7)))));
            }
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0] [i_1])) ? (((/* implicit */int) arr_7 [i_0] [i_0 - 1] [i_1])) : (((/* implicit */int) arr_10 [i_0] [i_0 + 1]))));
        }
    }
    /* vectorizable */
    for (unsigned int i_6 = 1; i_6 < 22; i_6 += 4) /* same iter space */
    {
        arr_27 [i_6] = ((/* implicit */int) ((524287LL) | (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0)))))));
        var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((short) arr_4 [i_6 - 1]))) + (2147483647))) >> (((unsigned long long int) (_Bool)1))));
        arr_28 [12U] [i_6] |= ((/* implicit */int) ((6502399182889491928ULL) - (((/* implicit */unsigned long long int) (~(var_2))))));
    }
    for (unsigned int i_7 = 1; i_7 < 22; i_7 += 4) /* same iter space */
    {
        var_29 = ((/* implicit */short) ((long long int) ((unsigned char) ((5345893389578876102LL) == (((/* implicit */long long int) 3898732488U))))));
        var_30 = ((/* implicit */signed char) var_12);
        var_31 = ((/* implicit */signed char) ((((var_14) + (9223372036854775807LL))) >> (((((arr_7 [i_7 - 1] [i_7] [i_7]) ? (-769175777) : (((/* implicit */int) var_16)))) + (769175819)))));
    }
    var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (signed char)108))) ? (-1366562323) : (((/* implicit */int) ((short) 5345893389578876102LL)))))) ? (((/* implicit */unsigned long long int) (+((-(var_3)))))) : (var_13)));
    var_33 += var_14;
    var_34 *= ((/* implicit */unsigned short) (unsigned char)149);
}
