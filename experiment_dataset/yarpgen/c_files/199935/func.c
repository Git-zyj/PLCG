/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199935
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
    var_14 ^= ((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) ((unsigned char) var_0))), ((+(var_12)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) ((_Bool) arr_5 [i_1])))))));
                    arr_6 [i_0] = ((((((/* implicit */_Bool) max((778989675U), (3515977621U)))) ? (67108863U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 9617886498285142710ULL)) ? (((/* implicit */int) (short)-6946)) : (((/* implicit */int) var_9))))))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))));
                    var_16 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_2 + 1] [i_2 - 1]))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_1 [i_0] [i_1])), ((unsigned char)192)))) ? (((7545436304524734053ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) 484641781585598760ULL)) ? (((/* implicit */unsigned long long int) 2656503211U)) : (arr_2 [i_0] [i_1] [i_2]))))) : (min((17949723659790529624ULL), (((/* implicit */unsigned long long int) arr_3 [i_1]))))));
                    var_17 = arr_2 [i_2 - 1] [i_2 - 1] [i_2 + 1];
                    arr_7 [(_Bool)0] &= (((-(778989672U))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2 - 1] [i_2 + 1] [i_2]))));
                }
            } 
        } 
    } 
}
