/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41689
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 3469874815U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))) : (825092456U))) * (((825092478U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3421)))))))) + (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_0)), ((unsigned short)37426)))), ((~(var_14)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) 3469874815U)) ? (arr_5 [i_0 - 2] [7] [i_2]) : (((/* implicit */unsigned int) arr_2 [i_2] [i_0 + 2])))) - (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65535)))))));
                    var_20 = ((/* implicit */int) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) && (((/* implicit */_Bool) arr_1 [i_0 - 4] [i_1]))))), (max((((/* implicit */unsigned int) var_11)), (var_6))))) >> (((/* implicit */int) ((arr_5 [i_0 + 2] [i_1] [i_2]) < (((/* implicit */unsigned int) (+(arr_0 [i_0] [i_0])))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)28121)) ? (((/* implicit */int) (signed char)99)) : (((/* implicit */int) (unsigned short)65535)))) + (((/* implicit */int) var_15))))) - ((~(var_13)))));
}
