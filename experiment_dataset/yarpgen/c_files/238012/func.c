/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238012
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
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) min(((-(((/* implicit */int) max((((/* implicit */short) var_15)), ((short)32767)))))), (((/* implicit */int) var_13)))))));
    var_20 = ((/* implicit */signed char) (!(((((/* implicit */int) ((signed char) var_0))) < (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)(-32767 - 1)))))))));
    var_21 = ((/* implicit */short) min((((/* implicit */int) var_1)), (min((((/* implicit */int) var_9)), (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_15))))))));
    var_22 = ((/* implicit */signed char) max((((((((/* implicit */int) (short)(-32767 - 1))) >= (((/* implicit */int) (short)32767)))) ? (((/* implicit */int) min((var_6), ((short)32767)))) : (((/* implicit */int) min((var_6), (((/* implicit */short) (_Bool)1))))))), (((((/* implicit */int) var_12)) / (((/* implicit */int) min((((/* implicit */short) var_2)), (var_6))))))));
}
