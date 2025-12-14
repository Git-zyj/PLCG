/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38734
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        arr_2 [(short)2] |= ((/* implicit */unsigned char) min((((((var_13) | (((/* implicit */long long int) ((/* implicit */int) var_2))))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)3072)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_1)))))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_2 = 1; i_2 < 24; i_2 += 4) 
            {
                var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_13))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)79)) >> (((((/* implicit */int) var_9)) - (24164)))))) * (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58227))) : (var_12)))));
            }
            var_22 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned short)7307)) ? (arr_0 [i_0 + 2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)-11803)) : (((/* implicit */int) var_0)))))))));
        }
        for (long long int i_3 = 3; i_3 < 24; i_3 += 2) /* same iter space */
        {
            arr_9 [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)15569)) : (((/* implicit */int) (unsigned short)32))))) : (((long long int) arr_7 [i_0]))))));
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                arr_12 [19LL] [i_0] [i_3] [i_4] = ((/* implicit */short) arr_5 [i_0] [i_3 - 2] [i_3] [i_0]);
                arr_13 [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((-8843895043466051491LL), (((/* implicit */long long int) (short)-11803)))))));
                arr_14 [i_0] [i_0] [i_3] [3LL] = ((/* implicit */short) min((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)219)))))));
            }
        }
        /* vectorizable */
        for (long long int i_5 = 3; i_5 < 24; i_5 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) arr_19 [i_0] [i_5 - 3] [i_6]))));
                var_24 = var_9;
                arr_21 [i_0] [i_5] [i_6] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0])))))));
            }
            for (unsigned short i_7 = 0; i_7 < 25; i_7 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_8 = 2; i_8 < 23; i_8 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_9 = 0; i_9 < 25; i_9 += 2) 
                    {
                        arr_30 [i_0] [i_5] [i_7] [i_8] [i_9] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (unsigned short)25047)))) > (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)58202)) : (((/* implicit */int) (unsigned short)4171))))));
                        arr_31 [i_0] [i_5] [i_7] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)62614)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)12951))))) ? (((/* implicit */int) arr_24 [i_0] [i_8 - 1] [i_0])) : (((/* implicit */int) arr_17 [i_0] [i_5 + 1] [i_0]))));
                    }
                    for (unsigned char i_10 = 2; i_10 < 24; i_10 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-16384)))))));
                        arr_35 [i_7] [i_0] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (short)32747)) : (((/* implicit */int) (short)24576)))) != (((/* implicit */int) arr_32 [i_8 - 2] [i_8] [i_10 - 1] [i_10 + 1] [i_10]))));
                    }
                    for (unsigned char i_11 = 2; i_11 < 24; i_11 += 2) /* same iter space */
                    {
                        arr_40 [i_0] [i_0] [i_7] [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? ((-9223372036854775807LL - 1LL)) : (var_13)));
                        var_26 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_1))) % ((+(var_13)))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_12 = 4; i_12 < 24; i_12 += 4) 
                    {
                        arr_44 [i_0] [i_7] [i_7] [i_0] = ((/* implicit */short) ((((((/* implicit */int) var_6)) % (((/* implicit */int) var_8)))) % (((/* implicit */int) ((short) arr_7 [i_0])))));
                        arr_45 [i_12 - 1] [i_7] [i_7] [i_7] [i_0 + 2] |= arr_41 [i_0] [i_12] [i_7];
                        arr_46 [i_12] [i_0] [i_7] [i_0] [i_0] = ((/* implicit */long long int) arr_7 [i_0]);
                    }
                    for (unsigned short i_13 = 0; i_13 < 25; i_13 += 3) 
                    {
                        arr_49 [(short)7] [i_13] [i_0] [(unsigned char)24] [i_0] [i_5] [i_0] = ((((/* implicit */_Bool) 5607196877286805270LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)24761))) : (-8843895043466051491LL));
                        var_27 = ((/* implicit */long long int) ((((/* implicit */int) var_7)) ^ ((~(((/* implicit */int) var_8))))));
                        arr_50 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23952))) : (9223372036854775807LL)));
                        var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_5 - 3] [i_0] [i_8 + 2]))));
                    }
                }
                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_0 - 1] [i_5] [i_7])) ? (((/* implicit */int) ((unsigned short) (unsigned short)25047))) : (((/* implicit */int) arr_41 [i_5 - 3] [i_0] [i_0 - 1]))));
            }
            for (short i_14 = 3; i_14 < 24; i_14 += 1) 
            {
                arr_53 [(short)0] [(unsigned short)24] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_18 [i_5 - 2] [i_14 - 1])) | (((/* implicit */int) arr_18 [i_5 - 2] [i_14 - 1]))));
                var_30 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_52 [i_14] [(unsigned char)8] [i_14])) ? (((/* implicit */int) (unsigned short)21)) : (((/* implicit */int) var_5))))));
            }
            arr_54 [i_0] [17LL] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)28009))));
            var_31 -= ((/* implicit */long long int) var_0);
            /* LoopSeq 1 */
            for (short i_15 = 0; i_15 < 25; i_15 += 2) 
            {
                arr_57 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_5 - 1] [i_15])) ? (((/* implicit */int) arr_18 [i_0 + 1] [i_0])) : (((/* implicit */int) arr_18 [i_5 + 1] [i_15]))));
                arr_58 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_48 [i_0] [i_0] [i_0 + 1] [i_0 + 2] [i_5 - 1] [i_5] [i_15]))));
                arr_59 [i_0] [i_5] [i_0] = ((/* implicit */unsigned char) ((var_13) & (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_15])))));
                /* LoopSeq 1 */
                for (short i_16 = 1; i_16 < 23; i_16 += 1) 
                {
                    arr_62 [i_5 - 1] [i_0] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_20 [i_0] [i_0])) == (((/* implicit */int) (short)0))));
                    var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) == (((/* implicit */int) var_0))));
                    var_33 = (short)-1;
                    arr_63 [i_0] [i_0] [i_15] [i_16 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_16] [i_16] [i_15] [i_5 - 2] [i_5] [i_0] [i_0])) ? ((-(((/* implicit */int) (unsigned short)19201)))) : (((/* implicit */int) ((unsigned short) (unsigned short)65525)))));
                    arr_64 [i_15] |= ((/* implicit */long long int) (+(((/* implicit */int) var_14))));
                }
            }
        }
    }
    var_34 |= ((/* implicit */unsigned short) ((5607196877286805270LL) <= (-5607196877286805271LL)));
    var_35 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)37293)))) ? (((((/* implicit */_Bool) var_19)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_18))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) <= (11LL))))))))));
}
