/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33000
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_12))))) ? (((/* implicit */int) ((unsigned char) var_17))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_4)), (var_9))))) == (max((var_1), (var_17))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))), ((unsigned short)0))))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (-(((unsigned long long int) (_Bool)0))));
                var_19 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1]))) : (var_16)))) ? (((/* implicit */unsigned long long int) (+(var_6)))) : (18446744073709551600ULL))), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])));
                var_20 = ((/* implicit */unsigned char) ((var_16) | (max((((((/* implicit */_Bool) 12199984699613171282ULL)) ? (1198688622U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)32))))), (((unsigned int) var_6))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) min((((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) % (138648586U))) * (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) ((((var_7) & (((/* implicit */long long int) ((/* implicit */int) var_0))))) < (((/* implicit */long long int) (+(var_13)))))))));
    var_22 = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (var_12)))) <= (((/* implicit */int) ((_Bool) (_Bool)1))))));
}
