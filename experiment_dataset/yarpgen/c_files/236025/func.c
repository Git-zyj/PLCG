/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236025
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_8 [i_0 + 1] [14U] [18] [i_1 + 1] |= ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (((-(var_16))) > (((/* implicit */unsigned long long int) arr_5 [i_2]))))) : ((~(((int) var_12)))));
                    arr_9 [(_Bool)1] [(_Bool)1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 648073822)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 - 1] [i_0 + 1] [i_0 + 1]))) : (((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_0 + 1] [i_0 + 1])) ? (16483999802210391222ULL) : (((/* implicit */unsigned long long int) 648073822))))));
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (-1909661963) : (648073822)));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) ((int) ((int) min((-5376945324183206909LL), (((/* implicit */long long int) -648073822))))));
                                var_18 ^= ((/* implicit */int) ((((unsigned long long int) -648073822)) >> (((((/* implicit */int) (short)-19330)) + (19376)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        var_19 ^= ((/* implicit */unsigned int) arr_16 [i_1] [i_1]);
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_1 [i_1 + 1])) / (((((long long int) 6357921699291739968ULL)) & (((/* implicit */long long int) ((((/* implicit */_Bool) 648073822)) ? (-648073823) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_2] [i_5])))))))));
                    }
                    for (short i_6 = 1; i_6 < 21; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            arr_22 [8ULL] [i_1] [i_2] [i_6 + 1] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_6] [i_7])) ? (((long long int) var_6)) : (((/* implicit */long long int) (((_Bool)1) ? (var_11) : (arr_2 [i_0] [(_Bool)1]))))));
                            arr_23 [i_0] [i_1] [i_1] [i_6 + 1] [i_7] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 2843322627U)) ? (1837982338U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) | (-5376945324183206909LL)));
                            arr_24 [i_0] [i_0] [i_2] [i_1] [i_2] = ((/* implicit */_Bool) ((1096326006U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [(short)0] [16])))));
                        }
                        arr_25 [i_6] [i_6] [20LL] [i_1] = ((/* implicit */int) (~(((unsigned int) arr_5 [i_2]))));
                    }
                }
            } 
        } 
        arr_26 [i_0] = ((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1]);
        var_21 = ((/* implicit */short) arr_6 [i_0] [i_0]);
        var_22 ^= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (arr_5 [i_0 + 1]) : (arr_5 [i_0 + 1]))), (((((/* implicit */_Bool) ((((/* implicit */long long int) -648073822)) ^ (5376945324183206909LL)))) ? (3165692333U) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned char)123))))))));
    }
    /* vectorizable */
    for (unsigned int i_8 = 1; i_8 < 20; i_8 += 2) 
    {
        arr_31 [i_8 + 1] [i_8] = ((/* implicit */unsigned short) arr_6 [i_8 + 2] [i_8 - 1]);
        arr_32 [i_8] = ((/* implicit */long long int) var_11);
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 22; i_9 += 4) 
        {
            for (unsigned short i_10 = 0; i_10 < 22; i_10 += 1) 
            {
                {
                    var_23 = ((/* implicit */short) 843680134);
                    arr_39 [7LL] [(_Bool)1] [i_9] [i_10] = ((/* implicit */long long int) (-(((/* implicit */int) arr_35 [i_8] [i_8 + 2]))));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) 1129274962U)) ? ((((-(((/* implicit */int) (_Bool)0)))) + (var_6))) : (((/* implicit */int) var_1)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_11 = 1; i_11 < 21; i_11 += 4) 
    {
        var_25 = ((/* implicit */short) (~(((8676416597653607767LL) | (-4068286132780127262LL)))));
        var_26 = ((/* implicit */unsigned char) ((unsigned int) -5376945324183206909LL));
    }
    var_27 = ((/* implicit */_Bool) var_5);
    var_28 = ((/* implicit */unsigned long long int) var_8);
}
