/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224395
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) min(((short)3477), ((short)7936)))), (var_17)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-7922)) + (((/* implicit */int) (short)-1))))) ? (((/* implicit */int) (short)-397)) : (((/* implicit */int) (_Bool)0))))) : (((unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (min((min((7306063558197184640ULL), (((/* implicit */unsigned long long int) (unsigned short)7656)))), (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)21)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */short) var_7);
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_11))));
                var_22 = ((/* implicit */short) ((3161229739408877220ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
            }
        } 
    } 
}
