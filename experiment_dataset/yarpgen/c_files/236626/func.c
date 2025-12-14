/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236626
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((unsigned short) (unsigned short)23975)), (min((((/* implicit */unsigned short) (signed char)-101)), ((unsigned short)23981))))))) + (max((((/* implicit */unsigned long long int) var_3)), (((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((var_1), (((/* implicit */short) arr_2 [i_0]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)23997)))) : (((/* implicit */int) var_4)))) - (((/* implicit */int) arr_0 [i_0]))));
        var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) >> (((/* implicit */int) ((var_8) >= (arr_1 [i_0]))))))) + (((max((((/* implicit */unsigned long long int) (unsigned short)41552)), (var_5))) * (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_2 [i_0])), (var_9))))))));
        var_16 = ((/* implicit */_Bool) 1788705445);
    }
}
