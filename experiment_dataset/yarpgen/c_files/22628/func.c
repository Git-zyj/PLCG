/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22628
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) 1900562424U)))) > (0U)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) min(((short)-2674), (((/* implicit */short) (_Bool)1))));
        var_16 = ((/* implicit */_Bool) min((min((var_1), (((/* implicit */unsigned long long int) arr_2 [(short)22])))), (((/* implicit */unsigned long long int) max((arr_2 [i_0]), (arr_2 [i_0]))))));
        var_17 = ((/* implicit */long long int) ((_Bool) min((var_13), (((/* implicit */short) max(((_Bool)1), (var_2)))))));
        var_18 = ((/* implicit */long long int) min(((-(((((/* implicit */int) (short)18142)) & (((/* implicit */int) var_14)))))), (719871488)));
        arr_4 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)5464)) || (((/* implicit */_Bool) arr_0 [i_0]))))), ((-(((var_1) - (var_1)))))));
    }
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)0)) || (((/* implicit */_Bool) 719871488)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((var_10) || (var_8))))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_14))));
    var_20 = ((/* implicit */int) ((_Bool) (~(((/* implicit */int) ((_Bool) -6268002727796412139LL))))));
}
