/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217628
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
    var_15 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) var_12))))) : (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551602ULL)) && (((/* implicit */_Bool) var_11))))))));
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (min((((var_13) ^ (((unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) var_11))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) 986886212);
                    var_18 = ((/* implicit */long long int) ((((/* implicit */int) var_6)) >> (((((((/* implicit */_Bool) (~(var_2)))) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 17063006654721737232ULL)))))))) - (77ULL)))));
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_3 [i_0] [i_0 + 2])))))))));
                    var_20 = (~((-(((/* implicit */int) ((_Bool) arr_0 [i_0]))))));
                }
            } 
        } 
    } 
}
