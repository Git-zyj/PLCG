/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215800
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
    var_13 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 9479174906798595774ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (3ULL))), (((/* implicit */unsigned long long int) min((var_2), ((unsigned char)255))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        var_14 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [(_Bool)1] [(_Bool)1]))))) ? (3188069651952955368LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(_Bool)1] [i_0 - 2])))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) max((max((var_9), (((/* implicit */unsigned short) var_1)))), (((/* implicit */unsigned short) (short)48)))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0 - 3] [(unsigned char)2]);
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 23; i_1 += 1) 
    {
        var_15 = ((/* implicit */short) (~(((/* implicit */int) var_12))));
        arr_8 [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_8))));
        arr_9 [i_1] |= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1)))) - (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(short)3] [i_1]))) : (arr_7 [i_1 + 1]))));
        arr_10 [i_1] [i_1] |= ((/* implicit */_Bool) (~(((/* implicit */int) (short)-22231))));
        arr_11 [(unsigned char)23] = ((/* implicit */unsigned long long int) ((signed char) arr_6 [i_1 - 1]));
    }
    var_16 = ((/* implicit */short) min((((var_4) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) var_10)) / (((/* implicit */int) var_3)))))), (((/* implicit */int) var_3))));
}
