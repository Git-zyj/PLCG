/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214143
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
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) min((((/* implicit */int) var_0)), (((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0] [i_0 - 2])))))))));
        var_15 ^= (unsigned short)127;
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) max(((+(((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (-4852206426756054321LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))), (min((((((/* implicit */_Bool) (unsigned short)9459)) ? (17179869183LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)3))))), (((/* implicit */long long int) min((var_10), ((unsigned short)32657)))))))))));
    }
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) var_12))));
}
