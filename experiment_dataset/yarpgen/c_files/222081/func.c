/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222081
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
    var_16 = ((/* implicit */unsigned char) min((((/* implicit */int) ((3439822921989263098LL) >= (((/* implicit */long long int) 50602162U))))), ((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-100))) >= (4244365134U))))))));
    var_17 = ((/* implicit */short) ((((long long int) var_13)) & (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)34)) ? (-3439822921989263098LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) + (((/* implicit */long long int) (~(((((/* implicit */_Bool) 3439822921989263098LL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))))))));
        var_18 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)61445))) - ((-(-5567297009100594086LL))));
        var_19 = ((((arr_0 [i_0 + 1] [i_0 - 1]) != (((/* implicit */long long int) 2147483647)))) ? (((((/* implicit */_Bool) 3803645909U)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))) : (min((arr_0 [i_0 - 1] [i_0 + 1]), (((/* implicit */long long int) arr_3 [i_0] [i_0])))));
        arr_5 [i_0] = ((/* implicit */short) arr_3 [i_0] [i_0]);
    }
    var_20 = ((/* implicit */signed char) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)254)))))))));
}
