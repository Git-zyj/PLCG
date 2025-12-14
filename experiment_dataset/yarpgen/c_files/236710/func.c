/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236710
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
    var_14 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) & (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_6)))) : ((-(var_0)))))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(unsigned char)13])))))))), (min((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (unsigned short)4096))))), ((-(var_8)))))));
        var_16 += ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) min((arr_0 [(_Bool)1]), ((signed char)7)))))) & (((/* implicit */int) min((min((arr_1 [i_0]), (arr_1 [(_Bool)1]))), (arr_1 [i_0]))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)4)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 + 1])))) : (((/* implicit */int) (short)-32755))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_17 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)-25290)) ? (((/* implicit */int) (short)-32765)) : (((/* implicit */int) (signed char)-31))))));
    }
}
