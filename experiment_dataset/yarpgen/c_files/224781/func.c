/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224781
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
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-91)) ? (((((/* implicit */_Bool) 4714511944140268801ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32768))) < (13732232129569282818ULL))))) : (var_2))) : (((/* implicit */unsigned long long int) min((max((2894918178915636132LL), (((/* implicit */long long int) 16383)))), (((/* implicit */long long int) (short)-30398)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3164)) ? (-2886963759448171687LL) : (((/* implicit */long long int) -275671541))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0] [i_0 - 1])))) : ((+(((/* implicit */int) arr_1 [i_0] [i_0 + 2]))))));
        var_19 = ((/* implicit */short) (~(((/* implicit */int) ((arr_2 [i_0]) <= (((/* implicit */long long int) ((int) var_10))))))));
        arr_4 [i_0 + 1] [(unsigned char)19] = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_2 [i_0 + 1])))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_0 + 1])) & (954520059)))) : (var_6)))) : (((6467461016119011102ULL) + (13732232129569282818ULL)))));
    }
}
