/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229871
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((long long int) arr_0 [i_0]))) ? (min((((/* implicit */long long int) arr_2 [i_1])), (arr_0 [i_1 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_1 [i_0]), (arr_2 [i_0]))))))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 1] [i_0])) && (((/* implicit */_Bool) arr_3 [i_1] [i_1 - 1] [i_0]))))))));
                var_11 -= ((/* implicit */signed char) ((short) ((int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [0U]))) / (arr_0 [i_1])))));
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned long long int) var_9)))))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)12451))) % (3181668058U)))));
    var_13 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_4)))) + (var_0))) == (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_8))))), (var_4))))));
    var_14 = ((/* implicit */short) ((unsigned long long int) ((max((var_7), (((/* implicit */long long int) var_6)))) / (((/* implicit */long long int) min((var_4), (((/* implicit */unsigned int) var_2))))))));
}
