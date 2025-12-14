/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234970
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
    var_10 = (~(((((/* implicit */_Bool) (~(var_7)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)16383)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) max(((unsigned char)232), (var_1)))))));
    var_11 += ((/* implicit */unsigned int) max((((((/* implicit */int) (unsigned short)49157)) > (((/* implicit */int) (unsigned char)202)))), (((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (1988301422U) : (254U))))))));
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((3596174609U) * ((+(699426641U))))) <= (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)56))))))))));
}
