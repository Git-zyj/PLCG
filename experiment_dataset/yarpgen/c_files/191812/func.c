/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191812
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
    for (int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) (+(13967325617528467384ULL)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50804))) : (12457876198616300866ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1])) - (((/* implicit */int) arr_2 [i_1]))))))))));
                var_17 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(3968078878U)))))))));
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((var_15) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))))) ? (((((/* implicit */_Bool) var_14)) ? (19ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [4]))))) & (((/* implicit */unsigned long long int) min((var_4), (((((/* implicit */int) (short)21478)) >> (((((/* implicit */int) var_5)) - (7884)))))))))))));
            }
        } 
    } 
    var_19 |= ((/* implicit */unsigned int) (short)-21509);
    var_20 = ((/* implicit */short) (((((-(((/* implicit */int) (short)-21478)))) != (((/* implicit */int) var_7)))) && (((/* implicit */_Bool) ((unsigned int) max((var_5), ((short)21495)))))));
    var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)21478))));
}
