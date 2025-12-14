/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28856
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
    var_19 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_18))) == (5295602928175362060LL)))), (var_9)))) : (((/* implicit */int) (unsigned char)127)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        var_20 = min((((/* implicit */unsigned int) arr_1 [i_0 + 3])), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3572467766U)) && (((/* implicit */_Bool) var_16))))), (3572467768U))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_0]))))))) == ((+(((long long int) var_15))))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0 + 2]))))) ? (((int) var_8)) : ((~(((/* implicit */int) ((var_4) != (2958725659U))))))));
    }
    var_23 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_4), (var_3)))))))) ^ (var_0)));
    var_24 = ((/* implicit */short) ((3572467787U) << (((((/* implicit */int) var_15)) - (208)))));
}
