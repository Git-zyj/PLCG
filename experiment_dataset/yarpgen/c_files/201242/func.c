/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201242
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [i_0] = max((((int) ((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1]))))), (((/* implicit */int) arr_3 [i_0])));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_0 [i_1]);
            }
        } 
    } 
    var_17 = ((/* implicit */short) var_2);
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) min((var_5), (var_9)))) ? (max((((/* implicit */int) var_8)), (var_2))) : (((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned short) var_7))))) ? (max((var_2), (((/* implicit */int) var_10)))) : (((/* implicit */int) var_9))))));
    var_19 &= ((/* implicit */short) var_3);
    var_20 = ((/* implicit */unsigned short) ((short) var_15));
}
