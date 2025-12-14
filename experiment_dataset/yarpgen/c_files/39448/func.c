/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39448
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
    for (short i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((arr_6 [i_0] [i_1]) ? (((/* implicit */int) ((unsigned short) arr_1 [i_0] [3ULL]))) : (((((/* implicit */_Bool) var_11)) ? (arr_0 [10]) : (((/* implicit */int) arr_1 [i_1] [i_0 + 1]))))))) : (min((((((/* implicit */_Bool) arr_1 [i_0] [(unsigned char)6])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_3))), (((/* implicit */long long int) ((unsigned char) var_5)))))));
                var_13 = ((/* implicit */short) arr_5 [i_1] [i_0] [i_0]);
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_3 [(unsigned short)7]);
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_12)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + (var_1))))))));
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))))) << (((((/* implicit */int) var_6)) - (59006)))));
}
