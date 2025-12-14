/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211241
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_18 ^= ((4268058434891787910LL) / (4268058434891787910LL));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */_Bool) min(((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_0 [i_2])) : (arr_8 [i_3] [i_3] [i_2] [i_1] [i_0]))))), (((/* implicit */unsigned long long int) ((arr_7 [i_2] [i_1 - 3] [i_0]) ^ ((-(((/* implicit */int) var_12)))))))));
                        arr_11 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (arr_0 [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), (min((((long long int) -4268058434891787910LL)), (((/* implicit */long long int) (~(arr_7 [i_3] [i_2] [i_0]))))))));
                    }
                    arr_12 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (+(((((/* implicit */_Bool) 4268058434891787898LL)) ? (arr_0 [i_1 - 2]) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_3 [i_1] [i_1] [i_1])), (var_6))))))));
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        arr_15 [i_4] [i_2] [i_1 + 1] [i_4] |= ((/* implicit */_Bool) (-(max((min((((/* implicit */long long int) (short)7)), (4268058434891787910LL))), (4268058434891787916LL)))));
                        arr_16 [i_1] [i_2] [i_2] [i_1] [i_0] [i_1] = (i_1 % 2 == 0) ? (max((((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) arr_10 [i_1] [i_1])) : (arr_5 [i_2] [i_1 - 1]))), (((arr_6 [i_4]) << (((((arr_3 [i_1] [i_1] [i_1]) ? (arr_2 [i_1 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_1]))))) - (3268830893008510035LL))))))) : (max((((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) arr_10 [i_1] [i_1])) : (arr_5 [i_2] [i_1 - 1]))), (((arr_6 [i_4]) << (((((((((arr_3 [i_1] [i_1] [i_1]) ? (arr_2 [i_1 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_1]))))) - (3268830893008510035LL))) + (3268830893008510085LL))) - (48LL)))))));
                    }
                    var_20 = ((/* implicit */short) var_13);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_12);
}
