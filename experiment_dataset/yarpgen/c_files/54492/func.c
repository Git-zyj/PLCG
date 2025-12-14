/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54492
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 2; i_2 < 20; i_2 += 2) /* same iter space */
                {
                    var_11 ^= ((/* implicit */unsigned char) ((_Bool) (_Bool)0));
                    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) max((max((((/* implicit */unsigned short) (short)17553)), (arr_6 [i_2] [i_2 + 1] [i_2]))), (((/* implicit */unsigned short) (signed char)-92)))))));
                    var_13 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [i_2])) && (((/* implicit */_Bool) 14ULL)))) ? (arr_5 [i_2]) : (arr_5 [i_2])));
                }
                /* vectorizable */
                for (long long int i_3 = 2; i_3 < 20; i_3 += 2) /* same iter space */
                {
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) arr_8 [i_0] [i_3 - 2]))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 1; i_4 < 19; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (+(400436622U))))));
                                var_16 = ((/* implicit */short) ((_Bool) (~(((/* implicit */int) arr_0 [i_0])))));
                                var_17 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_3 - 1])) : (((/* implicit */int) var_3)));
                            }
                        } 
                    } 
                    var_18 -= ((/* implicit */unsigned int) ((((arr_11 [i_0] [i_0] [i_0] [(unsigned short)13]) / (((/* implicit */int) var_10)))) + (((((/* implicit */int) (short)7902)) * (((/* implicit */int) (short)7902))))));
                }
                /* LoopSeq 3 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_19 = ((/* implicit */unsigned char) 10LL);
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-7926)) ? (((/* implicit */unsigned long long int) ((4294967295U) % (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1))))))) : (((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)11563))))) - (((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_10 [i_0] [i_1] [i_6] [i_0] [i_0] [i_1])))))));
                    var_21 -= ((/* implicit */unsigned short) (signed char)51);
                    arr_17 [(unsigned char)16] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(4294967287U)))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) >> (((max((((/* implicit */int) (_Bool)0)), (var_4))) - (810789481))))) : (arr_11 [i_0] [i_1] [i_1] [i_6])));
                    arr_18 [i_0] [i_1] [i_1] = ((/* implicit */short) ((long long int) (unsigned short)0));
                }
                for (unsigned int i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (9U))), (((/* implicit */unsigned int) arr_1 [i_1])))) < (((/* implicit */unsigned int) ((/* implicit */int) max((max(((signed char)-28), ((signed char)-23))), (((/* implicit */signed char) (!(((/* implicit */_Bool) 25U))))))))))))));
                    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) 1938612690196457049ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (8U))) : (((/* implicit */unsigned int) max((((/* implicit */int) arr_15 [i_0] [i_1] [i_0])), (((((/* implicit */_Bool) (short)7902)) ? (var_2) : (((/* implicit */int) var_9))))))))))));
                    arr_21 [i_0] [i_1] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16508131383513094566ULL)) ? (35U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-49)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)(-127 - 1))), (81401741444897744LL)))) : (max((18446744073709551607ULL), (((/* implicit */unsigned long long int) var_3))))));
                }
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (_Bool)0))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0])) > (((/* implicit */int) var_0))))) : (((((((/* implicit */int) (short)-7926)) + (2147483647))) << (((((((/* implicit */int) arr_15 [15U] [i_1] [i_8 + 1])) + (10221))) - (19))))))))));
                    var_25 = ((/* implicit */unsigned long long int) arr_14 [i_1] [i_8 + 1] [i_8 + 1]);
                }
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)43167)) + (var_4)))) ? (((/* implicit */int) max(((unsigned char)179), (((/* implicit */unsigned char) var_0))))) : (((/* implicit */int) min((var_10), (((/* implicit */unsigned char) var_5))))))));
    /* LoopNest 2 */
    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 2) 
    {
        for (signed char i_10 = 2; i_10 < 18; i_10 += 2) 
        {
            {
                var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) max((((/* implicit */int) arr_8 [i_10 + 1] [i_10 - 1])), ((+(((/* implicit */int) var_10)))))))));
                arr_31 [i_10] = ((/* implicit */signed char) var_10);
                /* LoopSeq 2 */
                for (unsigned long long int i_11 = 4; i_11 < 18; i_11 += 2) 
                {
                    var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((11076794535136843989ULL) - ((+(arr_10 [(unsigned char)20] [i_10] [(_Bool)1] [i_10] [i_10] [i_10 + 1]))))) | (((/* implicit */unsigned long long int) min((((/* implicit */int) max(((unsigned short)14901), (((/* implicit */unsigned short) (signed char)0))))), (((((/* implicit */_Bool) (signed char)-40)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)23386))))))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max(((signed char)-48), (((/* implicit */signed char) arr_29 [i_9] [i_9]))))) && (((/* implicit */_Bool) arr_16 [i_9] [(_Bool)1] [2LL])))), (((((/* implicit */_Bool) arr_15 [i_9] [i_10 - 2] [i_11 - 3])) || ((!(((/* implicit */_Bool) arr_24 [i_11]))))))));
                        var_30 &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((7369949538572707636ULL), (((/* implicit */unsigned long long int) (unsigned short)65523))))) ? (((/* implicit */int) ((_Bool) arr_16 [i_9] [i_11 + 1] [i_10 + 1]))) : ((+(((/* implicit */int) (_Bool)1))))));
                        var_31 = -422117851;
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 19; i_13 += 2) 
                    {
                        for (short i_14 = 3; i_14 < 18; i_14 += 2) 
                        {
                            {
                                var_32 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((((arr_13 [i_9] [i_11] [i_11] [(signed char)6] [2]) + (2147483647))) << (((var_2) - (1439287620))))))))));
                                arr_44 [i_9] [(signed char)10] [i_11] [(short)9] [i_9] = ((/* implicit */int) max((max((((/* implicit */unsigned int) arr_0 [i_11 - 2])), (0U))), (((/* implicit */unsigned int) ((var_3) ? (((/* implicit */int) arr_43 [i_11 - 3] [i_9] [i_14 + 1] [i_13] [i_10 - 1] [i_11 - 4] [i_11 - 2])) : (((/* implicit */int) arr_43 [i_11 + 1] [(signed char)10] [i_14 - 2] [i_13] [i_10 + 1] [i_14 - 2] [i_9])))))));
                                var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-21704)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (signed char)-110))));
                                var_34 -= ((/* implicit */unsigned int) (-((+(arr_13 [i_9] [i_9] [10] [i_9] [i_14])))));
                            }
                        } 
                    } 
                    var_35 &= ((/* implicit */short) (unsigned char)203);
                }
                for (unsigned long long int i_15 = 3; i_15 < 15; i_15 += 2) 
                {
                    arr_48 [i_15 - 3] [i_10 - 1] [(unsigned char)11] [13ULL] = ((/* implicit */_Bool) min((((/* implicit */short) (signed char)20)), (arr_43 [i_9] [(unsigned short)4] [i_9] [i_9] [15LL] [i_15] [i_10 + 1])));
                    var_36 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_1 [i_10 + 1])))) * (((/* implicit */int) arr_41 [i_15 + 4] [i_15 + 4]))));
                    var_37 ^= ((/* implicit */unsigned short) max((min((-1547769522), (((/* implicit */int) (unsigned short)57883)))), (((/* implicit */int) (unsigned char)154))));
                    arr_49 [i_9] [(_Bool)1] [i_10 - 1] [(_Bool)1] = ((/* implicit */short) (((+(((/* implicit */int) arr_30 [i_10 + 1])))) / (((/* implicit */int) max((arr_30 [i_10 - 2]), (arr_30 [i_10 + 1]))))));
                }
                var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2062059783779655425ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)0)))))));
                var_39 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)54124)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_29 [11] [(_Bool)1]))))) : (((((/* implicit */_Bool) (short)-20644)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)253))) : (((((/* implicit */long long int) 642884795U)) + (-4015811437754663648LL)))))));
            }
        } 
    } 
}
