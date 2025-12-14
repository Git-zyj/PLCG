/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240024
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
    var_18 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (var_15)));
    var_19 &= ((/* implicit */short) ((long long int) var_13));
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) max((((((/* implicit */int) ((var_9) < (((/* implicit */long long int) ((/* implicit */int) var_0)))))) == (((/* implicit */int) ((short) var_6))))), (((((/* implicit */unsigned int) (~(((/* implicit */int) (short)32767))))) <= (var_10))))))));
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_3))));
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((((/* implicit */int) min((((/* implicit */short) var_0)), ((short)32767)))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))) ? (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) (+(var_12)))) ? (var_12) : (min((var_13), (((/* implicit */unsigned int) (short)-32764)))))))))));
}
