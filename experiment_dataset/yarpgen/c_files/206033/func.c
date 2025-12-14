/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206033
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_15 = ((/* implicit */long long int) min((var_15), ((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 1]))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8641))) - (9223372036854775807LL)))))))));
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_9))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)44))))) ? ((+(((/* implicit */int) arr_4 [i_1])))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)56895)) : (((/* implicit */int) (unsigned short)8641))))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)13977)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) <= (562949953421311LL)))) : (((/* implicit */int) (unsigned char)58))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -3254265909788351529LL)) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_4 [i_2])))))));
            var_20 += ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)58))) : (18ULL)));
            arr_9 [i_1] [(unsigned short)0] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)9)) * (((/* implicit */int) (unsigned short)8631)))) >= (((/* implicit */int) arr_4 [i_1]))));
        }
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                /* LoopSeq 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_18 [i_4] = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3152895318U)));
                    /* LoopSeq 2 */
                    for (int i_6 = 1; i_6 < 16; i_6 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)44)))))));
                        arr_21 [i_1] [14U] [i_3] [i_3] [i_4] [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_3] [i_4 - 1]))));
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_6 - 1] [i_5] [i_4 - 1])) ? (((/* implicit */int) arr_8 [i_6 - 1] [i_5] [i_4 - 1])) : (((/* implicit */int) arr_5 [i_4 - 1])))))));
                        arr_22 [i_4] = ((/* implicit */_Bool) 55372390);
                    }
                    for (short i_7 = 2; i_7 < 15; i_7 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned char) arr_13 [i_4] [i_4 - 1] [i_4]);
                        arr_25 [i_7 - 2] [i_7 - 2] [i_4] [i_7 - 2] = ((/* implicit */long long int) arr_24 [i_7] [i_4] [i_7 + 3] [i_4] [i_7 + 3]);
                    }
                    arr_26 [i_4] [i_3] [i_3] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 55372393)) ? (((/* implicit */long long int) ((/* implicit */int) (short)13977))) : (arr_15 [i_4 - 1] [i_4 - 1] [(unsigned short)5] [i_4 - 1])));
                }
                for (signed char i_8 = 2; i_8 < 16; i_8 += 3) 
                {
                    arr_29 [i_1] [i_1] [i_4] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) arr_13 [i_4 - 1] [i_4 - 1] [i_4]))));
                    arr_30 [i_1] [i_1] [13] [i_4] [13] [8LL] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)24522)) : (((/* implicit */int) (short)-24522))))));
                }
                for (signed char i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_10 = 1; i_10 < 16; i_10 += 1) 
                    {
                        arr_37 [i_1] [i_3] [i_1] [i_9] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22970)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (15175572524942038164ULL)));
                        arr_38 [2U] [i_4] = ((/* implicit */signed char) -5590681074574960980LL);
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) 385156681))));
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (signed char)6))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 2; i_11 < 15; i_11 += 2) 
                    {
                        var_26 = ((((/* implicit */_Bool) arr_34 [i_11 - 1] [i_11] [i_11] [i_11] [(unsigned char)11] [i_4])) ? (arr_34 [i_11 - 1] [(short)6] [i_11 + 2] [i_11 - 2] [i_11] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_11] [i_4] [i_11 - 2] [i_4] [i_4 - 1]))));
                        var_27 -= ((((/* implicit */_Bool) arr_15 [i_1] [i_11 - 2] [i_1] [i_4 - 1])) ? (arr_19 [i_4 - 1] [i_4 - 1] [i_9] [i_11 + 2] [i_11]) : (arr_19 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_11 + 3] [i_3]));
                        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [(unsigned char)4])) ? (arr_17 [i_1]) : (arr_17 [i_3]))))));
                    }
                }
                var_29 *= arr_17 [i_4 - 1];
                var_30 = ((/* implicit */unsigned long long int) min((var_30), (arr_11 [i_1] [(short)12])));
            }
            for (long long int i_12 = 0; i_12 < 18; i_12 += 4) 
            {
                var_31 = ((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_12] [i_3] [17ULL])) ? (arr_41 [i_12] [i_3] [i_1]) : (arr_41 [i_1] [i_3] [i_12])));
                var_32 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-86)) ? (((/* implicit */int) arr_28 [i_1])) : (((/* implicit */int) arr_28 [i_3]))));
            }
            /* LoopNest 2 */
            for (long long int i_13 = 2; i_13 < 17; i_13 += 1) 
            {
                for (signed char i_14 = 0; i_14 < 18; i_14 += 3) 
                {
                    {
                        arr_47 [(short)8] [(short)8] [i_13] [i_13] [i_13] = ((/* implicit */int) (short)0);
                        var_33 = ((/* implicit */long long int) ((arr_24 [1LL] [i_3] [i_13] [i_13] [i_13 - 2]) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)24)))))));
                    }
                } 
            } 
        }
    }
    var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (0LL))))));
}
