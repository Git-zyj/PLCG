/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199518
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
    var_13 = ((/* implicit */long long int) (~(((/* implicit */int) var_11))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 4])) ? (((/* implicit */int) arr_0 [18U])) : (((/* implicit */int) arr_0 [i_0]))))))) ? ((+(((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 4]))) | (9187294433737136781LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_0 [i_0]))))));
        var_14 = ((((/* implicit */_Bool) ((-9187294433737136799LL) % (var_12)))) ? ((~(((/* implicit */int) arr_0 [i_0 + 1])))) : ((-(((/* implicit */int) arr_0 [i_0 + 1])))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                arr_7 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) -9187294433737136781LL))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [5U])))));
                arr_8 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [(short)5] [(short)5] [i_1] [11]))));
            }
            for (unsigned long long int i_3 = 4; i_3 < 20; i_3 += 3) /* same iter space */
            {
                arr_11 [i_1] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 18444492273895866368ULL)))))));
                arr_12 [i_0 - 2] [i_1] [i_1] [i_1] = 3284817313U;
                /* LoopSeq 4 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 1) 
                    {
                        arr_17 [(unsigned char)14] [i_1] [(unsigned char)14] [i_4] [(unsigned char)14] = ((/* implicit */unsigned int) ((long long int) var_0));
                        arr_18 [i_0 - 1] [i_1] [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 1] = ((/* implicit */short) arr_3 [i_5] [i_0]);
                        var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                        var_16 = (-(((9187294433737136780LL) - (((/* implicit */long long int) arr_14 [i_0] [i_0] [(_Bool)1] [i_0] [i_0])))));
                    }
                    for (short i_6 = 2; i_6 < 21; i_6 += 1) 
                    {
                        arr_23 [i_1] [(_Bool)1] [i_1] [i_1] [(_Bool)1] [i_1] [i_1] = ((/* implicit */int) ((unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) 846568240U)) : (0LL))));
                        var_17 = ((((((/* implicit */unsigned long long int) -9187294433737136779LL)) & (var_1))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [0LL] [0LL] [i_3] [i_1] [i_6 - 2] [(signed char)14])) ^ (((/* implicit */int) (short)62))))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        arr_26 [i_0] [i_0] [i_0 + 1] [i_1] [i_0] [i_0] = ((/* implicit */long long int) 0ULL);
                        arr_27 [i_0] [i_0 + 1] [i_1] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) ((((/* implicit */int) (unsigned char)227)) >= (((/* implicit */int) var_8)))))));
                        var_18 = ((/* implicit */unsigned long long int) arr_16 [i_0 - 4] [i_1] [i_3 + 1] [i_3 + 1] [i_7] [i_7] [i_7]);
                    }
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1260502929916563638ULL)) ? (arr_10 [i_1] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_1] [i_0 - 1])))));
                }
                for (int i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_13 [i_8] [i_8] [i_3 - 2] [i_3 - 3] [i_3 - 4] [i_3 + 2]) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-28855)))))) >= (((/* implicit */int) arr_22 [i_3 - 1] [i_8] [i_3 - 3]))));
                    arr_32 [i_0 - 3] [(signed char)21] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (-9187294433737136764LL))))) % (((unsigned int) 7743086255341451175LL))));
                    arr_33 [i_0] [i_0] [i_0] [i_1] [15U] = ((/* implicit */unsigned short) (_Bool)1);
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        arr_36 [i_1] [i_1] [i_3 + 1] [i_3 + 1] [i_1] = (signed char)-1;
                        var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -127411338154747890LL)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_9] [(_Bool)1])) : (((/* implicit */int) (unsigned short)34572))))) >= (arr_31 [i_0 - 4] [i_1] [i_1] [i_3 - 4] [i_8] [i_0 - 4])));
                        var_22 = ((/* implicit */unsigned long long int) arr_29 [i_0] [i_1] [i_3 - 2] [i_9]);
                    }
                    var_23 += ((/* implicit */unsigned int) ((arr_34 [i_8] [i_0 + 1]) ? (((/* implicit */int) (!(((/* implicit */_Bool) -9187294433737136785LL))))) : (((/* implicit */int) (_Bool)1))));
                }
                for (unsigned int i_10 = 1; i_10 < 18; i_10 += 1) /* same iter space */
                {
                    arr_39 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) >= ((+(var_12)))));
                    arr_40 [12LL] [i_1] [16] [i_10 + 2] [i_10 + 2] [12LL] |= ((/* implicit */unsigned long long int) (~((((_Bool)1) ? (9187294433737136781LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                }
                for (unsigned int i_11 = 1; i_11 < 18; i_11 += 1) /* same iter space */
                {
                    arr_43 [i_0] [i_0] [i_1] [i_11 + 4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_3 + 1] [i_11 + 1])) ? (((/* implicit */unsigned int) arr_29 [i_0 - 3] [i_0 - 3] [i_3 + 1] [i_11])) : (arr_37 [i_1] [i_1] [i_3 + 1] [i_11 - 1])));
                    arr_44 [i_1] = -127411338154747890LL;
                }
                var_24 = ((/* implicit */int) (unsigned char)0);
            }
            for (unsigned long long int i_12 = 4; i_12 < 20; i_12 += 3) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -4220597783671490505LL))));
                arr_49 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */short) (((-(arr_42 [i_0] [i_1] [i_0] [i_12] [i_12 - 2] [i_12 - 1]))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (_Bool)0)) : (arr_16 [i_12] [i_12] [i_12] [i_12 - 1] [i_12] [i_12] [i_12]))))));
                arr_50 [i_1] [i_1] [i_12] = ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) % (((/* implicit */int) arr_28 [i_0] [i_1] [i_12] [8] [(unsigned char)18]))))) ? (9223372036854775798LL) : (((/* implicit */long long int) ((var_2) % (2377613610U)))));
            }
            var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_0 - 1]))));
        }
        for (long long int i_13 = 0; i_13 < 22; i_13 += 2) 
        {
            var_27 = ((/* implicit */unsigned int) (!(arr_28 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1])));
            arr_53 [i_13] [i_13] [i_13] = ((/* implicit */signed char) arr_20 [(_Bool)1] [i_13] [(signed char)14] [i_13] [(_Bool)1]);
        }
        arr_54 [i_0] = (-(((-9187294433737136771LL) % (-7743086255341451175LL))));
    }
    var_28 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (((((/* implicit */unsigned int) 341346941)) % (var_2)))));
}
