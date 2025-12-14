/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23848
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (arr_2 [i_0] [i_0])))), (var_16))), (((/* implicit */unsigned long long int) min((arr_2 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_0]))))));
    }
    var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (unsigned char)36))));
}
