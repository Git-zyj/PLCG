/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45837
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
    var_20 = ((((/* implicit */_Bool) var_15)) ? ((+(max((var_10), (((/* implicit */unsigned long long int) var_15)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))));
    var_21 = ((/* implicit */short) (((-(min((var_18), (((/* implicit */unsigned long long int) var_2)))))) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3)))))));
    var_22 = ((/* implicit */signed char) (-(max((max((((/* implicit */unsigned int) var_14)), (var_1))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (var_15) : (((/* implicit */int) var_3)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_23 = ((/* implicit */signed char) ((11834120586401160000ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)32)))));
        arr_2 [i_0] = ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [14] [i_0]))))) ? ((~(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_1 [i_0])));
    }
}
