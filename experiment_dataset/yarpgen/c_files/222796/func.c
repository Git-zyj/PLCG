/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222796
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
    var_11 = ((/* implicit */long long int) var_8);
    var_12 |= ((/* implicit */long long int) ((_Bool) min((((((/* implicit */int) var_2)) + (((/* implicit */int) var_0)))), (((/* implicit */int) max((var_8), (var_8)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned short) min((arr_0 [i_1] [i_0]), (((/* implicit */long long int) (((!(arr_3 [(unsigned short)7] [i_1]))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)116)))) : (((((/* implicit */int) var_0)) - (((/* implicit */int) arr_1 [i_1])))))))));
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) min((arr_3 [i_1] [i_1]), (arr_3 [i_0] [i_0]))))) ? (((/* implicit */int) min((((_Bool) var_1)), ((!(((/* implicit */_Bool) 0ULL))))))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (min((arr_1 [i_0]), (arr_1 [i_1]))))))));
                arr_4 [i_0] [(unsigned char)9] [i_1] = ((/* implicit */unsigned int) ((arr_0 [1LL] [i_1]) / ((+(arr_0 [i_0] [i_1])))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) var_9)), (var_8))))) == (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_1))))))));
    var_16 &= ((/* implicit */_Bool) var_3);
}
