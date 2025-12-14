/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200346
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
    var_20 = ((/* implicit */unsigned int) var_14);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_21 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)1)) ^ (((/* implicit */int) (signed char)-83)))))));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((short) ((short) 18446744073709551613ULL))))));
        arr_2 [i_0] [4] = ((/* implicit */short) ((unsigned char) ((unsigned int) arr_0 [i_0])));
        var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [i_0]) / (((/* implicit */int) var_19))))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-85)))));
    }
}
