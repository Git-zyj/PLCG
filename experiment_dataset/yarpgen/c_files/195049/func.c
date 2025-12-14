/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195049
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 281474976710648ULL))));
        arr_5 [i_0] = ((/* implicit */_Bool) ((arr_3 [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) var_10)) * (((/* implicit */int) (short)5630)))) != (min((1), (arr_2 [i_0] [i_0]))))))) : (min((((/* implicit */long long int) arr_0 [i_0])), (((long long int) var_6))))));
    }
    var_15 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (((long long int) var_6)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57422))))));
    var_16 = ((/* implicit */signed char) ((unsigned int) var_5));
    var_17 ^= ((/* implicit */int) (_Bool)1);
}
