/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227055
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_6 [i_0] [17LL] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 0U)) % (5203440521067881588LL)))) ? (max((((/* implicit */long long int) (unsigned short)55813)), (var_12))) : (((/* implicit */long long int) max((7U), (((/* implicit */unsigned int) (unsigned char)178)))))))) % (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)122))))), ((~(var_14)))))));
                var_15 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((var_11) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55798)))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)35176)) : (((/* implicit */int) (unsigned short)55807)))) : (((/* implicit */int) (signed char)-123))))));
                var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)35157)) % (((/* implicit */int) (signed char)-115))));
                var_17 = ((/* implicit */signed char) var_12);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_8);
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (unsigned char)143))));
}
