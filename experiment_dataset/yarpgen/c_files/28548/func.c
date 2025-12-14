/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28548
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_18 = var_2;
                    arr_10 [i_0] [i_0] |= ((unsigned long long int) (((!(((/* implicit */_Bool) var_17)))) ? (((long long int) var_10)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))), (((/* implicit */int) var_2))))) : (var_11)));
}
