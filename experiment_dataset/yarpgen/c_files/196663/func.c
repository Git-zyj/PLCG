/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196663
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
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_3))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) var_8);
                var_20 = ((/* implicit */long long int) (-(((/* implicit */int) ((((var_14) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)65))))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1]))))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((arr_4 [i_0] [i_1] [i_1]), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)30)))))));
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0 + 1])))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_3 [i_0]);
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) var_12);
    var_23 = ((/* implicit */_Bool) var_8);
    var_24 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)92)) & (((/* implicit */int) (signed char)-72)))) & (((/* implicit */int) var_11))))), (min((((((/* implicit */unsigned long long int) var_1)) ^ (14ULL))), (((/* implicit */unsigned long long int) var_6))))));
}
