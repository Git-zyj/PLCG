/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/260
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned char) var_9);
                var_19 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0]))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((unsigned long long int) (unsigned short)25655)) > (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_2)))) ? (((var_16) << (((/* implicit */int) var_7)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) >= (12766069108130647296ULL))))))))));
    var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)58))) : (var_13)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)25655))))) : (var_4))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((((/* implicit */int) (signed char)-88)) + (2147483647))) << (((((/* implicit */int) var_10)) - (54))))))))));
}
