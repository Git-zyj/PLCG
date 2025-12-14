/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243481
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
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        arr_4 [i_0] [(_Bool)1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_1 [i_0] [0LL]))));
        arr_5 [(short)2] = ((/* implicit */long long int) arr_1 [(unsigned char)2] [(unsigned char)2]);
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = var_15;
        arr_9 [i_1] = (i_1 % 2 == 0) ? (((/* implicit */signed char) ((((arr_7 [i_1]) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))) : (((/* implicit */signed char) ((((((arr_7 [i_1]) - (2147483647))) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))));
        arr_10 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))));
    }
    var_17 |= ((/* implicit */long long int) max((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_16)) : (var_6))) + (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)39123)), (2147483647)))))), (((/* implicit */unsigned long long int) var_1))));
    var_18 = ((/* implicit */short) var_3);
}
