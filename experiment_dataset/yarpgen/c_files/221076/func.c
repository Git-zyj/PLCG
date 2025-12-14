/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221076
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_11 = 1264499235;
                var_12 = arr_1 [i_1];
                var_13 &= ((/* implicit */int) (!(((/* implicit */_Bool) ((var_5) - (((((/* implicit */_Bool) 1264499235)) ? (var_6) : (var_0))))))));
                var_14 = ((/* implicit */int) max((var_14), (((((/* implicit */_Bool) (+(var_5)))) ? (arr_3 [6] [6]) : (((((int) var_7)) / (arr_5 [i_0] [i_0])))))));
            }
        } 
    } 
    var_15 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_4) : (var_0)))) ? (((((/* implicit */_Bool) var_1)) ? (-1264499237) : (var_6))) : (min((-794508213), (-1264499235)))))) ? (var_10) : (((((var_2) + (2147483647))) << (((((((/* implicit */_Bool) var_8)) ? (var_4) : (var_8))) - (933437643))))));
}
