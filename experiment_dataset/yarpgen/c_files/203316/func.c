/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203316
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_14 = ((/* implicit */int) (unsigned short)47051);
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_3 [i_0])))) ? (((((/* implicit */unsigned long long int) var_4)) + (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (unsigned short)31463)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (max((((/* implicit */unsigned int) (unsigned short)60059)), (2332139074U))))))));
        arr_4 [i_0] = ((((/* implicit */_Bool) max((20), (((/* implicit */int) var_11))))) || (((/* implicit */_Bool) max((max((arr_0 [i_0]), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))), (((/* implicit */unsigned long long int) (short)32767))))));
    }
    var_16 -= ((/* implicit */unsigned int) var_11);
}
