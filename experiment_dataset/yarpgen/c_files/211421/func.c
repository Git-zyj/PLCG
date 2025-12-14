/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211421
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
    var_20 &= ((/* implicit */unsigned char) var_10);
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_21 = (unsigned short)14306;
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        arr_11 [i_0 + 1] [i_0] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned short) 4737537864149355761LL);
                        /* LoopSeq 1 */
                        for (int i_4 = 3; i_4 < 23; i_4 += 3) 
                        {
                            arr_14 [i_0] [(short)15] [i_2] [i_3] [i_0] = ((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_0 + 3] [i_0] [(unsigned short)18] [i_4 - 2])))));
                            var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) 895328622)) ? (((/* implicit */unsigned long long int) 0LL)) : (max((12200922377796504778ULL), (((/* implicit */unsigned long long int) (signed char)3)))))) | (((/* implicit */unsigned long long int) (~(-1LL))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned short) (~(((unsigned int) (unsigned short)9468))));
                        arr_17 [i_0 + 3] [i_0] [i_1] [i_2] [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [6] [6] [i_1] [i_2] [i_5] [i_0]))) <= (var_6))) ? ((+(arr_7 [i_0] [18LL] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        var_24 = ((/* implicit */short) arr_9 [i_0] [i_1] [i_2] [i_6]);
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7644)) ? (1484863519) : (((/* implicit */int) (unsigned short)37959))));
                    }
                    var_26 &= ((/* implicit */signed char) ((((/* implicit */_Bool) 17LL)) && (((/* implicit */_Bool) 3587942248594434149ULL))));
                    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (~(((/* implicit */int) ((3587942248594434168ULL) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (short i_8 = 1; i_8 < 8; i_8 += 4) 
        {
            for (long long int i_9 = 3; i_9 < 10; i_9 += 3) 
            {
                {
                    var_28 = ((/* implicit */unsigned int) var_18);
                    arr_29 [4U] [i_9] = ((/* implicit */unsigned long long int) ((((unsigned int) 59069025U)) >> ((((~(var_12))) + (2017083775)))));
                    var_29 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)-78)) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    } 
}
