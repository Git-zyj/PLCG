/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230042
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
    for (long long int i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        arr_3 [i_0 + 1] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-99))));
        var_17 += ((/* implicit */short) ((((/* implicit */_Bool) (+(((long long int) 2604281556388853577ULL))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(2604281556388853577ULL)))))))) : (((long long int) var_3))));
        var_18 += ((/* implicit */unsigned int) (-(min((2604281556388853577ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)120)))))))));
    }
    var_19 = ((/* implicit */long long int) max(((+((-(((/* implicit */int) var_9)))))), (((/* implicit */int) min(((signed char)-110), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_1))))))))));
}
