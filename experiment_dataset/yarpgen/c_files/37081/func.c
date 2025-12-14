/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37081
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
    var_12 = ((/* implicit */unsigned int) var_11);
    var_13 = ((/* implicit */signed char) var_9);
    var_14 &= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)0)), (max((var_5), (((((/* implicit */_Bool) var_0)) ? (var_5) : (var_5)))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [(unsigned short)8] [(unsigned short)8] |= min((((/* implicit */int) ((arr_0 [(unsigned char)0] [(unsigned char)0]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))), (((arr_1 [i_0] [i_0]) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)2282)) : (((/* implicit */int) var_11)))) : (max((((/* implicit */int) var_3)), (arr_2 [i_0]))))));
        arr_4 [(signed char)4] &= ((/* implicit */unsigned long long int) arr_0 [(unsigned char)12] [i_0]);
    }
    for (unsigned int i_1 = 1; i_1 < 21; i_1 += 3) 
    {
        var_15 = ((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_7)))) - (((((/* implicit */_Bool) arr_7 [4U])) ? (arr_6 [i_1]) : (var_1)))))));
        var_16 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_1)) ? (arr_7 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) > (var_1))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) : (((((/* implicit */_Bool) arr_5 [i_1])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) arr_6 [i_1]))))))))));
    }
    for (long long int i_2 = 1; i_2 < 14; i_2 += 1) 
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)66)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_8 [i_2])))) : (arr_6 [i_2 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_9)));
        var_18 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) var_10)))));
    }
}
