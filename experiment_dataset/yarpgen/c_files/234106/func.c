/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234106
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
    var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            var_19 = ((/* implicit */long long int) (((-(15946487439241078027ULL))) - (((/* implicit */unsigned long long int) var_16))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 4; i_2 < 21; i_2 += 1) 
            {
                var_20 = ((/* implicit */unsigned long long int) var_15);
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 4) 
                {
                    var_21 |= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)30))));
                    arr_12 [i_0] [8U] [i_2] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_4 [(_Bool)1])))) && (((/* implicit */_Bool) (~(var_5))))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_4 = 1; i_4 < 20; i_4 += 1) 
                {
                    arr_15 [i_0] [i_1] [i_1] [i_0] [i_4] = ((/* implicit */long long int) var_6);
                    var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1 - 1]))) : (arr_10 [i_0] [i_1] [i_2 + 1] [i_2 + 1]))))));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        arr_21 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_16);
                        var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
                        var_24 = ((/* implicit */short) var_10);
                    }
                    for (unsigned short i_7 = 2; i_7 < 22; i_7 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_7] [i_5] [i_1]))) <= (var_12))))));
                        var_26 = ((/* implicit */unsigned short) var_6);
                    }
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) >= (arr_18 [i_1] [i_1 + 2] [i_1] [i_1 + 2] [i_1 + 2])));
                    var_28 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_11)))))));
                }
            }
            /* LoopNest 3 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                for (short i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    for (unsigned short i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        {
                            arr_31 [i_0] [i_1] [i_8] [i_9] [i_9] [i_9] [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_16) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_0] [22U] [i_0] [i_9] [i_0])) ? (((/* implicit */int) arr_17 [i_0] [(unsigned short)16] [i_0] [(unsigned short)19])) : (((/* implicit */int) var_6))))))))));
                            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0]))))) ? ((+(((/* implicit */int) arr_5 [i_0])))) : (((((/* implicit */int) arr_5 [i_0])) * (((/* implicit */int) arr_14 [i_0] [i_0] [i_9]))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_11 = 2; i_11 < 21; i_11 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_12 = 2; i_12 < 23; i_12 += 1) 
            {
                var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_15))))) < ((-((+(var_3))))))))));
                arr_37 [i_0] [i_11] [i_12] [i_12] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_36 [i_0] [i_0] [15ULL]))));
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 1) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) var_10))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_16)) > ((~(var_5)))))))));
                            var_32 ^= ((/* implicit */signed char) (-(((/* implicit */int) (short)32767))));
                            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) var_5))));
                            arr_43 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_13) : (var_0)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 2) 
            {
                for (long long int i_16 = 0; i_16 < 24; i_16 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_17 = 0; i_17 < 24; i_17 += 3) /* same iter space */
                        {
                            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0] [i_11 + 3] [i_11]))))) ? (((((/* implicit */int) var_10)) - (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_16] [i_17]))));
                            var_35 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))));
                        }
                        for (unsigned int i_18 = 0; i_18 < 24; i_18 += 3) /* same iter space */
                        {
                            var_36 |= ((/* implicit */unsigned long long int) arr_42 [i_11] [11ULL] [11ULL] [i_11] [i_11 + 2]);
                            var_37 = ((/* implicit */signed char) var_5);
                        }
                        var_38 = ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_53 [(unsigned short)8] [i_11] [(unsigned short)8] [i_15] [i_15] [i_16])) ? (((/* implicit */int) arr_42 [i_11] [(unsigned short)23] [i_15] [i_16] [i_11])) : (((/* implicit */int) var_17))))))) < (var_8)));
                        arr_54 [(short)10] [i_11 + 1] [i_0] [i_16] = ((/* implicit */unsigned long long int) var_2);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_19 = 2; i_19 < 22; i_19 += 3) 
            {
                for (signed char i_20 = 0; i_20 < 24; i_20 += 1) 
                {
                    for (unsigned int i_21 = 0; i_21 < 24; i_21 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned long long int) arr_39 [i_0] [(unsigned short)4] [i_11 + 1] [i_19] [i_0] [i_21]);
                            var_40 = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((((arr_59 [i_0] [i_20] [i_0] [i_0] [i_21] [i_19] [16U]) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) var_16)) : (2500256634468473588ULL))) - (2500256634468473525ULL))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) : (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((((((arr_59 [i_0] [i_20] [i_0] [i_0] [i_21] [i_19] [16U]) - (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) var_16)) : (2500256634468473588ULL))) - (2500256634468473525ULL))))) : (((/* implicit */long long int) ((/* implicit */int) var_9))))));
                        }
                    } 
                } 
            } 
        }
        arr_62 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (~(((/* implicit */int) var_14)))))));
    }
}
