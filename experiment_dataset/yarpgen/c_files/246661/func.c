/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246661
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */int) ((signed char) max((((/* implicit */unsigned short) (signed char)-48)), ((unsigned short)24078))))) - (((((/* implicit */int) (signed char)41)) / (((/* implicit */int) var_15)))))))));
                var_18 -= ((/* implicit */unsigned short) max((((((/* implicit */int) var_15)) - (((/* implicit */int) arr_5 [i_0])))), (((((/* implicit */int) var_8)) - (((/* implicit */int) arr_0 [i_0] [i_1]))))));
            }
        } 
    } 
    var_19 = var_12;
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((unsigned short) (unsigned short)54267)))));
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) max((max(((unsigned short)54267), (((/* implicit */unsigned short) (signed char)63)))), (((/* implicit */unsigned short) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_8)))))))) ? (((/* implicit */int) ((signed char) max(((signed char)41), (var_10))))) : (((((/* implicit */int) ((signed char) var_7))) | (((/* implicit */int) max((var_3), ((unsigned short)11269)))))))))));
}
