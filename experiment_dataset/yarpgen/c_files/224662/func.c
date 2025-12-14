/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224662
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
    var_20 = ((/* implicit */unsigned long long int) var_3);
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((var_1) / (((/* implicit */int) var_2)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned short) arr_0 [i_0]);
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)25287)) ? (max((arr_1 [i_1]), (((/* implicit */int) arr_4 [i_0])))) : (((((/* implicit */int) arr_4 [i_0])) + (((/* implicit */int) arr_4 [i_0])))))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((signed char) (unsigned short)25287))) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_0 [i_0])))) : ((-(1511852087))))));
                arr_6 [2] [i_1] [9U] = ((/* implicit */unsigned long long int) ((((15850433031962500531ULL) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)4404)) : (((/* implicit */int) arr_4 [i_1]))))))) < (((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), (min((-1501727124), (((/* implicit */int) (unsigned short)25287)))))))));
            }
        } 
    } 
    var_24 *= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) 2444198566U))) <= ((+(12374013742064266255ULL)))))) > ((-(((/* implicit */int) ((signed char) (_Bool)1)))))));
    var_25 *= ((/* implicit */_Bool) 15926356629094405498ULL);
}
