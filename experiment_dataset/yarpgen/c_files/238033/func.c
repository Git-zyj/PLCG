/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238033
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
    var_17 = ((/* implicit */short) var_11);
    var_18 += ((/* implicit */unsigned int) max((((/* implicit */int) var_6)), ((+(-1775735949)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))))));
        var_20 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_1 [(short)14] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_3)))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_13)))))));
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_21 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) max((var_14), (((var_8) >= (((/* implicit */long long int) -11))))))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9119)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (var_0) : (((/* implicit */int) (!(arr_6 [i_1]))))));
    }
}
