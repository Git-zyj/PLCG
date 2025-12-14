/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218508
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
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (unsigned short)65534))));
    var_18 += ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) + (((4797724116663689625ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22719)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_2] [i_0])) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-3888))))))))))));
                    var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1] [i_1]))) : (var_16)))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_1 + 1])) > (((/* implicit */int) arr_2 [1LL] [i_1 - 1]))))) : (((/* implicit */int) var_15))));
                    arr_7 [i_1 + 1] [i_1 + 1] [(_Bool)1] [i_0] |= ((/* implicit */unsigned long long int) ((((long long int) (_Bool)0)) << (((/* implicit */int) max((arr_1 [i_1 + 1] [i_1 - 1]), (arr_1 [i_1 - 1] [i_1 + 1]))))));
                }
            } 
        } 
    } 
}
