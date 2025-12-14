/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207727
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
    var_16 ^= ((/* implicit */unsigned short) var_5);
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (unsigned char)38))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)242))))) > (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)242)) - (((/* implicit */int) var_15))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)0)), ((unsigned short)14796))))) : (max((var_5), (((/* implicit */long long int) (signed char)63))))))));
}
