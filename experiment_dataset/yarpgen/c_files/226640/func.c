/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226640
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
    var_19 = (((((!(((/* implicit */_Bool) var_4)))) || (((/* implicit */_Bool) var_12)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) var_17)));
    var_20 = ((/* implicit */unsigned long long int) var_8);
    var_21 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (var_5)))) ? (var_5) : (max((var_5), (((/* implicit */unsigned long long int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */long long int) var_5);
                arr_5 [i_0] [i_0] &= var_9;
                arr_6 [i_0] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1 - 1])) || (((/* implicit */_Bool) var_15))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_3 [10U] [10LL]))))) ? (((/* implicit */unsigned long long int) arr_2 [i_1 + 3])) : (max((((/* implicit */unsigned long long int) var_2)), (3255341159448235382ULL)))))));
                var_22 -= ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : ((+(((/* implicit */int) (unsigned short)65535))))))));
            }
        } 
    } 
}
