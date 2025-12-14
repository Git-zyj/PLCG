/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211306
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
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_15 ^= ((/* implicit */unsigned int) ((unsigned char) ((unsigned long long int) (unsigned char)0)));
                arr_5 [(unsigned char)8] [i_0] [i_1] &= ((/* implicit */signed char) ((((/* implicit */long long int) ((((((/* implicit */int) arr_2 [14U])) ^ (((/* implicit */int) arr_2 [12U])))) + (((/* implicit */int) ((_Bool) (signed char)59)))))) % (var_5)));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0 + 1] [i_0] [(unsigned char)12] [i_0 - 1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_6 [i_1] [i_1] [i_2 + 1] [i_1]), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */unsigned long long int) ((long long int) 18446744073709551615ULL))) : ((+(((((/* implicit */_Bool) 1024383244U)) ? (17985895492074197295ULL) : (((/* implicit */unsigned long long int) 3270584051U))))))));
                                var_16 -= ((/* implicit */long long int) (~(((((/* implicit */_Bool) 1024383244U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_0 [i_0 - 2])))));
                                arr_14 [i_4] [i_3] [i_0] [i_0] [i_0 - 2] [i_0 - 2] = ((/* implicit */long long int) 0U);
                            }
                        } 
                    } 
                } 
                arr_15 [0LL] [i_1] [i_1] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((signed char) arr_11 [i_1] [i_1] [i_1] [(signed char)4] [(signed char)1] [i_1] [i_1]))) ? (arr_12 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0] [i_0] [16ULL] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 0ULL))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        for (unsigned short i_6 = 1; i_6 < 15; i_6 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-44))))) ? (((((/* implicit */_Bool) var_6)) ? (arr_0 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5] [i_5] [i_5] [i_6 - 1] [i_6] [i_6 + 1] [i_6 - 1]))))) : (var_0)))), (max((((/* implicit */long long int) ((unsigned char) 524216380U))), (((((/* implicit */_Bool) (unsigned short)2486)) ? (arr_19 [i_5] [i_6 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_6] [i_6] [i_6 + 1] [i_6] [i_5])))))) ? (((460427890214765940ULL) / (((/* implicit */unsigned long long int) 563465576U)))) : (max((arr_21 [i_5] [i_5] [i_5]), (18446744073709551615ULL))))) >= ((-(1ULL)))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_8);
}
