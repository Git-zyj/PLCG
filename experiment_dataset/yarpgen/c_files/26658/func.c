/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26658
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
    var_16 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14))))))) - (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_7))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_4 [i_0] = ((short) (unsigned short)45982);
        var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((var_0) | (((/* implicit */int) (_Bool)1)))) != ((~(((/* implicit */int) var_14))))))), (511ULL)));
        arr_5 [(unsigned char)1] [i_0] = ((/* implicit */short) arr_0 [i_0] [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */int) (+(((unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1])))))));
        var_18 -= ((((/* implicit */int) arr_7 [i_1] [i_1])) - (((/* implicit */int) var_2)));
    }
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) ((short) var_11))), ((~(var_3)))))) ? (((/* implicit */unsigned int) (~(1785001491)))) : (max((((/* implicit */unsigned int) var_14)), (((1112422224U) >> (((-21566515) + (21566534)))))))));
}
