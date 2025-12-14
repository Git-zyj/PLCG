/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205358
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
    var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 17606659458401965375ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) (_Bool)1)))))) : (max((((/* implicit */unsigned long long int) ((var_15) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)48)))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_4)))))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32745)))))) ? (((/* implicit */unsigned long long int) (+((((_Bool)1) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (var_8)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_11))))) : ((+(var_15)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (1460001746U)))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) -1)))))))) ? (((unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)38))))));
        arr_4 [i_0] = ((/* implicit */_Bool) max((max((arr_0 [i_0]), (var_9))), (max((((/* implicit */unsigned int) (_Bool)1)), (arr_0 [i_0])))));
    }
    var_21 = ((/* implicit */unsigned int) ((var_7) ? (((/* implicit */int) ((var_5) && (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (4294967286U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-124)))))))))));
    var_22 = ((/* implicit */unsigned char) ((var_0) < (((/* implicit */unsigned int) ((((((/* implicit */int) var_7)) << (((2295347214U) - (2295347203U))))) & (((((/* implicit */_Bool) var_15)) ? (var_17) : (((/* implicit */int) (_Bool)1)))))))));
}
