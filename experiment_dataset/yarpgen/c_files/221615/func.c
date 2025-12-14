/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221615
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
    var_12 = (-(((/* implicit */int) var_7)));
    var_13 |= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)98)) % ((+(((/* implicit */int) (short)-13884))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_6);
                var_14 ^= ((/* implicit */unsigned long long int) 4294967295U);
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 3; i_2 < 15; i_2 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                                var_15 = ((/* implicit */unsigned int) ((var_1) >= (((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) arr_3 [i_0] [i_0] [i_2]))))));
                                arr_17 [i_0] [i_1 - 3] [(unsigned char)10] [10] [(unsigned char)10] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_1 + 2] [i_2 + 3]))));
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) >> (((((((/* implicit */int) var_7)) << (((1321764691345282344LL) - (1321764691345282342LL))))) - (127153)))));
                                arr_18 [i_0] [i_0] [i_0] [1ULL] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_1 + 3] [i_1 - 1] [i_1 - 1])) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3] [i_3])))))));
                            }
                        } 
                    } 
                    arr_19 [(unsigned char)0] [i_1 + 4] = ((((/* implicit */_Bool) 2090784241395298530LL)) ? (((/* implicit */int) (short)13903)) : (((/* implicit */int) (short)-13905)));
                }
                for (unsigned char i_5 = 3; i_5 < 15; i_5 += 4) /* same iter space */
                {
                    arr_22 [i_5] [i_1 + 4] = ((/* implicit */int) max((((/* implicit */unsigned int) var_5)), (((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) + (((/* implicit */int) var_11))))) + (((((/* implicit */unsigned int) -2147483630)) - (786432U)))))));
                    var_17 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) (short)13884)) : (((/* implicit */int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 17; i_6 += 3) 
                    {
                        for (int i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            {
                                arr_31 [i_6] [i_6 - 1] [i_5] [i_6] [i_5] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1] [i_5 + 1])) : (((/* implicit */int) var_3))))));
                                var_18 = ((/* implicit */int) min((((long long int) (short)-13884)), (((/* implicit */long long int) (~(((/* implicit */int) (short)13873)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 18; i_9 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) min((min((arr_12 [i_1 - 3] [i_5] [i_5] [i_5 - 1]), (arr_12 [i_1 - 2] [i_1 + 1] [15LL] [i_5 + 3]))), (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_25 [i_8] [i_5] [i_5] [i_1 + 3])), (((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */long long int) var_10)) : (var_4)))))) ? (var_1) : (max((arr_8 [i_1 + 4] [i_5 - 1] [i_1 + 4]), (((/* implicit */int) arr_25 [i_1 + 4] [i_5] [i_5] [i_8]))))));
                                arr_36 [i_0] [i_1 + 1] [i_5] [(short)15] [i_5] [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2147483629)) || (((/* implicit */_Bool) (unsigned char)157))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (short i_10 = 0; i_10 < 18; i_10 += 3) 
                {
                    var_21 = ((/* implicit */int) (unsigned char)63);
                    var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_5 [(unsigned char)1] [i_1 + 2] [(unsigned char)1]) & (((/* implicit */unsigned long long int) 33488896U)))))));
                    /* LoopSeq 3 */
                    for (signed char i_11 = 0; i_11 < 18; i_11 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned char) ((18446744073709551615ULL) - (((/* implicit */unsigned long long int) 1493439498))));
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 0; i_12 < 18; i_12 += 2) 
                        {
                            var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)63))));
                            var_25 ^= ((/* implicit */long long int) ((signed char) ((_Bool) (unsigned char)241)));
                        }
                    }
                    for (int i_13 = 0; i_13 < 18; i_13 += 4) 
                    {
                        var_26 = ((/* implicit */short) ((arr_47 [i_1] [i_1 + 3] [i_1 - 3] [i_10]) & (arr_47 [i_1] [i_1 + 4] [i_1 + 2] [i_10])));
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)47)) ? (33488896U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)236)))));
                        var_28 = ((/* implicit */unsigned short) min((var_28), (arr_15 [i_1 + 2] [(_Bool)1] [i_1 + 2] [3LL] [i_13])));
                    }
                    for (unsigned short i_14 = 3; i_14 < 14; i_14 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned char) 5498683264685768374ULL);
                        arr_51 [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */long long int) 2147483647)) + (4611686018427387904LL)));
                    }
                }
            }
        } 
    } 
}
