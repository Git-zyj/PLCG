/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21726
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
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((2296426966U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_2])))))) ? ((~(arr_0 [i_0]))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (16574570635479640354ULL) : (var_10)))));
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) ((((/* implicit */_Bool) 1830786599252232428ULL)) || (((/* implicit */_Bool) arr_1 [i_1])))))))));
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_2])) ? (max((((/* implicit */unsigned long long int) 8676523878647232155LL)), (arr_0 [i_2]))) : (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_0))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((unsigned char) (short)-19259)))));
                    var_15 = ((/* implicit */unsigned short) ((max((((arr_0 [i_2]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), ((!(((/* implicit */_Bool) var_2)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_4 [i_2] [i_1] [i_2])) : (((/* implicit */int) (unsigned short)65508))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1]))))) : (((/* implicit */int) arr_2 [i_0] [i_1]))))) : (max((8676523878647232159LL), (((/* implicit */long long int) (unsigned char)0))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))))));
}
