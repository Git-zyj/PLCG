/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45457
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
    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_15) | (var_10)))) ? (var_12) : (((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 315520836U))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        var_18 = ((((/* implicit */_Bool) ((signed char) var_5))) ? (arr_0 [(signed char)18]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-36))) ^ (3979446461U)))) && ((!(((/* implicit */_Bool) var_3)))))))));
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_0 [i_0 - 3])))) ? (((/* implicit */int) ((signed char) arr_0 [i_0 - 2]))) : (((/* implicit */int) var_4)))))));
    }
}
