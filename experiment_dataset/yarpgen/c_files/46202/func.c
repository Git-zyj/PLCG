/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46202
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
    var_10 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */int) arr_2 [i_2] [i_0 - 1])) >> (((((/* implicit */int) (unsigned short)15063)) - (15035))))), ((~(((/* implicit */int) var_0))))));
                    var_11 = ((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_5 [i_2 - 1] [i_0 + 1] [(unsigned short)8]))) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2 - 2] [i_0 - 1] [(signed char)7])) || (((/* implicit */_Bool) arr_5 [i_2 - 3] [i_0 - 1] [i_2])))))));
                    var_12 |= ((/* implicit */int) ((max((((/* implicit */unsigned int) 1079130412)), ((+(arr_4 [12U] [0]))))) - (((((/* implicit */_Bool) ((var_8) - (((/* implicit */int) arr_3 [(unsigned short)22] [i_2]))))) ? (min((3939527434U), (((/* implicit */unsigned int) var_8)))) : (((((/* implicit */_Bool) var_1)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [8] [22LL])))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_7) - (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) 3939527427U)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_0)), (var_3)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) max(((short)1023), ((short)14489)))))))))));
}
