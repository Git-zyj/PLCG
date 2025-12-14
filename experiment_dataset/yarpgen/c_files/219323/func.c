/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219323
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
    var_18 = ((/* implicit */int) var_15);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) / (var_12)))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)49109)) == (((/* implicit */int) (signed char)96))));
        var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (((/* implicit */int) (unsigned short)49109)) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)132)), ((unsigned short)49111))))));
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 3718523219U)) ^ (min((((((/* implicit */_Bool) (unsigned char)117)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49116))) : (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned long long int) arr_0 [i_0 + 1]))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        for (unsigned char i_2 = 2; i_2 < 24; i_2 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (short i_3 = 2; i_3 < 24; i_3 += 3) 
                {
                    var_20 *= ((/* implicit */signed char) var_15);
                    arr_11 [i_2] [i_3 + 1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)64224))))) & (arr_9 [i_1] [i_1])));
                    arr_12 [i_3] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) max((min(((unsigned short)65401), (((/* implicit */unsigned short) (signed char)58)))), (((/* implicit */unsigned short) ((((/* implicit */long long int) 2639989193U)) >= (arr_9 [i_2 - 1] [i_2 - 2]))))));
                }
                for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_15 [i_2 - 2] [i_2] [i_2 - 2] [i_2 - 1]) << (((arr_15 [i_2 + 1] [i_2] [i_2 - 2] [i_2 - 1]) - (1408789789)))))) || (((/* implicit */_Bool) ((var_14) / (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30870))) : (0U)))))))));
                    arr_17 [i_2] [i_2] [i_4] = 2933504764120370582LL;
                }
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    arr_21 [i_1] [i_1] [i_1] &= ((/* implicit */unsigned char) 2685804730874326885LL);
                    var_22 ^= ((/* implicit */long long int) ((arr_14 [i_1] [i_2] [i_2 - 1]) != (arr_14 [i_1] [i_1] [i_5])));
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_0))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)23692)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)16424))))) : (((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) : (arr_18 [i_1] [i_1] [i_2])))));
                    arr_22 [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)254))))) ? (1094850661U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-6897)))));
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_2 - 1])) || (((/* implicit */_Bool) (unsigned short)22544))));
                }
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((3U) << (((-3180168118008606004LL) + (3180168118008606018LL))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)102)) : (((/* implicit */int) var_5)))))))) ? ((((+(arr_13 [i_1] [i_2 - 1] [i_2 + 1]))) * (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */int) (signed char)-8)) & (((/* implicit */int) var_2)))))))));
            }
        } 
    } 
}
