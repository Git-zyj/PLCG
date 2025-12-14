/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38035
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
    var_13 = ((/* implicit */long long int) min((((((/* implicit */int) var_2)) + (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)229)))))), (((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) max((var_5), (((/* implicit */short) (unsigned char)61)))))))));
    var_14 = ((/* implicit */unsigned char) min((((/* implicit */int) var_8)), ((~(var_9)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)11639)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_0]))))) ^ (var_11)));
    }
}
