/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214014
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
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_13) + (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) 1758829473U)) ? (((/* implicit */int) (_Bool)1)) : (var_13))) : (((/* implicit */int) var_8))));
        var_16 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_0)));
        var_17 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))));
    }
    for (unsigned char i_1 = 2; i_1 < 14; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((var_5) - (167954025241631164LL))))))));
        var_19 += ((((((/* implicit */_Bool) (-(var_11)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_8)) ? (2536137813U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-32759))))) > (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_8))))))))));
    }
    var_20 = ((/* implicit */unsigned char) var_8);
}
