/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237019
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
    var_15 = ((/* implicit */unsigned short) ((int) ((unsigned long long int) min(((-2147483647 - 1)), (var_4)))));
    var_16 += var_5;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((unsigned long long int) (_Bool)1))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */int) (short)32767)) + (((/* implicit */int) var_2)))))) : (((int) var_1))));
        arr_3 [i_0] = ((/* implicit */short) ((max((var_1), (((/* implicit */unsigned long long int) var_13)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
        arr_4 [i_0] = min((var_2), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0))))) && (((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (var_4))))))));
        arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)3072)) ? (((((/* implicit */_Bool) -118663695)) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) / (var_14)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1)))))))))));
    }
}
