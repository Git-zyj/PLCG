/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34036
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
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) & (((/* implicit */int) arr_5 [i_0]))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)11041)) || (((/* implicit */_Bool) (unsigned char)7)))))) : (max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)65535)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [(unsigned short)4])), (var_7)))))));
                var_17 *= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) 1040187392U)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)26599)) ? (((/* implicit */int) (unsigned short)31872)) : (((/* implicit */int) (short)0))))) ? (min((((/* implicit */unsigned long long int) 422041106)), (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (unsigned short)15181);
}
