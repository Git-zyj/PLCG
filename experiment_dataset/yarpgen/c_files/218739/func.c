/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218739
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
    var_19 = ((/* implicit */long long int) (((-(((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) << (((((/* implicit */int) (signed char)-55)) + (66)))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */unsigned long long int) var_11)), (var_18))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_4))))), ((+(var_18)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 ^= ((/* implicit */unsigned int) max((((((/* implicit */int) arr_5 [i_0])) >> (((((/* implicit */int) arr_5 [i_1])) - (58933))))), (((((/* implicit */int) arr_5 [i_1])) << (((((/* implicit */int) arr_6 [i_1])) + (21956)))))));
                    var_22 = ((/* implicit */unsigned long long int) arr_4 [i_1 + 1] [i_1 - 2]);
                }
            } 
        } 
    } 
}
