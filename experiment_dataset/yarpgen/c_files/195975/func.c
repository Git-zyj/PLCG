/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195975
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-20))));
    var_11 = ((/* implicit */signed char) var_7);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned char) (signed char)22);
        var_12 ^= ((/* implicit */_Bool) 12ULL);
        arr_4 [i_0] = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)4095)) | (((/* implicit */int) var_6))))), (264241152U)))));
    }
    for (unsigned short i_1 = 4; i_1 < 13; i_1 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) min((var_13), (var_8)));
        arr_9 [i_1] = ((/* implicit */unsigned int) (unsigned char)37);
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) ((arr_5 [(unsigned short)9] [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))))))) ? (((((((/* implicit */_Bool) (unsigned char)37)) || (((/* implicit */_Bool) var_5)))) ? (min((2020811808U), (((/* implicit */unsigned int) var_6)))) : (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned short)2845), (((/* implicit */unsigned short) arr_1 [i_1]))))) && ((_Bool)0)))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 3; i_2 < 12; i_2 += 2) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_0 [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61450))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2])))));
        var_15 -= ((/* implicit */short) ((signed char) 4166521943181535163ULL));
        /* LoopSeq 3 */
        for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                for (unsigned char i_5 = 2; i_5 < 11; i_5 += 4) 
                {
                    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) ((18446744073709551603ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                            arr_22 [i_2] [i_2] [i_4] [i_5] [i_2] = ((/* implicit */unsigned long long int) var_8);
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (unsigned short)61441))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                for (unsigned char i_8 = 0; i_8 < 14; i_8 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_0))));
                            arr_31 [i_2] [i_2] [i_7] [i_8] [(unsigned short)4] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_4))))));
                            var_20 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (unsigned char)177)))) || (((/* implicit */_Bool) var_4))));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) (unsigned short)0))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 14; i_11 += 2) 
                        {
                            arr_38 [i_2] [(unsigned short)10] [i_2] [i_8] [(unsigned short)10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 36028792723996672ULL)) || (((/* implicit */_Bool) arr_12 [i_2]))));
                            var_22 = ((/* implicit */unsigned char) arr_12 [i_2]);
                        }
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) var_3))));
                        arr_39 [i_2 - 1] [i_3] [i_7] [i_7] [i_2] [i_7] = ((/* implicit */unsigned long long int) var_0);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_12 = 0; i_12 < 14; i_12 += 4) 
            {
                for (unsigned char i_13 = 0; i_13 < 14; i_13 += 3) 
                {
                    {
                        var_24 &= ((/* implicit */unsigned long long int) ((short) arr_17 [i_2 - 1] [i_12]));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_2] [(unsigned short)5] [(unsigned short)5] [i_12] [i_13])) ? (((/* implicit */int) arr_37 [i_2 + 2] [i_2 + 2] [i_2 + 1] [(_Bool)1] [i_2])) : (((/* implicit */int) arr_37 [(_Bool)1] [i_3] [i_12] [i_2] [i_12]))));
                        arr_48 [i_2] [i_3] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_2 + 2] [i_2] [i_2 - 1] [i_2 + 1])) ? (arr_19 [i_2 + 2] [i_2] [i_2 - 1] [i_2 + 1]) : (arr_19 [i_2 - 3] [i_2] [i_2 - 1] [i_2 + 1])));
                    }
                } 
            } 
        }
        for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 2) 
            {
                for (unsigned long long int i_16 = 2; i_16 < 12; i_16 += 3) 
                {
                    for (signed char i_17 = 0; i_17 < 14; i_17 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */long long int) arr_43 [i_2] [i_2]);
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_55 [i_16] [i_16 + 1] [i_16] [i_16 - 2])) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) (signed char)52)) ? (((/* implicit */int) (signed char)-56)) : (((/* implicit */int) (unsigned short)0))))));
                            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_50 [i_2 + 1] [i_2 + 1] [i_17])) ? (((/* implicit */int) (unsigned char)52)) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_47 [i_14])))))));
                            var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)32768))));
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((_Bool) arr_19 [2ULL] [6U] [i_2 + 2] [i_14])))));
        }
        for (unsigned long long int i_18 = 0; i_18 < 14; i_18 += 3) /* same iter space */
        {
            arr_62 [i_2] = ((/* implicit */unsigned short) arr_57 [7ULL] [i_2 - 2] [7ULL] [i_2 - 2]);
            var_31 = ((/* implicit */long long int) var_3);
        }
    }
}
