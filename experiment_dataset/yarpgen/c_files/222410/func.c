/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222410
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_6 [i_1] [(unsigned short)9] = arr_1 [i_2 - 1];
                    var_12 += ((/* implicit */signed char) min((((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) arr_0 [i_1] [(unsigned short)7])))))), (min((2037164785U), (((/* implicit */unsigned int) (signed char)-114))))));
                    var_13 = ((/* implicit */unsigned short) ((((_Bool) arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 2] [(_Bool)1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))) : (((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [0U] [i_2]))) > (2006504096U)))))));
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) (!((_Bool)1)))), (max((var_10), (((/* implicit */signed char) (_Bool)1)))))))) - (var_8)));
                }
            } 
        } 
    } 
    var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) == (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (0U)))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) (signed char)-52)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-52))))))));
}
