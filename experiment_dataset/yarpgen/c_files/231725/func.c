/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231725
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) -6004208782250423752LL)) ? (((/* implicit */int) (!(((6004208782250423751LL) == (((/* implicit */long long int) 802009344U))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7))) : (var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (signed char)(-127 - 1)))))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned char) var_2)), (var_5)))) % (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (signed char)-122)))))))) ? (var_4) : (((/* implicit */int) (unsigned short)36980))));
    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 22; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) -8LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : ((-(var_15)))));
                var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_1] [i_1 - 4])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) > (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1 - 4])) ? (((/* implicit */unsigned long long int) 0U)) : (18446744073709551615ULL)))))) : (((/* implicit */int) (unsigned short)37010))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551602ULL)) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (-8LL) : (((/* implicit */long long int) 0U))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)198)))))));
                var_22 = ((((/* implicit */_Bool) ((15U) << (((((/* implicit */int) var_12)) + (47)))))) ? (((((/* implicit */_Bool) (unsigned char)41)) ? (arr_2 [i_1 - 2] [i_1] [i_1 - 2]) : (((/* implicit */unsigned long long int) arr_0 [i_1 - 2] [i_1 - 2])))) : (((/* implicit */unsigned long long int) ((int) var_6))));
            }
        } 
    } 
    var_23 = ((((/* implicit */long long int) ((/* implicit */int) ((-5108448467837816828LL) >= (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */int) (unsigned char)93)) : (((/* implicit */int) (signed char)25))))))))) ^ (min((9LL), (((/* implicit */long long int) (_Bool)1)))));
}
