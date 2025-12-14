/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224729
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
    var_16 = ((/* implicit */_Bool) ((((((/* implicit */int) var_7)) >= (((/* implicit */int) min((var_7), (var_11)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((((/* implicit */_Bool) var_14)) ? (((long long int) (signed char)-1)) : (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [i_0] [8LL] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((arr_1 [i_0]), (arr_1 [i_0])))), (max((((/* implicit */long long int) var_11)), (7802847681456913631LL)))))) ? (((/* implicit */int) ((_Bool) 7460995894704977277ULL))) : (((arr_2 [(unsigned short)11] [i_0 + 3] [i_0 + 4]) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) (unsigned char)32))))));
                var_17 -= (!(var_7));
                var_18 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((unsigned long long int) var_0)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_6);
}
