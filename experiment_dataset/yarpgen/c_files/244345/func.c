/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244345
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
    var_13 = ((/* implicit */short) ((min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)19))))), (var_2))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))) - (17357)))));
    var_14 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_15 ^= ((/* implicit */signed char) max(((-(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)11)), (arr_3 [i_0] [i_0] [i_2])))))), (((/* implicit */int) ((short) arr_5 [i_1 - 2] [i_1 + 2] [i_2])))));
                    var_16 = ((/* implicit */int) (((~(((/* implicit */int) arr_1 [i_1 - 1])))) <= (((((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 2] [i_1])) | (((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 2] [i_1]))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */int) ((short) var_4))) + (2147483647))) >> (((((/* implicit */int) ((short) var_0))) - (22183))))))));
}
