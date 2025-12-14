/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204762
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
    var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */int) (signed char)-124)) ^ (((/* implicit */int) (unsigned short)42997))))))) || (((/* implicit */_Bool) 9633694724585214602ULL))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8813049349124337001ULL)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) || (((/* implicit */_Bool) arr_1 [i_0] [(signed char)8])))))))) : (min((max((8813049349124337014ULL), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) var_6))))));
                var_19 = ((/* implicit */unsigned long long int) max((((unsigned int) ((8813049349124337014ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-70)))))), (((/* implicit */unsigned int) arr_2 [i_0 + 4] [i_0] [(signed char)0]))));
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) / (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) arr_0 [i_0 + 3] [i_1])) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (min((5346063015135935079ULL), (((/* implicit */unsigned long long int) 3983455432U))))))));
            }
        } 
    } 
}
