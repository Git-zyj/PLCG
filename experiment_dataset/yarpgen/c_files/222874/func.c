/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222874
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (signed char)-49)) : (((/* implicit */int) min((((/* implicit */short) (unsigned char)255)), ((short)16778))))));
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (unsigned char)3))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [18LL] = ((((/* implicit */_Bool) max((((/* implicit */long long int) ((9149071702349550744ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))), (4646545990733341009LL)))) ? (((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)-14981)), (536870911LL)))));
        arr_3 [i_0] = ((/* implicit */signed char) ((short) (+(((/* implicit */int) ((unsigned char) var_2))))));
    }
}
