/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198138
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
    var_15 = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1513312599)) ? (((/* implicit */int) var_12)) : (1513312599)))), (var_9)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_1 [i_0]))))));
        var_17 = ((((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_0])), (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (max((var_9), (((/* implicit */unsigned int) arr_1 [i_0])))));
        arr_2 [i_0] = max((((/* implicit */unsigned long long int) max((arr_0 [i_0]), (((/* implicit */unsigned int) var_14))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118))) * (((((/* implicit */_Bool) -1513312600)) ? (((/* implicit */unsigned long long int) -528508319)) : (9054159782644256903ULL))))));
    }
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) max((((3553106131U) >= (3553106128U))), (((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)155))))) <= (201764887U))))))));
    var_19 *= ((/* implicit */_Bool) (-(((/* implicit */int) var_12))));
    var_20 ^= ((/* implicit */unsigned short) ((unsigned char) 2047ULL));
}
