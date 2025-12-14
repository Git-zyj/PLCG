/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213332
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_16 += ((/* implicit */signed char) max((((/* implicit */int) arr_2 [(_Bool)1])), (((int) (signed char)-37))));
                    var_17 += ((/* implicit */unsigned int) (signed char)-13);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (((+(((var_15) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))))) >= (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_15)) << (((((/* implicit */int) var_7)) - (29788)))))) < (var_4))))));
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) max((4134771761840064347ULL), (((/* implicit */unsigned long long int) var_5)))))) ? ((~(((((/* implicit */int) (_Bool)1)) << (((7263666651199879567LL) - (7263666651199879551LL))))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)8759)) : (((/* implicit */int) var_2))))))));
    var_20 = ((short) max((((var_11) * (((/* implicit */unsigned long long int) 5365167545460596576LL)))), (((/* implicit */unsigned long long int) ((unsigned char) 9007199254740991ULL)))));
}
