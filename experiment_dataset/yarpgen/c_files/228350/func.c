/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228350
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
    var_15 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_1)), ((unsigned short)45285)))) ? (((/* implicit */int) (signed char)-59)) : (((/* implicit */int) max((((/* implicit */signed char) var_5)), (var_12))))))), (((max((5066986316541702158ULL), (((/* implicit */unsigned long long int) (signed char)40)))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (var_1))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (11293177734022897476ULL))) * (((/* implicit */unsigned long long int) (~(arr_0 [i_0] [i_0])))))), ((-(max((11293177734022897476ULL), (11293177734022897497ULL)))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((var_5) && (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) max((var_0), (((/* implicit */short) var_9)))))))) < (min((18446744073709551597ULL), (((/* implicit */unsigned long long int) (+(12278159))))))));
        arr_4 [i_0] = ((/* implicit */long long int) var_3);
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_17 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_9)), (var_7)))) | (min((11293177734022897476ULL), (11711446205256512889ULL)))));
        var_18 = ((/* implicit */signed char) min((-7192583277944280257LL), (((/* implicit */long long int) ((((/* implicit */_Bool) max(((short)-18683), (((/* implicit */short) var_9))))) && (((/* implicit */_Bool) var_6)))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775795LL)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) 2131019548)), (7153566339686654118ULL)))))));
    }
}
