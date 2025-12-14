/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34839
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
    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_13)), ((unsigned short)60300)))) : (((/* implicit */int) var_13)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)3871))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_14))))) : (arr_2 [i_1 + 3] [i_1 - 1]))) : (max((((/* implicit */unsigned long long int) min((2542663692U), (((/* implicit */unsigned int) (short)11146))))), (((var_2) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32751)))))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) >> (((var_1) + (4467370256622794338LL)))));
            }
        } 
    } 
}
