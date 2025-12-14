/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216073
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
    var_19 = ((/* implicit */unsigned short) max((var_3), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)0)))))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (!(((/* implicit */_Bool) 1044094566U)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) var_15))))) ? (((var_15) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_15)))) : ((+(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((signed char) ((int) (_Bool)0))))));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (arr_2 [i_0 - 2] [i_0])))) ? ((+(((/* implicit */int) var_12)))) : ((-(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (((/* implicit */int) arr_1 [i_0 - 3] [i_1]))))))));
                var_23 &= ((/* implicit */unsigned short) ((var_5) << (((arr_2 [i_0] [i_1]) + (1913951624)))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) >= (((var_1) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23436))))))) ? (((/* implicit */int) ((unsigned char) max(((signed char)127), (var_8))))) : (var_10)));
    var_25 = ((/* implicit */signed char) var_7);
}
