/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245394
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
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16141979361526460396ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)32183)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? ((~(arr_0 [i_0] [0U]))) : (arr_0 [i_0] [i_0])));
        var_16 = ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_2 [(signed char)4] = ((/* implicit */unsigned int) ((2304764712183091216ULL) > (((/* implicit */unsigned long long int) -797559167))));
    }
    var_17 |= ((/* implicit */_Bool) min(((+(((((/* implicit */_Bool) 289084201746512826ULL)) ? (((/* implicit */int) (short)-23751)) : (((/* implicit */int) (_Bool)1)))))), ((+(((((/* implicit */_Bool) -1831409501)) ? (((/* implicit */int) var_0)) : (var_12)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 4) 
    {
        arr_6 [i_1 - 1] [i_1 + 1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (_Bool)1)), (10939434298079344624ULL)));
        arr_7 [i_1] = ((/* implicit */_Bool) arr_5 [i_1]);
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(min((arr_4 [i_1] [i_1 + 1]), (var_6)))))) ? (arr_4 [i_1] [(_Bool)1]) : (((/* implicit */unsigned long long int) var_4))));
        var_19 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1])) ? (arr_4 [i_1 + 2] [i_1 - 1]) : (arr_4 [i_1 + 1] [i_1 + 2])))));
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_1 + 2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 + 2]))))) : (((/* implicit */int) min((arr_3 [i_1 - 1]), (var_3))))));
    }
}
