/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3389
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
    var_20 = ((/* implicit */unsigned short) var_2);
    var_21 = ((/* implicit */unsigned short) var_7);
    var_22 = ((/* implicit */short) (_Bool)0);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        var_23 ^= ((/* implicit */unsigned char) max((((/* implicit */long long int) (~(((/* implicit */int) var_5))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) + (-573754145)))) ? (((var_2) / (((/* implicit */long long int) 2097151)))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_0 [i_0]))))))));
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */int) (short)15379)) : (((/* implicit */int) (short)26467))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-115)), ((unsigned short)62062)))) : (max((((/* implicit */int) ((unsigned short) var_7))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_7))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        var_25 *= ((/* implicit */_Bool) var_11);
        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((long long int) var_14)))));
    }
    var_27 = ((/* implicit */long long int) var_18);
}
