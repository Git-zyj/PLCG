/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240657
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
    var_15 &= var_6;
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (int i_4 = 4; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] = ((/* implicit */unsigned char) ((int) max((min((((/* implicit */unsigned int) arr_13 [i_0] [i_1] [i_1] [i_3] [i_4])), (var_13))), (((/* implicit */unsigned int) var_14)))));
                                var_16 -= ((/* implicit */unsigned short) ((((int) var_8)) ^ (arr_13 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 - 2] [i_4 - 2])));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_17 = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_0] [i_0])) ^ (var_11)));
                        arr_18 [i_1] [i_5] [i_5] = ((/* implicit */int) ((long long int) (unsigned char)169));
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            var_18 ^= ((/* implicit */int) ((_Bool) var_3));
                            var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_14 [i_0] [i_6] [i_2] [i_5] [i_6])) ? (2537510952U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))));
                            arr_21 [i_0] [i_1] [i_5] = ((/* implicit */unsigned char) (unsigned short)41510);
                        }
                    }
                    for (unsigned char i_7 = 3; i_7 < 18; i_7 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) var_1)))));
                        var_21 += ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) | (((/* implicit */int) max((((/* implicit */unsigned short) (short)32738)), (arr_17 [i_1] [i_1] [i_2] [i_1]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) arr_3 [i_0])) : (var_9)))) ? (((/* implicit */long long int) arr_9 [i_7] [i_2] [i_1])) : (min((9223372036854775792LL), (var_3)))))));
                        arr_24 [i_7] [i_7] [i_2] [i_7] = ((/* implicit */_Bool) max((min((((/* implicit */int) ((_Bool) -237562826))), (237562806))), (((int) (!(((/* implicit */_Bool) var_8)))))));
                        arr_25 [i_7] [i_7] [i_2] [i_7] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (1697432811) : (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_17 [(short)10] [i_2] [(short)10] [(short)10])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))))) : ((-(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (var_2)))))));
                        var_22 = ((/* implicit */int) (short)-29878);
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_29 [i_8] [i_1] [i_0] &= ((/* implicit */int) (((-(-8122399010559523849LL))) >> ((((-(arr_16 [i_0] [i_0] [i_1] [i_8] [i_0] [i_1]))) + (8129554591953351688LL)))));
                        var_23 ^= ((/* implicit */int) ((unsigned char) arr_7 [i_0]));
                        arr_30 [i_0] [9LL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_8)) < (((long long int) var_11))));
                    }
                    var_24 = ((((/* implicit */int) ((short) ((unsigned char) var_10)))) << (((((/* implicit */int) ((short) 1408174717))) - (2669))));
                }
            } 
        } 
    } 
    var_25 |= ((/* implicit */int) min((var_13), (((unsigned int) var_10))));
    var_26 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (short)32577)) ? (642833473) : (((((/* implicit */_Bool) -321070657)) ? (1247274806) : (80107790))))));
}
