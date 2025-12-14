/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242969
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [(unsigned char)14] = ((var_5) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0]))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) (~(var_9)));
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) (_Bool)1))), (((((/* implicit */int) arr_3 [i_0])) >> (((((/* implicit */int) var_19)) - (13052)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((long long int) (unsigned char)8))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) max(((-(11084051232000539496ULL))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_12)) : (max((((/* implicit */unsigned long long int) -107316348)), (var_5)))))));
    var_22 = ((/* implicit */unsigned short) min((var_22), (((unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_17))) ? (((((/* implicit */int) var_4)) | (((/* implicit */int) var_18)))) : ((+(((/* implicit */int) (unsigned short)34477)))))))));
}
