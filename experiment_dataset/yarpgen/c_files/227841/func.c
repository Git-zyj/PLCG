/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227841
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
    var_14 = ((/* implicit */int) ((((((/* implicit */long long int) (~(((/* implicit */int) var_13))))) | (max((((/* implicit */long long int) var_1)), ((-9223372036854775807LL - 1LL)))))) != (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)32750)), (3223922492U))))));
    var_15 += ((/* implicit */unsigned char) min((((long long int) ((((/* implicit */_Bool) (short)32750)) ? (var_10) : (((/* implicit */unsigned long long int) var_0))))), (((/* implicit */long long int) ((((/* implicit */int) ((short) var_8))) | (((/* implicit */int) var_11)))))));
}
