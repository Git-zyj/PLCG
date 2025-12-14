/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199937
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
    var_15 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            {
                arr_7 [i_1] = ((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((/* implicit */unsigned long long int) max((arr_4 [i_0] [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) 1053910032)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)65523)))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (8191U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-10721)))))), (arr_3 [i_1 + 1] [i_1 - 3]))));
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_1 + 1])))) < (var_2)))))))));
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) max((((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_6 [i_0] [i_1 + 1])), (((arr_4 [i_0] [i_1]) & (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))))))))));
            }
        } 
    } 
}
