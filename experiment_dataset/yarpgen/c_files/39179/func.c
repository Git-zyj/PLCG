/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39179
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (+(arr_0 [i_0] [i_0])));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0] [(short)16])));
    }
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (((!(((/* implicit */_Bool) var_10)))) ? (max((((/* implicit */unsigned long long int) ((_Bool) var_3))), (((var_1) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_0)) : (var_18)))))))))));
    var_22 = ((/* implicit */short) max((((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (!(var_15)))))), (((/* implicit */int) (signed char)-55))));
}
