/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221057
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
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((long long int) var_9)))));
    var_19 += ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)255)), (873801397U)))) && (((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_0)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                var_20 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1] [(unsigned char)10] [i_1 + 1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), (var_10))))) - (arr_5 [i_1 + 3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_4 [i_0] [14LL] [(unsigned short)8])), (arr_0 [i_1]))))))))));
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) -2047479677)) ? (2311704240U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))));
            }
        } 
    } 
}
