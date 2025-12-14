/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191111
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
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) || (((/* implicit */_Bool) var_6))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), (max((min((((/* implicit */long long int) max((((/* implicit */unsigned int) var_16)), (var_5)))), (((((/* implicit */_Bool) 867913439)) ? (3283443962111785774LL) : (-3283443962111785754LL))))), (((/* implicit */long long int) var_16))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) * (max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (7485788590746898718ULL)))));
        var_20 = ((/* implicit */unsigned int) ((unsigned char) var_14));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1] [i_1])) >> (((3456835404312204055ULL) - (3456835404312204028ULL))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */int) ((unsigned int) arr_6 [i_1]));
    }
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (unsigned char)141)))), (((/* implicit */int) (!(((/* implicit */_Bool) 3715882471U)))))));
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            for (unsigned int i_4 = 4; i_4 < 9; i_4 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) min(((+(3283443962111785750LL))), (((/* implicit */long long int) (~(var_8))))));
                    var_23 = ((((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)124)) ? (592225295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))) > (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) arr_9 [i_2])) : (arr_11 [i_4])))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_9 [i_2])) : (var_2))))));
                    var_24 ^= ((/* implicit */long long int) max((min(((unsigned char)181), ((unsigned char)255))), (((/* implicit */unsigned char) (_Bool)1))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                arr_21 [i_2] [i_3] [i_4] [i_5 + 1] [i_6] = ((/* implicit */long long int) (+(((/* implicit */int) arr_20 [i_5 + 1] [(unsigned short)6] [i_5 - 1] [i_5 - 1] [i_5 - 1] [(unsigned short)6] [i_5 - 1]))));
                                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) 3452730583U))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
                    {
                        arr_24 [i_3] [i_3] [i_4] [i_4] [i_3] = (-(var_0));
                        arr_25 [i_2] [i_2] &= ((/* implicit */_Bool) (((+(((((/* implicit */int) (unsigned short)12789)) / (((/* implicit */int) (unsigned char)238)))))) & (731724438)));
                    }
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            var_26 = ((/* implicit */_Bool) var_8);
                            var_27 = ((/* implicit */unsigned long long int) arr_29 [i_2] [i_3] [i_4] [i_2] [i_3] [i_2]);
                            var_28 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned char)13))))));
                            var_29 = (unsigned short)23178;
                        }
                        arr_31 [i_2] [i_3] [i_4 + 1] = ((/* implicit */long long int) min((max(((((_Bool)1) ? (arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)135))))), (((/* implicit */unsigned long long int) arr_0 [i_4 - 4] [i_4 - 1])))), (((/* implicit */unsigned long long int) arr_1 [i_3]))));
                        var_30 = ((/* implicit */long long int) (unsigned char)1);
                    }
                    for (unsigned short i_10 = 0; i_10 < 11; i_10 += 1) /* same iter space */
                    {
                        var_31 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) & (((/* implicit */int) arr_5 [i_4] [i_4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_4] [i_4 - 4] [i_4 - 4] [i_4 - 4] [i_4] [i_4]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_10] [i_10] [i_4 - 4] [i_3] [i_2] [i_2] [i_2]))) & (var_1)))))) ? (((/* implicit */long long int) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((signed char) arr_3 [i_2] [i_2])))))) : (var_2)));
                        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (((!(arr_16 [i_2] [i_2] [i_4 + 2] [i_10]))) ? (((/* implicit */int) arr_29 [i_4 - 2] [i_4 - 2] [i_4] [i_4] [i_2] [i_4 + 2])) : (((/* implicit */int) arr_4 [10LL])))))));
                    }
                    for (int i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        arr_36 [i_2] [i_3] [i_4 + 1] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_9)))) % (((arr_11 [i_4 - 4]) >> (((-3283443962111785783LL) + (3283443962111785785LL)))))));
                        arr_37 [i_2] [i_3] [i_3] [i_4] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_4] [i_4] [i_4] [i_4] [i_4 + 1] [i_4 + 1]))))) - (((/* implicit */int) ((short) arr_23 [i_2] [i_3] [i_4 - 1] [i_11] [i_4 - 1] [i_4])))));
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_14)))) + (var_11)));
                    }
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_16)))))))));
    }
}
