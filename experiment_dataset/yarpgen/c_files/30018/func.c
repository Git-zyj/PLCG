/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30018
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
    var_18 = ((/* implicit */unsigned char) min((((/* implicit */int) ((signed char) ((((/* implicit */int) var_4)) << (((((((/* implicit */int) var_6)) + (11229))) - (7))))))), (min((((((/* implicit */int) var_4)) | (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (var_15))))))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) min((var_13), (((/* implicit */unsigned char) (_Bool)1)))))) ? (((unsigned long long int) ((((/* implicit */_Bool) (signed char)14)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((5509369669070645104LL) / (((/* implicit */long long int) ((/* implicit */int) var_15))))) <= (((/* implicit */long long int) ((/* implicit */int) ((-2133799620499310615LL) <= (((/* implicit */long long int) ((/* implicit */int) var_6)))))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_20 ^= ((/* implicit */unsigned short) min((min((5509369669070645104LL), (((/* implicit */long long int) (_Bool)1)))), ((((!((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)26)), (arr_2 [i_1]))))) : ((-(467197922260607324LL)))))));
                var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) <= (9016304678745390549LL))))));
            }
        } 
    } 
    var_22 = var_15;
}
