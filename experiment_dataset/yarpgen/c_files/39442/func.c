/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39442
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
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) (_Bool)0)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_4))));
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((signed char)11), (((/* implicit */signed char) (_Bool)1))))) ? (((((unsigned long long int) (signed char)11)) / (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [i_1])) + (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_4 [i_0 - 3] [i_0 + 1])))))))));
                var_23 |= ((/* implicit */int) (signed char)-39);
                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_1 [i_0 + 1]), (arr_1 [i_0 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [(signed char)7]))) : (15194721971081498556ULL))))));
            }
        } 
    } 
    var_25 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? ((~(((/* implicit */int) var_3)))) : (((/* implicit */int) var_18))))), (var_16)));
    var_26 ^= ((/* implicit */int) var_1);
}
