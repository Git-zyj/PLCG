/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192969
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
    var_19 = ((/* implicit */int) var_12);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) 4294967295U);
        var_20 = ((/* implicit */int) var_15);
        var_21 = min((((/* implicit */int) ((var_18) <= (var_11)))), (((((/* implicit */_Bool) var_12)) ? (arr_1 [i_0]) : (((/* implicit */int) var_1)))));
        var_22 = ((/* implicit */_Bool) (unsigned short)31515);
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) arr_0 [i_0] [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_24 = ((/* implicit */_Bool) ((var_2) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 32LL)) ? (((/* implicit */unsigned long long int) 0U)) : (2547088857628940579ULL)))) ? (3964781009U) : (330186286U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-73)))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) var_15)) : (2547088857628940579ULL)))) ? (var_16) : (((/* implicit */long long int) ((((/* implicit */_Bool) -5500341069423811761LL)) ? (var_15) : (((/* implicit */unsigned int) -40703474)))))))) ? (arr_5 [i_1]) : (((/* implicit */long long int) min((-1311518914), (((/* implicit */int) (_Bool)1)))))));
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) var_12))));
    }
    var_27 = ((/* implicit */int) min((((2489430763416267868ULL) << (((33554431LL) - (33554430LL))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -1519193601)), (((3964781009U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)26275))))))))));
    var_28 = ((/* implicit */_Bool) (((_Bool)1) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (short)26275)))));
}
