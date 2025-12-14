/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3768
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_7 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) var_4)) ? (arr_5 [i_0]) : (max(((~(2841425100930414538ULL))), (((/* implicit */unsigned long long int) (signed char)-112)))));
                var_13 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 + 2] [i_0 + 2] [i_1]))))) != (((/* implicit */int) (signed char)88))))), (max((((((/* implicit */int) var_2)) / (((/* implicit */int) var_5)))), ((+(((/* implicit */int) var_5))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_9)) ? (6158188843573174460ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)167))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_2)), (var_1)))) ? (var_3) : (((unsigned int) -2102065094))))))))));
    var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_1)) : (max((var_3), (var_8))))) * (max((((/* implicit */unsigned int) ((short) var_3))), (var_12)))));
}
