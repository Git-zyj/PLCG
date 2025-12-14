/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37912
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
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) (unsigned char)208)), (746056680250078570ULL))), (var_8)));
                arr_6 [i_0] = ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)77)) == (((/* implicit */int) var_7)))) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */_Bool) -838949834)) ? (1960488246) : (((/* implicit */int) var_7)))))))) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_12))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)202)), (min((((long long int) (unsigned char)202)), (-5451982896884963794LL)))));
                var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)202)) < (var_6)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)212))) != (549753716736ULL))))))) ? (((((/* implicit */_Bool) (signed char)-31)) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_13)), (var_2)))) : (((((/* implicit */_Bool) var_2)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) : (max((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)55)) != (-1278732427)))))));
            }
        } 
    } 
    var_19 = var_0;
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)48))) : (-5115023157910528306LL))), (((/* implicit */long long int) var_10))))) ? (((/* implicit */int) ((((unsigned int) -5451982896884963794LL)) >= (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) : (((((/* implicit */_Bool) -5451982896884963820LL)) ? (((/* implicit */int) var_13)) : (838949834)))));
    var_21 = var_0;
}
