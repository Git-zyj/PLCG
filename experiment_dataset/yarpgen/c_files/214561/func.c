/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214561
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
    var_15 = ((/* implicit */_Bool) var_2);
    var_16 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */int) (unsigned short)31760)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-12079)) : (((/* implicit */int) (short)-12063))))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((((var_2) + (9223372036854775807LL))) >> (((-6272351622742853976LL) + (6272351622742853986LL))))) : (((/* implicit */long long int) ((((/* implicit */int) var_8)) % (((/* implicit */int) var_6)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : ((-(var_2)))));
    var_18 = (+((~(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((arr_9 [i_2] [i_1] [i_0] [i_0]) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_9 [i_0] [(unsigned short)5] [(unsigned char)1] [i_2]))))) * ((+(3804851263864515658LL)))));
                    var_20 &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((unsigned int) arr_9 [i_2] [i_1] [6LL] [i_1])) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_8 [i_2] [i_1] [(unsigned short)2] [(unsigned short)2]), (((/* implicit */short) (_Bool)0)))))))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_2] [i_1] [(_Bool)1] [(_Bool)1])) ? (((536870912) / (((/* implicit */int) (unsigned char)84)))) : (((/* implicit */int) arr_1 [11])))))));
                }
            } 
        } 
    } 
}
