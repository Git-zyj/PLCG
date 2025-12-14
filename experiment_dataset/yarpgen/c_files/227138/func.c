/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227138
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_18 *= (+(((((/* implicit */_Bool) (+(arr_4 [(signed char)2] [i_1] [(short)0])))) ? (max((((/* implicit */unsigned long long int) arr_7 [i_0])), (var_15))) : (((/* implicit */unsigned long long int) var_17)))));
                    var_19 = ((/* implicit */short) ((long long int) var_1));
                    var_20 *= ((/* implicit */unsigned short) (+(var_15)));
                }
            } 
        } 
    } 
    var_21 |= ((/* implicit */unsigned int) ((int) max((((((/* implicit */_Bool) var_16)) ? (1540614199) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (short)29680)))));
}
