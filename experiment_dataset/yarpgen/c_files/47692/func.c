/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47692
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_7 [(unsigned char)0] [(unsigned char)0] &= ((/* implicit */unsigned char) min((var_6), (((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_6)) ? (var_7) : (1484927290252476533LL))) : (((/* implicit */long long int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned char) arr_5 [(signed char)6] [i_0] [i_0] [14ULL]))))))))));
                    var_11 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_1)))) ? (((/* implicit */int) arr_6 [i_2] [i_1 + 2] [(signed char)18])) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) (signed char)0)))))) == (((((/* implicit */int) var_4)) - (((/* implicit */int) (signed char)11))))));
                }
            } 
        } 
    } 
    var_12 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))) : (max((var_6), (var_7)))))) ? (var_0) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)231)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */int) var_5)) * (((/* implicit */int) var_2)))) : (((/* implicit */int) max(((unsigned char)255), ((unsigned char)231)))))))));
}
