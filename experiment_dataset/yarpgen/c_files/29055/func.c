/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29055
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((+(1622601439871272040LL)))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) ((_Bool) 3891347918U))), (var_13)))) : ((-((~(((/* implicit */int) var_11))))))));
    var_15 = ((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned short) (short)13948))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) ((signed char) arr_1 [i_0]));
        var_17 = ((/* implicit */unsigned char) ((unsigned int) 4294967295U));
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) ((_Bool) var_2));
        var_18 = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) max((arr_4 [i_1]), (((/* implicit */unsigned char) var_10)))))))));
    }
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (short)28462)), (4382415422281025377ULL))), (((/* implicit */unsigned long long int) var_8))))) ? (min((((/* implicit */unsigned long long int) ((3559147640U) / (((/* implicit */unsigned int) (-2147483647 - 1)))))), (min((((/* implicit */unsigned long long int) var_0)), (var_5))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((((/* implicit */int) var_3)) + (2147483647))) >> (((var_7) - (4072702857U)))))), (var_6))))));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) max((2147483647), (((/* implicit */int) ((((/* implicit */int) (short)-29294)) == (((/* implicit */int) (short)-29294)))))))) : (((long long int) min((((/* implicit */long long int) var_12)), (3426379698189789424LL))))));
}
