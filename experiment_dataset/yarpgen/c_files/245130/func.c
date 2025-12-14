/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245130
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
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) var_9));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 3])) ? (((((/* implicit */_Bool) 310177723U)) ? (310177748U) : (3984789569U))) : (((((/* implicit */_Bool) arr_0 [(signed char)10])) ? (310177737U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [(_Bool)1])))))));
        arr_4 [i_0] |= ((/* implicit */unsigned int) ((long long int) arr_0 [i_0 + 2]));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((arr_0 [7ULL]) & (arr_0 [(_Bool)1])));
    }
    /* vectorizable */
    for (unsigned int i_1 = 3; i_1 < 20; i_1 += 4) 
    {
        var_13 *= ((/* implicit */unsigned char) ((arr_8 [i_1 - 1]) > (arr_8 [i_1 - 1])));
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1 + 1])) ? (arr_8 [i_1 - 2]) : (arr_8 [i_1 - 1]))))));
        arr_10 [i_1 - 3] = ((unsigned short) ((unsigned short) var_10));
    }
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) var_6))));
}
