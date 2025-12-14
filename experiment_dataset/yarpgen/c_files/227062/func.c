/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227062
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
    var_19 += max((max((((((/* implicit */_Bool) var_3)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)153)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-26171))))))), (((/* implicit */unsigned int) var_8)));
    var_20 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((var_16) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? ((+(((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))))));
    var_21 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) (short)159)), (max((var_3), (((/* implicit */unsigned int) var_9)))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_15)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */long long int) (+(((/* implicit */int) (short)26178))));
                    var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_17) : (((/* implicit */int) (unsigned short)17))))) ? (max((arr_0 [3]), (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)71)))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [(signed char)10] [i_1 - 3] [i_2]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (3669917345U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) var_17)));
                }
            } 
        } 
    } 
}
