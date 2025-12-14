/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224050
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = min((((/* implicit */int) ((unsigned char) ((var_12) / (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))), ((+(((/* implicit */int) arr_1 [i_0 + 1])))));
                arr_7 [i_0] = min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-32763)) && (((/* implicit */_Bool) (signed char)-104))))) : ((~(((/* implicit */int) (unsigned char)209)))))), ((-((~(((/* implicit */int) arr_2 [i_0])))))));
                var_20 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned char)148)) : (((/* implicit */int) arr_2 [i_0 + 1])))) : (((((/* implicit */_Bool) var_11)) ? (-1) : (((/* implicit */int) (unsigned char)148)))))), (314021342)));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) ((((/* implicit */long long int) var_14)) < (var_9)))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) var_11))))))))));
    var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((int) var_1))) >= (var_1)));
}
