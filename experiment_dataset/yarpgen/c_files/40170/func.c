/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40170
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
    var_10 = var_4;
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_11 = ((((/* implicit */_Bool) (~(4294967295U)))) ? (((unsigned int) (-(var_0)))) : (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_3)) ? (var_4) : (1093922058U))) : (var_4))));
                    var_12 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(1485691994U))))));
                    var_13 = (((+(((unsigned int) 1485692006U)))) >> (((min((var_7), (((((/* implicit */_Bool) var_1)) ? (var_1) : (var_8))))) - (988824286U))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) max((var_14), ((-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (2069367685U) : (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (2809275289U)))))));
    var_15 = ((1485691994U) - (((((/* implicit */_Bool) (-(2809275289U)))) ? (310455223U) : (1882557018U))));
}
