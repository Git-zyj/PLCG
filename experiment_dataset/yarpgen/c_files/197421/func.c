/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197421
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
    var_19 &= ((/* implicit */_Bool) ((signed char) min((((/* implicit */long long int) var_13)), (((((/* implicit */_Bool) 1381124268251191424LL)) ? (-1381124268251191424LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_20 *= ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) 3ULL))))))));
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (~(min((((1640637637U) & (((/* implicit */unsigned int) -194883172)))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))))))))));
    }
    var_22 &= ((/* implicit */_Bool) var_11);
    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551600ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)187)))))));
}
