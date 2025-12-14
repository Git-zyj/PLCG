/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39829
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_9 [i_2 - 1] [10ULL] [20ULL] [10ULL] [i_2 - 1])) ? (arr_9 [i_2 - 1] [(unsigned char)0] [i_2] [(unsigned char)0] [i_2 - 1]) : (arr_9 [i_2 - 1] [(unsigned char)20] [i_2] [(unsigned char)20] [i_2 - 1]))) << (((((arr_9 [i_2 - 1] [(unsigned char)20] [i_2] [(unsigned char)20] [i_2 - 1]) * (arr_9 [i_2 - 1] [12U] [(short)20] [12U] [i_2 - 1]))) - (3404445928U))))))));
                        arr_11 [16ULL] [i_0] [i_1] [i_2] [i_1] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2 + 2]))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1]))))))))) : ((~(291904796))));
                        var_17 -= ((/* implicit */unsigned char) var_13);
                    }
                    var_18 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11885))) == ((-(arr_6 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 1])))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 3) 
                    {
                        var_19 = ((/* implicit */short) ((unsigned char) 8486414408608209460ULL));
                        var_20 = ((/* implicit */int) (-(min((max((arr_6 [i_0] [i_1] [1ULL] [i_4]), (((/* implicit */unsigned int) 1114272456)))), (((/* implicit */unsigned int) arr_1 [i_4] [i_4 - 1]))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                        {
                            arr_18 [i_1] [i_2] [i_4] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_15 [i_1])) ? (arr_16 [(unsigned short)21]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [(unsigned short)12] [i_4] [i_1]))))), (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */int) arr_1 [i_2 - 1] [i_4 + 1])))))));
                            arr_19 [i_5] [i_4] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((long long int) max((arr_8 [i_2 + 2] [i_2 + 1] [i_2 - 2] [i_4 + 1] [i_1]), (((signed char) arr_0 [i_0])))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            arr_22 [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_10 [i_2] [i_2 - 1] [i_2 - 1] [i_2 + 1] [7ULL] [i_2])) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (unsigned char)0)))) >> (((max((arr_16 [i_2 - 2]), (((/* implicit */unsigned long long int) arr_10 [(short)7] [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_2] [i_2])))) - (18446744073709521627ULL)))));
                            arr_23 [i_1] [i_6] = ((/* implicit */unsigned char) (unsigned short)11879);
                            var_21 &= ((/* implicit */int) (unsigned char)255);
                        }
                        var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) arr_13 [i_2 + 2] [i_2] [4])) > (((/* implicit */int) arr_13 [i_2 + 2] [i_4] [i_4])))))));
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            var_23 += ((/* implicit */unsigned short) 1040187392ULL);
                            arr_29 [i_0] [i_1] [i_2] [18ULL] [i_8] = ((/* implicit */signed char) (((_Bool)1) ? (arr_17 [i_0] [i_0] [i_2 + 2] [i_7 - 1] [i_7] [i_7]) : (((/* implicit */int) arr_2 [i_1] [i_2 - 2]))));
                            var_24 = ((/* implicit */unsigned int) ((arr_25 [i_0] [i_1] [i_2] [i_7] [(_Bool)1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_28 [i_1] [(unsigned short)5] [i_7] [i_2] [i_1] [i_1]) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))))));
                        }
                        arr_30 [i_7] [(short)12] [i_1] [(short)12] [(short)22] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [(short)16] [i_2] [i_2 - 2]))));
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 2; i_9 < 22; i_9 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 1) 
                        {
                            var_25 = ((/* implicit */signed char) arr_10 [i_10] [i_1] [i_0] [0ULL] [i_9] [(short)10]);
                            var_26 = ((/* implicit */_Bool) (+(arr_12 [i_2] [i_2 - 2] [i_2 + 2] [i_9 - 1] [18ULL])));
                        }
                        arr_37 [i_9] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */int) var_15);
                    }
                }
            } 
        } 
        arr_38 [i_0] = ((/* implicit */long long int) min((((unsigned long long int) arr_26 [6LL] [i_0] [(_Bool)1] [i_0] [i_0] [i_0])), (min((((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_25 [22] [i_0] [16] [22ULL] [i_0])))));
    }
    /* vectorizable */
    for (unsigned char i_11 = 0; i_11 < 25; i_11 += 1) 
    {
        var_27 = ((/* implicit */unsigned char) ((short) arr_39 [i_11]));
        var_28 = ((/* implicit */int) 2675427356U);
        /* LoopSeq 1 */
        for (unsigned char i_12 = 1; i_12 < 23; i_12 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_13 = 0; i_13 < 25; i_13 += 1) 
            {
                var_29 = ((/* implicit */_Bool) var_13);
                var_30 = ((unsigned int) 0ULL);
                var_31 = ((/* implicit */unsigned char) arr_42 [i_12]);
            }
            /* LoopNest 2 */
            for (signed char i_14 = 0; i_14 < 25; i_14 += 3) 
            {
                for (unsigned short i_15 = 0; i_15 < 25; i_15 += 4) 
                {
                    {
                        var_32 *= (~(arr_52 [i_14] [i_14] [i_14] [i_14]));
                        var_33 ^= ((/* implicit */int) ((short) (unsigned char)255));
                        arr_53 [i_11] [i_12] [i_14] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_40 [i_11])) ? (arr_40 [i_15]) : (arr_40 [i_15])));
                    }
                } 
            } 
            arr_54 [i_12] [i_12] [(_Bool)1] = (~(arr_44 [i_12 + 1] [i_12 + 2] [i_12] [i_12]));
            var_34 = ((/* implicit */_Bool) var_6);
            var_35 &= ((((/* implicit */_Bool) arr_47 [i_12 + 1] [i_11] [i_11])) ? (arr_47 [i_11] [i_12] [i_12 + 2]) : (((/* implicit */int) arr_48 [(short)20] [i_12 + 2] [i_11])));
        }
        var_36 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_11] [i_11] [i_11]))) : (((unsigned int) -291904816))));
    }
    var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_1), (var_4)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_12))))) : (((long long int) var_5))));
    var_38 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (+(2305841909702066176LL)))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)7930)) : (((/* implicit */int) (unsigned short)11885))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)23293))) - (14966575296998380434ULL))))));
}
