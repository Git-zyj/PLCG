/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25967
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
    var_10 = ((/* implicit */unsigned long long int) var_2);
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-12254)) ? (((/* implicit */int) (unsigned short)43907)) : (((/* implicit */int) (short)29211))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_12 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [i_0])) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_2 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)21628)) && (((/* implicit */_Bool) (unsigned char)126))))) : (((/* implicit */int) (signed char)98))))));
                    var_13 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (arr_3 [i_0] [i_1] [i_1]) : (arr_2 [i_0] [i_1] [i_2])));
                }
            } 
        } 
    } 
}
