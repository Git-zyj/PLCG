/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202516
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
    var_20 = ((/* implicit */signed char) (short)-32765);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [(short)4] = ((/* implicit */_Bool) max((9ULL), (((/* implicit */unsigned long long int) ((unsigned int) (((_Bool)1) ? (256885932U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) var_2);
                arr_7 [i_0] [i_1] = (signed char)5;
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((short) ((((((/* implicit */int) (signed char)-2)) - (((/* implicit */int) (unsigned char)0)))) - ((+(((/* implicit */int) var_10)))))));
    var_22 = ((/* implicit */_Bool) ((((max((var_16), (((/* implicit */int) (unsigned char)0)))) < (((var_16) << (((1598646260988427793ULL) - (1598646260988427791ULL))))))) ? (min((((/* implicit */unsigned int) min(((short)8190), ((short)32764)))), (256885935U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-105)))));
}
