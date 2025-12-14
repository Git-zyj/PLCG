/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192342
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 += ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)127)) < (((/* implicit */int) arr_1 [i_0])))) ? (((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((_Bool) (_Bool)0)))));
        var_21 = min((((arr_0 [i_0] [i_0]) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)102))))))), (var_19));
        var_22 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
    }
    var_23 = ((/* implicit */signed char) (~((-(((/* implicit */int) ((((/* implicit */int) (unsigned char)129)) > (((/* implicit */int) (unsigned short)33826)))))))));
    var_24 = ((/* implicit */_Bool) var_7);
}
