/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48700
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (+(min((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [16LL] [i_0])) - (((/* implicit */int) arr_1 [(unsigned char)4] [(unsigned char)4]))))), (var_8))))))));
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_0))));
        var_21 = ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (var_7)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) 0U))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)30181)) : (((/* implicit */int) (unsigned short)65535))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)30187)))))));
        var_23 = ((/* implicit */long long int) min((var_23), (var_5)));
    }
    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_10))));
}
