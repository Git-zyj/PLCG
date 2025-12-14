/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34613
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
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0 + 1] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned int) arr_2 [i_0 + 1])), (arr_0 [i_0 + 1]))) <= (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0 - 1])))))));
        var_20 |= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned char)47)) : (((/* implicit */int) (signed char)-1))))));
        var_21 += (!(((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) var_12))))))));
        var_22 = ((/* implicit */_Bool) var_4);
        arr_4 [i_0] = ((/* implicit */short) -3074996882237666447LL);
    }
    var_23 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))));
    var_24 = ((/* implicit */_Bool) var_8);
}
