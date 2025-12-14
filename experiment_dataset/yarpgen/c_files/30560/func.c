/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30560
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
    var_19 = ((/* implicit */short) ((var_11) ? (((/* implicit */int) ((unsigned char) ((-488646338758117720LL) + (((/* implicit */long long int) ((/* implicit */int) var_6))))))) : (((/* implicit */int) ((_Bool) var_5)))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((arr_0 [i_0 + 4] [(signed char)0]) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0])) : (((/* implicit */int) arr_0 [i_0 + 2] [i_0])))) : (((/* implicit */int) ((2306385782U) < (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */int) ((((arr_3 [i_0] [i_0 - 1]) ? ((~(((/* implicit */int) arr_3 [i_1] [i_1])))) : (((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))) < ((+(((/* implicit */int) (unsigned char)48))))));
            var_22 = ((/* implicit */unsigned char) ((arr_4 [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) -488646338758117720LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_5)))));
            var_23 = ((/* implicit */long long int) 4294967294U);
            var_24 = ((/* implicit */short) ((((/* implicit */int) min((arr_4 [i_0 + 1]), (arr_3 [i_1] [i_0 + 2])))) ^ (((/* implicit */int) ((unsigned char) arr_0 [i_0 + 2] [i_1])))));
            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (min((((/* implicit */long long int) (+(((/* implicit */int) var_16))))), (((arr_0 [i_1] [i_0]) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [(short)0] [(short)0]))))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)15872)), (var_5))))));
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_3 = 1; i_3 < 20; i_3 += 3) /* same iter space */
            {
                var_26 = ((/* implicit */long long int) (short)12309);
                var_27 *= ((/* implicit */long long int) ((signed char) arr_0 [i_0 - 1] [i_0 - 1]));
                /* LoopNest 2 */
                for (unsigned char i_4 = 2; i_4 < 21; i_4 += 3) 
                {
                    for (long long int i_5 = 4; i_5 < 21; i_5 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */signed char) var_11);
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_3] [i_4 - 1] [i_5])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_3 [12LL] [i_0])))))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) var_17))));
                var_31 = ((/* implicit */signed char) var_9);
            }
            for (short i_6 = 1; i_6 < 20; i_6 += 3) /* same iter space */
            {
                var_32 ^= ((/* implicit */int) ((var_0) >= (((/* implicit */long long int) ((/* implicit */int) var_15)))));
                /* LoopSeq 1 */
                for (long long int i_7 = 3; i_7 < 19; i_7 += 4) 
                {
                    var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_6 + 1] [i_7] [i_7])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [(short)22] [i_6 + 2] [i_7 - 3] [i_7 + 3]))))) : (((/* implicit */int) var_16))));
                    var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) (-(((/* implicit */int) arr_3 [i_0 + 4] [i_2])))))));
                }
                var_35 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_5)) : (9223372036854775807LL)));
                /* LoopSeq 3 */
                for (unsigned long long int i_8 = 2; i_8 < 21; i_8 += 2) 
                {
                    var_36 = (((+(((/* implicit */int) var_12)))) / (((/* implicit */int) var_4)));
                    var_37 = ((/* implicit */short) var_15);
                }
                for (unsigned char i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    var_38 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_9]))));
                    var_39 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_4))));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_40 += ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)210))) < (18446744073709551615ULL))))));
                    var_41 = ((/* implicit */long long int) max((var_41), (arr_26 [i_0 + 3] [i_0 + 3] [i_0 + 4] [i_0 + 4])));
                }
            }
            /* LoopSeq 2 */
            for (signed char i_11 = 3; i_11 < 21; i_11 += 3) /* same iter space */
            {
                var_42 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0 - 1] [(unsigned short)0] [i_11])))));
                var_43 = ((7114848212624199006LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)496))));
            }
            for (signed char i_12 = 3; i_12 < 21; i_12 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_13 = 2; i_13 < 22; i_13 += 1) 
                {
                    for (unsigned char i_14 = 2; i_14 < 22; i_14 += 2) 
                    {
                        {
                            var_44 = ((/* implicit */long long int) min((var_44), (((/* implicit */long long int) ((unsigned char) (-(var_17)))))));
                            arr_39 [i_0] = ((/* implicit */long long int) arr_14 [i_0] [i_13] [i_12] [i_2] [i_0]);
                            arr_40 [i_0] [i_14] [i_0] &= ((/* implicit */unsigned int) (short)240);
                            var_45 = (-(((/* implicit */int) var_4)));
                            arr_41 [i_0] [i_0] [i_12] [i_13] [i_14] = ((/* implicit */long long int) ((_Bool) (short)-8206));
                        }
                    } 
                } 
                var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) ((long long int) var_12)))));
                var_47 = ((/* implicit */unsigned char) -432030358);
            }
        }
    }
    for (short i_15 = 1; i_15 < 19; i_15 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_16 = 2; i_16 < 21; i_16 += 1) 
        {
            var_48 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) <= (var_1)));
            arr_47 [i_15] [6ULL] [i_16] |= ((/* implicit */long long int) arr_4 [i_15 + 1]);
            var_49 = ((/* implicit */signed char) (~(((/* implicit */int) arr_30 [i_15 + 1] [i_16 + 1] [i_16 - 2]))));
            var_50 ^= ((/* implicit */unsigned long long int) arr_6 [i_15]);
            arr_48 [i_15] [(unsigned short)20] [i_15 + 3] = ((/* implicit */unsigned char) var_10);
        }
        var_51 = ((short) (unsigned short)63103);
        arr_49 [i_15] = ((/* implicit */unsigned long long int) (_Bool)1);
    }
}
