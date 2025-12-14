/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228942
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((((/* implicit */_Bool) max((1301926164), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-124))))))) ? (((/* implicit */int) var_1)) : (min((((/* implicit */int) ((unsigned short) 976848989))), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)124)))))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) ((4454603558187197922ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)47))))))));
            }
        } 
    } 
    var_15 = max(((unsigned char)255), (max(((unsigned char)9), ((unsigned char)221))));
    var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((max((var_13), (((/* implicit */unsigned long long int) (_Bool)1)))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (2147483647) : (2147483647)))))))));
    var_17 = ((((/* implicit */_Bool) var_13)) ? (2147483647) : ((~(min((var_9), (((/* implicit */int) var_0)))))));
}
