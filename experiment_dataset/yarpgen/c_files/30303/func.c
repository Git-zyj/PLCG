/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30303
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
    for (short i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) ((((/* implicit */_Bool) (~((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_5 [i_0] [i_1 - 1] [i_1 - 1])))))) || (((/* implicit */_Bool) arr_1 [i_1 - 1])))))));
                var_11 = ((/* implicit */short) ((max((((long long int) arr_4 [(signed char)3] [12U] [(signed char)3])), (((/* implicit */long long int) ((arr_1 [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                var_12 = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */long long int) var_6)) : (9223372036854775807LL))))), (min((min((-6589836245871320589LL), (-9223372036854775807LL))), (9223372036854775806LL)))));
            }
        } 
    } 
    var_13 = (~(max((((((/* implicit */long long int) 11U)) & (var_4))), (((var_4) | (var_8))))));
    var_14 = ((/* implicit */unsigned short) (~(((var_4) % (((/* implicit */long long int) ((int) (signed char)3)))))));
    var_15 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) >= (((max((9223372036854775807LL), (((/* implicit */long long int) var_7)))) / (((/* implicit */long long int) min((((/* implicit */int) var_1)), (var_3))))))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)52285)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) + (((long long int) 9223372036854775794LL))))));
}
