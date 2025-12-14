/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236035
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((unsigned long long int) var_8)), (((/* implicit */unsigned long long int) ((int) var_0)))))) ? (16383U) : (((/* implicit */unsigned int) var_5))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_21 -= ((/* implicit */unsigned long long int) (~(min((min((((/* implicit */int) var_15)), (arr_1 [i_0]))), (((((/* implicit */_Bool) -983005778)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_16))))))));
        var_22 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)14)) ? (arr_2 [i_0]) : (arr_1 [i_0])))), ((~(arr_0 [i_0]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_0 [i_0]))))));
    }
}
