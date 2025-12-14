/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231065
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
    var_11 = var_7;
    var_12 = ((/* implicit */_Bool) 1926394963);
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54100)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)20))))) : (18446744073709551615ULL)))) && ((!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)54100)), (-1243909401))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [6ULL] = ((/* implicit */unsigned int) ((arr_0 [i_0]) | (((/* implicit */long long int) 2488501611U))));
        var_14 = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_15 = ((/* implicit */unsigned long long int) arr_1 [(signed char)7]);
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(1926394963)))) ? (((/* implicit */int) ((unsigned char) var_4))) : (1926394963)));
    }
    var_17 -= ((/* implicit */int) var_7);
}
