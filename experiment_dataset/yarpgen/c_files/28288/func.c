/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28288
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
    var_16 = ((/* implicit */unsigned char) var_11);
    var_17 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (6952783138659965812ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 879887118U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)43400))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                var_18 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (var_3))))) + (((unsigned int) var_8))))) ? (((((/* implicit */_Bool) (unsigned short)22135)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22134))) : (6U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)49152)) ? (((/* implicit */int) ((3958489051U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36561)))))) : (((/* implicit */int) arr_1 [i_0] [i_1])))))));
                var_19 += ((short) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)4)) & (((/* implicit */int) var_14)))))));
            }
        } 
    } 
}
