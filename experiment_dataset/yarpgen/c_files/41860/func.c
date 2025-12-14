/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41860
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) & (max((9784644640662922445ULL), (((/* implicit */unsigned long long int) -1073392095))))))) ? (((/* implicit */unsigned long long int) var_5)) : (((((/* implicit */_Bool) max(((short)8423), ((short)-24948)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_0 [i_0 + 1] [14ULL])))) : (((unsigned long long int) (unsigned char)247))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0 + 1]);
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (+(max((((long long int) var_13)), (((/* implicit */long long int) arr_2 [i_0 - 1])))))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */short) (-(((long long int) (+(var_7))))));
        arr_8 [6ULL] = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
        arr_9 [i_1] = (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))) <= ((-(4467787165797127380ULL)))))));
    }
}
