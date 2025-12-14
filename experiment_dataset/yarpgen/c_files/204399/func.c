/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204399
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(6330673001133814787ULL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)7))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))), (1638909863447005446ULL)))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    var_21 *= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((short) var_13))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)384))) : (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (4U)))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1))))) ? ((-(var_14))) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (short)-24555)))))));
                }
            } 
        } 
    } 
}
