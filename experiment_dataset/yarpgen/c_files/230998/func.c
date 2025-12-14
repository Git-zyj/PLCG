/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230998
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
    var_10 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-81)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_4)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2064))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3984051952U)) ? (-8014391143397204902LL) : (9167159319684177176LL)))) && (((/* implicit */_Bool) ((arr_4 [i_1] [i_0]) % (((/* implicit */int) arr_1 [i_0]))))))))));
                var_12 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
                arr_5 [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_9) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1])))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) -2134069687);
            }
        } 
    } 
    var_13 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (min((0U), (((/* implicit */unsigned int) (signed char)28))))))) ? (var_9) : ((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_2)) : (15234042352795751213ULL)))))));
}
