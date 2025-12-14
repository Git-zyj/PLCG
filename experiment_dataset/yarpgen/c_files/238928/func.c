/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238928
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
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)78)), (var_4)))) && (((/* implicit */_Bool) (-(((/* implicit */int) var_9)))))))), (((var_2) >> (((((/* implicit */int) var_9)) - (17139))))))))));
    var_16 = var_6;
    var_17 = (~(((((var_2) >= (var_2))) ? ((+(5240058470660490282ULL))) : (((/* implicit */unsigned long long int) ((int) var_9))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_0])) / ((-(((/* implicit */int) (short)-31174))))));
        arr_3 [22LL] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-11874))));
    }
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((max((((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */int) (signed char)-28))))))) ^ (max((((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (var_8)))))));
}
