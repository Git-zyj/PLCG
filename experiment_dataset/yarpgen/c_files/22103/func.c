/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22103
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_2))) ? (((((/* implicit */_Bool) (short)-16492)) ? (136266294U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)51))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_3))))))))) ? (((/* implicit */int) ((short) ((unsigned int) var_7)))) : (((/* implicit */int) var_6))));
    var_16 += ((((/* implicit */unsigned int) ((((((/* implicit */int) var_10)) >> (((((/* implicit */int) var_6)) + (12213))))) - (((/* implicit */int) ((((/* implicit */_Bool) 1271463149U)) && (((/* implicit */_Bool) 207435463U)))))))) * (((((/* implicit */_Bool) (+(var_14)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) != (var_5))))) : ((-(1935197924U))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */short) ((((((((/* implicit */int) arr_2 [i_0] [i_1])) % (((/* implicit */int) arr_0 [(short)8])))) - (((/* implicit */int) arr_1 [i_1])))) % ((+((-(((/* implicit */int) arr_3 [i_1]))))))));
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : (((/* implicit */int) arr_3 [21U]))))) ? (((/* implicit */int) arr_3 [i_1])) : ((~(((/* implicit */int) arr_2 [i_0] [i_0])))))) ^ (((/* implicit */int) arr_3 [i_1])))))));
                arr_7 [i_0] = ((/* implicit */short) arr_2 [i_0 - 3] [i_0]);
            }
        } 
    } 
}
