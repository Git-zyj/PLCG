/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206055
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (arr_3 [i_0 + 2]) : (arr_3 [i_0 - 1]))), (((/* implicit */unsigned int) ((signed char) max(((short)-469), (var_5)))))));
                    var_12 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (short)-488)) ? (-1) : (((/* implicit */int) (_Bool)0)))))) ? (max((((/* implicit */unsigned int) (short)481)), (2727804370U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) max((((/* implicit */long long int) min((((/* implicit */unsigned int) max((((/* implicit */int) var_5)), (var_2)))), (min((2727804370U), (((/* implicit */unsigned int) var_5))))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)34322)), (var_3)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 0))))))));
}
