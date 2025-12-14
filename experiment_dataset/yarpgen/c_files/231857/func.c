/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231857
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
    var_20 = ((/* implicit */int) min((((/* implicit */unsigned int) 180930472)), (298054478U)));
    var_21 = (_Bool)1;
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (var_17)))) ? ((~(((11574466119319694473ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)43))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (var_9))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) max((18446744073709551615ULL), (0ULL)))))) ? (0U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? ((((_Bool)0) ? (((/* implicit */int) (unsigned short)52507)) : (((/* implicit */int) (unsigned short)34967)))) : (((/* implicit */int) ((1152106664885531703ULL) == (18446744073709551602ULL)))))))));
                var_23 = ((/* implicit */unsigned int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)52519)))))))), (max((((/* implicit */signed char) (!(((/* implicit */_Bool) 2708287705U))))), (((signed char) 7466516854134766206ULL))))));
            }
        } 
    } 
}
