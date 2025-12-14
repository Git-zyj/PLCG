/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28387
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
    var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */int) ((var_15) > (((/* implicit */int) var_9))))) : (((/* implicit */int) ((_Bool) var_18)))));
    var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2035483483U)), (16611201863082791849ULL)))) ? (((/* implicit */unsigned long long int) ((var_19) ? (var_8) : (var_8)))) : (1835542210626759745ULL))) < (((/* implicit */unsigned long long int) var_8))));
    var_22 = ((/* implicit */long long int) max((var_22), (min((var_18), (((/* implicit */long long int) var_9))))));
}
