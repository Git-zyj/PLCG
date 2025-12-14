/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231625
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
    var_11 = ((/* implicit */short) var_3);
    var_12 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((var_3) ^ (var_10)))) ? (((/* implicit */int) min(((short)-16384), (var_8)))) : ((~(((/* implicit */int) var_2))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-10))) : (17419616046294112591ULL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_1]))))) : (((((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)15)), (var_3)))) & (max((7189424416459835184ULL), (((/* implicit */unsigned long long int) (signed char)-18))))))));
                    arr_6 [(short)6] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_2 [13] [i_1 + 1] [i_1])) ? (1628431548474539815ULL) : (((/* implicit */unsigned long long int) arr_3 [(_Bool)1])))))) ? (((var_9) ? (((1628431548474539817ULL) ^ (16818312525235011801ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)-104), (arr_2 [i_2] [i_1 + 1] [i_1 + 1]))))))) : (max((5699384397842161582ULL), (((/* implicit */unsigned long long int) ((_Bool) (short)-16384)))))));
                    var_14 = ((/* implicit */signed char) (-((-(((/* implicit */int) var_5))))));
                }
            } 
        } 
    } 
}
