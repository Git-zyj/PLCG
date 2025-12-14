/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203513
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
    var_10 = ((/* implicit */unsigned char) min((min((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) ((long long int) var_6))))), (((/* implicit */unsigned long long int) (~((~(-8208222187688203082LL))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 7; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned int) var_0);
        arr_4 [0U] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_3)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_3 [i_0]))));
        arr_5 [i_0] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)37002), (((/* implicit */unsigned short) (unsigned char)128)))))) : (((arr_2 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) : (var_1))))));
        arr_6 [i_0] &= ((/* implicit */_Bool) var_5);
    }
}
