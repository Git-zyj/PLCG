/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25719
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
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned int) (-(min((((((/* implicit */int) (_Bool)1)) - (134217728))), (-134217736)))));
        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) -134217736)) ? (var_9) : (((/* implicit */int) arr_1 [i_0] [i_0])))) / (((/* implicit */int) arr_1 [i_0 - 1] [i_0])))))))));
    }
    var_12 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (var_9)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_3)) % (((/* implicit */int) (unsigned char)255))))))))));
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((((/* implicit */int) (unsigned char)81)) & (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5))))) ? (max((var_2), (((/* implicit */long long int) 2147483647)))) : (((/* implicit */long long int) max((-2084129937), (((/* implicit */int) (_Bool)0)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (max((var_4), (((/* implicit */int) (_Bool)1)))))))));
}
