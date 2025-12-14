/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223083
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) -1392173206)) : (var_10)));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)(-127 - 1))) * (((/* implicit */int) var_12))));
    var_22 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_15)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)31)) >= (((/* implicit */int) (unsigned short)62860))));
        var_23 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))), (((var_13) ? (8745881401191418697LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))));
        var_24 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)189)) | (((/* implicit */int) (signed char)-31))))) ? (max((17179869183ULL), (((/* implicit */unsigned long long int) (signed char)0)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2)))))))));
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned short)47440), (((/* implicit */unsigned short) var_17))))) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) ((((/* implicit */int) (signed char)-121)) < (((/* implicit */int) (unsigned short)3023)))))));
    }
}
