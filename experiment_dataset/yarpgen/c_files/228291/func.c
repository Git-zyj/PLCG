/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228291
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
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((int) var_18)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 3] [i_0 - 2])) ? (arr_2 [i_1 - 3] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_4 [i_1] [i_1])))) : ((~(((((/* implicit */_Bool) (signed char)-79)) ? (var_17) : (((/* implicit */unsigned long long int) arr_2 [6ULL] [6ULL]))))))));
                var_22 ^= min((((/* implicit */unsigned char) arr_3 [i_0 + 1] [i_1 + 1])), (((unsigned char) arr_3 [i_0 - 1] [i_1 - 1])));
            }
        } 
    } 
}
