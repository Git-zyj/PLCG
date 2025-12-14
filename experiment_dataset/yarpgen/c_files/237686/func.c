/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237686
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) max((arr_5 [i_1 + 1] [i_0]), (var_3))))))) ? ((~(((/* implicit */int) (unsigned short)13729)))) : (min((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)7656)) : (((/* implicit */int) var_2))))))));
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)51806))))) ? ((+(((((/* implicit */int) var_2)) ^ (((/* implicit */int) (unsigned short)13729)))))) : ((+((-(((/* implicit */int) (unsigned short)41730))))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)60749))))) && (((/* implicit */_Bool) max((var_0), (var_3))))));
                var_12 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)31527)) && (((/* implicit */_Bool) (unsigned short)9863)))) ? (((((/* implicit */int) var_3)) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(unsigned short)9] [i_1] [i_1]))))))) : (((/* implicit */int) max((var_2), (var_2))))));
            }
        } 
    } 
    var_13 |= var_4;
}
