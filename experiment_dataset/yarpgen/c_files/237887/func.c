/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237887
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) ((signed char) ((int) (unsigned short)1024)));
        var_15 = ((/* implicit */long long int) min((((unsigned int) var_8)), (((/* implicit */unsigned int) ((short) ((signed char) arr_2 [i_0]))))));
    }
    for (long long int i_1 = 1; i_1 < 13; i_1 += 1) 
    {
        var_16 = ((/* implicit */signed char) ((unsigned long long int) ((signed char) ((int) 11824651219495308081ULL))));
        arr_5 [i_1] [i_1] = ((/* implicit */_Bool) ((signed char) ((_Bool) arr_4 [i_1 + 1])));
        var_17 = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned long long int) 2779455081369225850LL)));
    }
    var_18 = ((/* implicit */unsigned int) max((((signed char) ((unsigned short) var_1))), (((signed char) var_12))));
    var_19 = ((/* implicit */unsigned int) ((short) max((((/* implicit */int) ((unsigned char) var_2))), (((int) -2779455081369225850LL)))));
}
