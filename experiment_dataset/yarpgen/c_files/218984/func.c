/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218984
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
    var_17 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) 4294967290U)) & (5749545045839168631ULL)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))) : (min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)26574)) - (((/* implicit */int) var_3))))), (max((((/* implicit */unsigned int) (unsigned short)32767)), (var_9)))))));
    var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-3710))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */short) max((((/* implicit */unsigned int) var_7)), ((~(min((((/* implicit */unsigned int) (_Bool)1)), (var_14)))))));
                arr_6 [i_0] = max((((((/* implicit */_Bool) ((short) (unsigned char)104))) ? (((/* implicit */int) ((short) var_6))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))))), (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_0])) : (var_0))), (((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))))));
            }
        } 
    } 
}
