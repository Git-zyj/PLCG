/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41571
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
    var_13 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_14 = ((var_2) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_3))) * (4294967295U)))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (var_3)))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((arr_0 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((((var_0) + (9223372036854775807LL))) << (((((/* implicit */int) var_11)) - (19130))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (var_9)))) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) (unsigned short)23054)))))))));
        var_15 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)125)) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (12223983781738911422ULL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_5))))) : ((~(var_1))))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
    }
}
