/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211167
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
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 4; i_1 < 18; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */int) (unsigned char)213)) & (((/* implicit */int) (signed char)0)))))));
                    var_16 *= ((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_8 [i_1 - 3] [i_1 - 3] [i_1])) : (((/* implicit */int) var_0))))) & ((+(arr_7 [i_1 - 3] [i_1 - 3] [i_1 - 3]))));
                    arr_10 [(signed char)9] [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) var_9);
                    var_17 ^= ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((14391593521005073777ULL), (((/* implicit */unsigned long long int) (signed char)0))))) ? (arr_7 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) (-2147483647 - 1)))))) <= (((((/* implicit */_Bool) ((0U) + (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((arr_9 [i_0] [i_1 + 2] [i_2] [9U]) - (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
                }
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned int) arr_0 [9U]))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_4 [i_0])))) : (((/* implicit */int) var_12))))) : (var_1)));
    }
    var_18 &= ((((/* implicit */_Bool) min((((/* implicit */int) var_9)), ((-(((/* implicit */int) var_13))))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8)));
    var_19 *= ((/* implicit */signed char) var_11);
}
