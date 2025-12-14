/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53180
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) (+(((((/* implicit */_Bool) (unsigned char)20)) ? (-6765322767085375556LL) : (min((((/* implicit */long long int) (_Bool)1)), (-4238926494287918604LL)))))));
        var_16 = ((/* implicit */int) (+(4238926494287918604LL)));
        var_17 = ((/* implicit */unsigned int) (~(min(((+(var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)66)) ? (4238926494287918603LL) : (((/* implicit */long long int) 0)))))))));
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((((/* implicit */_Bool) (+(arr_1 [i_0 - 2])))) || (((/* implicit */_Bool) var_1))))));
        var_19 = ((/* implicit */unsigned char) (short)-1);
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */int) (~(-4238926494287918604LL)));
        var_20 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [i_1])) || (((/* implicit */_Bool) var_15)))) ? (((/* implicit */int) (!(var_14)))) : (((int) -1437971520))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))))) | (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) -4238926494287918626LL)) : (arr_4 [i_1])))))));
    }
    var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
}
