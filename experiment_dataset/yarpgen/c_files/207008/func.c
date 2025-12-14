/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207008
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
    var_15 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)220)))))) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) var_2))))));
    var_16 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) max((((/* implicit */short) var_10)), (var_2)))) + ((+(((/* implicit */int) var_0)))))), (((/* implicit */int) ((unsigned char) (+(9781210215126877220ULL)))))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 1955927343992255779ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 1])) > (((/* implicit */int) (signed char)-112)))))) : (-6166392687621115044LL)));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [12ULL] [i_0])) ? (((unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8))) : (min((((/* implicit */unsigned long long int) 2747183072U)), (14836537937656046472ULL)))))));
    }
}
