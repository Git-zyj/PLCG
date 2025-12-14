/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35882
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (short i_2 = 4; i_2 < 20; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */_Bool) ((short) ((unsigned int) 1ULL)));
                    var_18 = min((((/* implicit */int) (short)17727)), ((+(((/* implicit */int) arr_3 [i_1] [i_2 + 1] [i_2])))));
                    arr_8 [i_0] [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */_Bool) ((long long int) ((3489221240180593975LL) / (((/* implicit */long long int) ((/* implicit */int) var_3))))));
                    var_19 = ((/* implicit */int) max((max((((/* implicit */unsigned int) -391415677)), (((unsigned int) var_5)))), (((/* implicit */unsigned int) var_10))));
                    arr_9 [i_0] [3U] [14] [(_Bool)1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((var_0) ? (((((((/* implicit */_Bool) var_5)) ? (1456544547463910200ULL) : (6508839124835936202ULL))) - (((unsigned long long int) var_7)))) : (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_6)) ? (6508839124835936202ULL) : (((/* implicit */unsigned long long int) var_6)))) : (((((/* implicit */_Bool) 11937904948873615420ULL)) ? (11937904948873615409ULL) : (((/* implicit */unsigned long long int) var_9))))))));
    var_21 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (0U)))) ? (((11522697934416601079ULL) + (((/* implicit */unsigned long long int) var_9)))) : (min((6634359101042083857ULL), (((/* implicit */unsigned long long int) (short)-17734)))))));
    var_22 = ((/* implicit */short) var_11);
    var_23 = ((/* implicit */long long int) var_11);
}
