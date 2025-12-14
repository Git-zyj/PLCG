/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43877
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
    var_16 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */int) max((var_14), (((/* implicit */unsigned short) var_5))))) : (((((/* implicit */int) var_5)) * (((/* implicit */int) var_6)))))) + (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6))))))))));
    var_17 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_14))))) ? (((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_7)))) : (((/* implicit */int) var_0))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_18 &= ((/* implicit */unsigned short) max(((-(((((/* implicit */_Bool) 2854458109U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (12348752778045412282ULL))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_0 - 1])) != (((/* implicit */int) (_Bool)1)))) ? ((~(((/* implicit */int) arr_0 [i_0 - 1])))) : (((/* implicit */int) var_13)))))));
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_1 [i_0] [i_0]))));
        var_20 += ((/* implicit */short) var_9);
        arr_2 [i_0] = ((/* implicit */unsigned char) var_12);
    }
    var_21 ^= max((var_14), (((unsigned short) 12348752778045412282ULL)));
}
