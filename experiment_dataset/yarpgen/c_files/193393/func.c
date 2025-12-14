/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193393
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
    var_14 = ((/* implicit */unsigned int) ((((((2340367847U) != (3712313430U))) ? (max((((/* implicit */unsigned int) (_Bool)1)), (var_7))) : (max((var_11), (582653838U))))) == (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0 - 1] |= ((((/* implicit */unsigned int) ((arr_2 [i_0 + 2] [i_1 - 2]) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (signed char)15))))) - (max((((((/* implicit */_Bool) (signed char)-15)) ? (1003823350U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 1] [i_0]))))), (((/* implicit */unsigned int) (_Bool)1)))));
                arr_6 [i_1] [i_1] [(_Bool)1] = ((/* implicit */_Bool) max((max((arr_0 [i_1] [i_0]), (max((((/* implicit */unsigned int) (_Bool)1)), (888348599U))))), (max((582653865U), (arr_3 [i_0 + 2])))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)14))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) (_Bool)1)), (var_5))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0)))))))) ? (((3897460736U) + (19U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
}
