/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201976
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
    var_11 = ((/* implicit */unsigned char) (+(((70368744177663ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
    var_12 = ((/* implicit */signed char) max((((((/* implicit */_Bool) max(((unsigned short)9009), (((/* implicit */unsigned short) var_6))))) ? (((/* implicit */int) ((unsigned char) (signed char)-92))) : ((~(((/* implicit */int) var_10)))))), (((/* implicit */int) (short)4817))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_13 = ((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */int) (signed char)91)) : (((/* implicit */int) (short)0)));
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0))))) : (arr_0 [i_0])));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) var_10);
    }
}
