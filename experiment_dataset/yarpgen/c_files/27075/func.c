/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27075
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
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] |= ((/* implicit */long long int) min((((arr_3 [i_1 + 1]) | (arr_3 [i_1]))), (((/* implicit */unsigned long long int) ((int) (unsigned short)1)))));
                var_11 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 3])) || (((/* implicit */_Bool) (unsigned char)189))))) * ((-(((((/* implicit */int) (unsigned short)1)) | (((/* implicit */int) arr_1 [i_0 - 2]))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)8624)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56500))) | (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
    var_13 = ((/* implicit */_Bool) (((((~(((/* implicit */int) (_Bool)1)))) | (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))))) | (((/* implicit */int) var_4))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) | (var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) + (2363440763U)))))) ? ((+(((((/* implicit */_Bool) (unsigned short)62058)) ? (((/* implicit */int) var_0)) : (var_1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_0))))))));
}
