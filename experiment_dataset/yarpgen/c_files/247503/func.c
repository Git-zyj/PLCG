/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247503
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
    var_20 ^= ((/* implicit */unsigned char) (unsigned short)16383);
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_1))));
    var_22 = ((/* implicit */long long int) ((min((var_10), (((/* implicit */unsigned int) max((226210043), (226210043)))))) < (((/* implicit */unsigned int) ((/* implicit */int) min(((short)9042), (((/* implicit */short) ((signed char) (signed char)0)))))))));
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (-1686106708)))) == (((((/* implicit */_Bool) ((signed char) (short)-4764))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((unsigned long long int) 226210043)))))))));
}
