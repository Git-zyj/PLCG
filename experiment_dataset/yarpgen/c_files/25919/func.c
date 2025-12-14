/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25919
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) var_6))))) && (((/* implicit */_Bool) var_5))));
    var_13 = ((/* implicit */short) var_8);
    var_14 &= ((/* implicit */long long int) (~((~((~(var_1)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) var_8);
        var_15 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-28)), ((unsigned short)127))))));
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_16 |= ((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]);
        var_17 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) 0LL)) : (arr_3 [i_1])))));
    }
    var_18 &= ((/* implicit */_Bool) (~(((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (max((var_9), (((/* implicit */unsigned long long int) var_7))))))));
}
