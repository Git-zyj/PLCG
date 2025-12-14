/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51725
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
    var_14 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((int) var_11)) < (((/* implicit */int) max(((short)-17405), (var_13)))))))) % (((((/* implicit */_Bool) var_1)) ? (max((var_1), (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
    var_15 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-57))) & (var_5))) - (((/* implicit */unsigned long long int) ((unsigned int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    var_16 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))) + (((unsigned long long int) var_5))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_4 [(signed char)2] &= ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) (~(arr_2 [i_0])))), (((unsigned long long int) arr_3 [i_1])))), (((/* implicit */unsigned long long int) arr_0 [i_1]))));
                var_17 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1])) | (((/* implicit */int) var_10))))), (((1267927562245264870ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))))) ? (var_5) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((arr_1 [i_0]), (var_13)))), (arr_2 [i_1])))));
            }
        } 
    } 
}
