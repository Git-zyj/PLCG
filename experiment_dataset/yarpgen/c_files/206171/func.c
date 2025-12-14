/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206171
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
    var_18 |= var_17;
    var_19 = ((/* implicit */_Bool) min((var_19), ((!(((/* implicit */_Bool) var_4))))));
    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((-8001999149282600020LL) + (9223372036854775807LL))) << (((((-4263539448550817418LL) + (4263539448550817467LL))) - (48LL)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_1))))) : (((long long int) (unsigned short)20601)))))));
    var_21 = ((/* implicit */short) ((_Bool) var_13));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)101)) || (((/* implicit */_Bool) min((-4263539448550817418LL), (((/* implicit */long long int) (_Bool)1))))))))));
        var_22 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (_Bool)1)), (((max((arr_0 [i_0]), (arr_0 [i_0 + 1]))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) arr_1 [i_0])))) + (((/* implicit */int) min((((/* implicit */signed char) arr_1 [i_0])), (var_14))))));
    }
    for (unsigned int i_1 = 1; i_1 < 12; i_1 += 1) /* same iter space */
    {
        arr_7 [(_Bool)1] |= ((/* implicit */unsigned int) max(((-(arr_5 [(unsigned short)0] [i_1 - 1]))), (((/* implicit */unsigned long long int) max(((+(4263539448550817417LL))), (((/* implicit */long long int) arr_1 [12U])))))));
        var_23 |= ((/* implicit */unsigned long long int) 7553347477136200505LL);
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) arr_4 [(_Bool)1]))));
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) max((((/* implicit */long long int) (signed char)0)), (4263539448550817409LL))))));
        var_26 = arr_6 [i_1];
    }
}
