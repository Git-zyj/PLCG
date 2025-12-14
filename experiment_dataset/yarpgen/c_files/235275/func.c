/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235275
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [0ULL])) || (((/* implicit */_Bool) arr_0 [i_0])))) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        var_20 = ((/* implicit */long long int) ((signed char) ((((/* implicit */int) (signed char)1)) >> (((1023473220U) - (1023473204U))))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (((unsigned int) arr_0 [i_0])) : (arr_0 [i_0])));
    }
    var_21 ^= ((/* implicit */short) ((((var_17) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) max((576460614864470016ULL), (((/* implicit */unsigned long long int) var_5)))))))));
}
