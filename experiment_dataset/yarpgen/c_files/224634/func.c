/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224634
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
    var_20 = ((/* implicit */unsigned char) var_18);
    var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_1)), (((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_10), (var_10))))) : (var_12)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_8 [i_0] [i_0] = ((/* implicit */int) var_2);
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (arr_2 [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (31) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) : (arr_7 [i_0])))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) : (min((((/* implicit */unsigned long long int) arr_7 [i_0])), (var_9))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */long long int) arr_4 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [(signed char)7] [i_0]) : (((/* implicit */long long int) arr_4 [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])))))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (max((var_15), (((/* implicit */unsigned long long int) var_16))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (-32) : (((/* implicit */int) var_10))))), (((unsigned int) 567691731))))));
}
