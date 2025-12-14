/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25320
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) min((var_12), ((short)6144))))));
        var_17 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-21097)) + (((/* implicit */int) (short)-18868))))) || (((/* implicit */_Bool) ((unsigned char) 1692793858)))))) >> (((((/* implicit */int) var_0)) * (((/* implicit */int) var_12))))));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
        arr_3 [(_Bool)0] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) arr_0 [i_0])))));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5642567039696118049LL)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1]))))) ? (arr_5 [i_1]) : (((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((((/* implicit */int) var_0)) << (((arr_5 [i_1]) + (874795875)))))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (5642567039696118049LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)216)))))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 2; i_2 < 7; i_2 += 1) 
        {
            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(max((3089237582929687758LL), (((/* implicit */long long int) arr_2 [i_1]))))))) ? (((arr_5 [i_2 + 1]) / (((/* implicit */int) (unsigned char)93)))) : (((/* implicit */int) ((((15725970125745504863ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))))) && (((/* implicit */_Bool) (short)21097)))))));
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */long long int) (((+(((/* implicit */int) (short)21097)))) + (((/* implicit */int) (short)-21097))))) + ((-(arr_7 [i_2 - 2] [i_2 + 2] [i_2 + 3]))))))));
        }
        var_21 = ((/* implicit */int) (((+(arr_9 [i_1] [i_1]))) >= (max((arr_9 [(_Bool)1] [(_Bool)1]), (arr_9 [i_1] [i_1])))));
    }
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)49)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)210)))));
}
