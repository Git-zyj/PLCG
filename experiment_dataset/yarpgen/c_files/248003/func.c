/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248003
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
    for (long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        var_12 = ((/* implicit */signed char) (+(((/* implicit */int) (((+(((/* implicit */int) (signed char)127)))) < (min((((/* implicit */int) arr_1 [i_0] [i_0])), (var_1))))))));
        var_13 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
        var_14 *= ((/* implicit */signed char) (!(((((/* implicit */_Bool) (unsigned char)3)) && (((/* implicit */_Bool) 3549684906U))))));
    }
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */int) var_8)) <= (((/* implicit */int) (signed char)13)))))));
    var_16 = ((/* implicit */int) var_0);
    var_17 = ((/* implicit */int) min((6805168194788050999ULL), (((/* implicit */unsigned long long int) 2616969757U))));
    var_18 += var_0;
}
