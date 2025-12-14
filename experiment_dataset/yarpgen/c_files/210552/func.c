/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210552
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
    var_14 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) (short)-1)), (((((/* implicit */int) (unsigned char)237)) >> (((-9111059620646664701LL) + (9111059620646664714LL)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-98))) : ((-(var_13)))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((unsigned int) ((((var_6) + (9223372036854775807LL))) << (((((var_6) + (4997537232146512323LL))) - (26LL))))));
                var_16 &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_4 [i_0 - 1]))), (((/* implicit */unsigned int) ((((((/* implicit */int) var_3)) << (((var_5) - (1436481327))))) & ((-(((/* implicit */int) arr_0 [i_0])))))))));
                arr_6 [i_0] |= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (1990354130) : (((/* implicit */int) (short)-17621))))) ? (((((/* implicit */_Bool) 13835058055282163712ULL)) ? (-1902610220) : (915729649))) : (((/* implicit */int) (unsigned short)0)))))));
                var_17 ^= ((/* implicit */unsigned short) var_12);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_13);
}
