/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231401
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_12 &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((((/* implicit */int) arr_2 [i_0])) != (((/* implicit */int) (signed char)84))))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) arr_0 [i_0]))))) : ((+(0ULL)))))));
        arr_3 [i_0] = ((/* implicit */signed char) 13780088460096197927ULL);
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_13 = ((((var_5) >= (arr_8 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_2]))) ? (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (max((4ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [5]))));
                        arr_12 [i_3] [i_1 + 1] [i_2] [i_3] [i_3] = ((/* implicit */signed char) arr_10 [i_0] [i_0] [i_2] [6ULL] [i_3]);
                        arr_13 [i_0] [i_0] [i_0] [i_2] [i_2 + 1] [i_2] = ((/* implicit */int) 6937862110449842322LL);
                        arr_14 [i_0] [i_0] [i_1] [i_2] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_5 [i_1] [0ULL] [i_3]))));
                    }
                } 
            } 
        } 
        arr_15 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])), (var_10))))) ? (((((/* implicit */int) var_8)) >> (((((((/* implicit */_Bool) var_10)) ? (13780088460096197956ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))) - (13780088460096197929ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (13780088460096197959ULL)))))))));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22; i_4 += 2) 
    {
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 2) 
        {
            {
                arr_21 [i_4] [i_4] [i_5] = ((/* implicit */unsigned char) (((~(max((var_3), (((/* implicit */unsigned long long int) var_8)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31202)))));
                var_14 *= ((/* implicit */_Bool) (+(((unsigned int) ((((/* implicit */unsigned long long int) arr_18 [i_5])) - (var_3))))));
            }
        } 
    } 
}
