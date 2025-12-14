/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225847
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
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) var_12))));
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_0))));
    var_18 = ((/* implicit */unsigned short) max((724706616U), (((/* implicit */unsigned int) (short)31887))));
    var_19 = ((/* implicit */short) (-(((/* implicit */int) ((1450995432303883800ULL) >= (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))))))));
    var_20 -= ((/* implicit */int) min(((!(((/* implicit */_Bool) var_0)))), (((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), ((-9223372036854775807LL - 1LL))))) && ((!(((/* implicit */_Bool) var_4))))))));
}
