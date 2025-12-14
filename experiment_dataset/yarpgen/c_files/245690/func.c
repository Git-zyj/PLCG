/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245690
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
    for (signed char i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        var_18 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)3)) ? (max((var_9), (arr_0 [i_0 + 2] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_10)))))), ((+(4294967289U)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
        var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)3)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) >= (arr_0 [(unsigned short)9] [(unsigned short)9]))))))))) != (min((arr_0 [6U] [6U]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) var_11)))))))));
    }
    var_20 = ((/* implicit */unsigned short) min((var_20), (var_15)));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_15)) <= (((/* implicit */int) (unsigned char)3)))))) : (max(((+(var_12))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) == (4294967295U))))))));
}
