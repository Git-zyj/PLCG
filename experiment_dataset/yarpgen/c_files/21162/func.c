/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21162
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
    var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) var_10))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (~((-(((/* implicit */int) var_11)))))))));
                    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_4)) + (((var_1) - (((/* implicit */unsigned long long int) 1665125609)))))))));
                    var_18 = ((((/* implicit */int) ((signed char) 15643115789074363463ULL))) / (((/* implicit */int) arr_5 [i_1] [1ULL])));
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) 1665125609))));
                }
            } 
        } 
    } 
}
