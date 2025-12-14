/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221788
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
    var_10 += var_8;
    var_11 = ((/* implicit */unsigned long long int) ((unsigned short) ((((((/* implicit */int) (signed char)-7)) * (((/* implicit */int) var_4)))) <= (var_7))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) arr_1 [i_0] [i_0]);
        var_12 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)30))));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((((+(((/* implicit */int) var_4)))) * (((/* implicit */int) arr_8 [1ULL] [i_1] [1ULL] [(_Bool)1] [(_Bool)1])))) : (((/* implicit */int) (_Bool)0))));
                        var_13 = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_5 [i_1 - 4] [i_1 - 1] [i_1 - 2])), (var_9)))) * (((unsigned long long int) (!(((/* implicit */_Bool) var_4)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) var_6))));
        var_15 += ((((/* implicit */_Bool) ((int) arr_8 [i_4] [i_4] [i_4] [i_4] [(short)1]))) ? (((/* implicit */int) ((unsigned char) arr_8 [i_4] [i_4] [i_4] [i_4] [i_4]))) : (((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [(short)6] [i_4])));
    }
    for (int i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */unsigned char) arr_14 [i_5])), (var_5)))) + (((((/* implicit */_Bool) ((((var_7) + (2147483647))) << (((743644678) - (743644678)))))) ? (((((/* implicit */int) arr_13 [2LL])) ^ (((/* implicit */int) (signed char)11)))) : (((/* implicit */int) var_5))))));
        /* LoopNest 2 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                {
                    var_17 = var_8;
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) arr_19 [i_5])) >= (max((((/* implicit */unsigned int) (signed char)4)), (var_9)))));
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_25 [i_8] [i_6] [i_6] [i_5] = ((/* implicit */_Bool) ((signed char) (((_Bool)1) ? (((/* implicit */int) (unsigned short)27351)) : (743644677))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_9 = 1; i_9 < 11; i_9 += 4) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned long long int) (~(-743644678)));
                            arr_30 [i_5] [i_5] [i_6] [i_6 - 1] [i_7] [i_8] [(unsigned char)3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_5] [i_6] [i_6 - 1] [i_8] [i_9 + 1]))) != (5923541044281399064ULL)));
                            var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) <= (arr_20 [i_9 + 2] [i_9 - 1] [i_9 - 1] [i_9 + 1])));
                        }
                        for (unsigned int i_10 = 1; i_10 < 11; i_10 += 4) /* same iter space */
                        {
                            arr_33 [i_7] [i_6] [i_7] [(unsigned char)8] [i_8] [i_8] |= ((/* implicit */signed char) var_5);
                            arr_34 [i_6] [i_6] = ((/* implicit */_Bool) ((min((1622412797), (arr_19 [i_5]))) - (((/* implicit */int) ((signed char) min((var_8), (((/* implicit */short) var_0))))))));
                            arr_35 [i_5] [i_6] [i_7] = arr_18 [i_10] [i_5];
                        }
                        var_21 *= ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((/* implicit */short) var_4)), (var_6)))), (((long long int) (~(((/* implicit */int) (_Bool)1)))))));
                        arr_36 [i_7] [i_7] [i_6] [i_6] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_6 - 1] [i_6 - 1] [i_7] [i_7] [i_7])) || (((/* implicit */_Bool) arr_31 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_8]))))), (((unsigned int) ((((/* implicit */int) var_4)) > (((/* implicit */int) (short)32760)))))));
                    }
                }
            } 
        } 
        /* LoopSeq 3 */
        for (short i_11 = 0; i_11 < 14; i_11 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_12 = 0; i_12 < 14; i_12 += 2) 
            {
                var_22 = ((/* implicit */_Bool) (~(((int) arr_32 [i_5] [9LL] [i_11] [9LL] [i_12] [i_12] [i_11]))));
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 14; i_13 += 4) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 2) 
                    {
                        {
                            arr_46 [i_13] [i_5] [i_13] [i_13] [i_13] [i_5] &= ((/* implicit */_Bool) arr_43 [11U] [(signed char)6]);
                            arr_47 [i_5] [i_12] [i_14] = ((/* implicit */unsigned long long int) -1622412798);
                            arr_48 [i_5] [i_11] [i_5] [i_13] [13LL] = (~(((/* implicit */int) max((arr_40 [i_11]), (arr_40 [i_5])))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_15 = 3; i_15 < 13; i_15 += 3) 
                {
                    var_23 = ((/* implicit */int) (((+(18446744073709551615ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-3939)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_5] [i_11] [i_5] [i_5] [i_5] [i_11] [i_5]))) : (arr_44 [i_5] [i_5] [i_11] [i_11] [i_5] [i_15] [i_15 - 2]))))));
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_1)))))));
                }
            }
            var_25 -= ((/* implicit */unsigned int) ((((var_2) % (((/* implicit */long long int) ((/* implicit */int) var_6))))) == (((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_5] [i_5] [i_5])) >> (((((/* implicit */int) var_1)) + (21041))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_16 = 3; i_16 < 11; i_16 += 3) /* same iter space */
        {
            arr_53 [i_16] = ((/* implicit */unsigned long long int) (unsigned short)65535);
            /* LoopSeq 1 */
            for (unsigned long long int i_17 = 3; i_17 < 13; i_17 += 1) 
            {
                arr_57 [i_16] [9ULL] [i_16] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
                var_26 |= ((/* implicit */unsigned short) ((arr_20 [i_16] [i_16 - 2] [i_17 - 1] [i_16 - 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                arr_58 [i_5] [i_5] [i_5] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_16 + 2] [(short)11] [i_16 - 1] [i_17 - 3] [i_17 + 1])) && (((/* implicit */_Bool) ((arr_43 [3ULL] [i_17]) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-12))))))));
            }
            arr_59 [i_16] = ((/* implicit */unsigned long long int) ((2292033973U) >= (var_9)));
            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_51 [i_5] [i_16]))))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_8))) : (((unsigned long long int) arr_14 [i_5]))));
        }
        for (unsigned long long int i_18 = 3; i_18 < 11; i_18 += 3) /* same iter space */
        {
            arr_64 [i_5] = ((/* implicit */signed char) (+(max((((/* implicit */long long int) var_1)), (arr_54 [i_5] [i_18 - 1] [i_18 - 1])))));
            /* LoopNest 2 */
            for (short i_19 = 0; i_19 < 14; i_19 += 3) 
            {
                for (unsigned int i_20 = 0; i_20 < 14; i_20 += 3) 
                {
                    {
                        var_28 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_65 [i_18 - 3])) : (max((var_7), (((/* implicit */int) var_4)))))), (((/* implicit */int) (_Bool)1))));
                        arr_69 [i_5] [i_5] [i_5] [i_20] = var_5;
                    }
                } 
            } 
            var_29 ^= ((/* implicit */int) var_4);
        }
        var_30 += ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32750)) ? (-1376136365) : ((+(((/* implicit */int) ((((/* implicit */int) (short)32753)) > (((/* implicit */int) (unsigned char)97)))))))));
    }
}
