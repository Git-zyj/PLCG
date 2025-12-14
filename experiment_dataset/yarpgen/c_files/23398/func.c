/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23398
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
    for (signed char i_0 = 4; i_0 < 17; i_0 += 1) 
    {
        var_10 = ((/* implicit */int) 5948017102026085034LL);
        var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) max((min((arr_0 [i_0]), (((/* implicit */unsigned long long int) 815345682U)))), (((/* implicit */unsigned long long int) var_7)))))));
    }
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)31744)) : (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_6)))))));
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) == (max((13583883178747723498ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))))));
}
