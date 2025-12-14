/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227886
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_2] [i_0] = ((int) ((((/* implicit */int) arr_1 [i_1 - 1])) % (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_4 [i_2 + 2])) : (arr_2 [i_0] [i_0])))));
                    arr_10 [i_0] [i_0] [i_2] = var_15;
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned int) arr_11 [i_2 + 1] [i_2 + 1] [i_4]);
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)36469)) >> (((14423267163277802013ULL) - (14423267163277802000ULL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_1 - 1] [i_1] [i_1] [13ULL] [i_1])) || (((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_2] [i_3]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) arr_11 [2ULL] [i_5] [i_1 - 1]);
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)2640))) + (-5544594564934750363LL)))) ? (((((/* implicit */_Bool) (short)15742)) ? (((/* implicit */unsigned long long int) (~(arr_16 [i_0] [i_2] [(short)2])))) : (((((/* implicit */_Bool) 3225061529608384726ULL)) ? (18446744073709551592ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38394)))))));
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_8 [i_0] [i_2] [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-7535)))))) ? (((/* implicit */unsigned int) ((((var_1) + (2147483647))) >> (((/* implicit */int) arr_12 [i_3] [i_3]))))) : (max((2628000687U), (((/* implicit */unsigned int) arr_15 [i_3] [i_3] [i_3] [i_3] [i_3] [i_2]))))))) ? (((long long int) (!((_Bool)1)))) : (((/* implicit */long long int) 131880311U))));
                            arr_21 [i_0] [i_0] [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */short) (!(arr_6 [i_0] [i_0] [i_2])));
                        }
                        arr_22 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 307958779U))))) >= (max((-941286718), (((/* implicit */int) (short)1608))))));
                        arr_23 [i_1] [i_2] = ((/* implicit */short) (~(min((min((((/* implicit */long long int) arr_15 [i_0] [i_1] [i_2 + 2] [i_3] [i_3] [i_2])), (-6737816996760392282LL))), (((/* implicit */long long int) arr_12 [i_1 - 1] [i_1 - 1]))))));
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-103))) : (6579587846035363927ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (unsigned short)2669))))))))));
}
