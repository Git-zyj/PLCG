/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54285
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) max((min((arr_1 [i_0]), (arr_1 [i_0]))), (arr_1 [i_0])));
        var_16 = ((/* implicit */unsigned short) ((long long int) (short)4886));
    }
    for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_17 &= ((/* implicit */unsigned char) ((unsigned short) min(((unsigned short)44218), (((/* implicit */unsigned short) arr_0 [i_1])))));
        var_18 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)4886))))), ((-(2276055796U))));
    }
    var_19 &= ((/* implicit */unsigned int) ((var_6) == (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)98)))))));
    var_20 = ((/* implicit */unsigned short) var_2);
}
