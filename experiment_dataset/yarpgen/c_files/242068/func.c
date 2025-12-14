/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242068
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
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_0])) : (((/* implicit */int) var_3)))), (((/* implicit */int) arr_2 [i_0 - 1] [i_1 - 1])))))));
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((18446744073709551615ULL), (15723900656146803822ULL))), (((/* implicit */unsigned long long int) arr_0 [i_0 - 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)2586))))) ? (min((1ULL), (((/* implicit */unsigned long long int) (unsigned short)2586)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))))));
            }
        } 
    } 
    var_20 = ((2147483647) / (((/* implicit */int) (_Bool)1)));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13)))) & (((/* implicit */int) (unsigned short)62949))))) ? (((/* implicit */unsigned long long int) var_5)) : (min((((/* implicit */unsigned long long int) ((int) (unsigned short)2586))), (max((((/* implicit */unsigned long long int) var_4)), (var_11)))))));
}
