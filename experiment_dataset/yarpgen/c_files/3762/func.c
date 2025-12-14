/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3762
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (((-(((/* implicit */int) arr_1 [10])))) * (((/* implicit */int) max((arr_1 [4]), (arr_1 [4U])))))))));
        arr_2 [i_0] = ((/* implicit */short) (unsigned short)32574);
        var_21 += ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */int) (unsigned char)154)) : (((/* implicit */int) (signed char)127)))));
    }
    var_22 = ((/* implicit */unsigned short) var_14);
    var_23 &= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) > (min((((/* implicit */unsigned long long int) (signed char)109)), (var_14)))))) : (((/* implicit */int) (signed char)41))));
    var_24 = ((((/* implicit */_Bool) var_5)) ? (var_17) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? ((-(2147483647))) : (var_0))));
}
