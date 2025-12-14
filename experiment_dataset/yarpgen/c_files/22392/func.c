/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22392
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
    var_13 = ((/* implicit */unsigned char) max((((((/* implicit */int) ((unsigned char) 4453654343827857853LL))) + (((((/* implicit */int) var_8)) / (((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)7)) > (((/* implicit */int) (unsigned short)0))))) : (((/* implicit */int) (_Bool)0))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (short)-31893))));
        var_15 = ((/* implicit */unsigned int) (((((_Bool)1) ? (((/* implicit */long long int) -16)) : (36028797018963967LL))) * (((/* implicit */long long int) ((/* implicit */int) ((8293592451764265679LL) < (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))))));
        var_16 = ((/* implicit */signed char) (_Bool)0);
    }
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? ((+(((/* implicit */int) ((((/* implicit */int) (signed char)-19)) <= (((/* implicit */int) (_Bool)0))))))) : (((max((var_4), (((/* implicit */int) (_Bool)1)))) + ((+(var_4)))))));
}
