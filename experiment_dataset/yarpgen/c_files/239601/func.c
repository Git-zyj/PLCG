/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239601
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) max((((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_1]))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)46287)), (arr_0 [10])))) ? (((/* implicit */long long int) ((((/* implicit */int) var_4)) & (((/* implicit */int) (signed char)59))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [0]))) : (arr_2 [i_0] [i_0]))))))))));
                var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) 1983298356U))));
                arr_5 [(signed char)2] |= ((/* implicit */unsigned short) ((unsigned char) (((((-(5926219421006770741LL))) + (9223372036854775807LL))) >> (((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) + (5926219421006770741LL))) - (5926219421006787389LL))))));
                arr_6 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((arr_2 [i_0] [i_0]), (((/* implicit */long long int) arr_4 [i_1]))))), (min((((11910656996254823637ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))), (((/* implicit */unsigned long long int) ((unsigned char) 5926219421006770741LL)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) var_5);
    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 2037029950127094911LL)), (min((11910656996254823637ULL), (((/* implicit */unsigned long long int) (signed char)64)))))))));
}
