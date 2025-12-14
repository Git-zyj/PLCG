/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240087
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-18512))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) & (arr_2 [i_0])))));
        var_20 += ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_14))) ? (((((/* implicit */_Bool) max((5051611742260710403ULL), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])) : (((((/* implicit */_Bool) var_12)) ? (arr_4 [i_1]) : (var_12))))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (min((((/* implicit */unsigned long long int) (short)-18505)), (arr_4 [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [(short)5])) ? (var_18) : (((/* implicit */int) (unsigned short)31686)))))))));
        var_21 = ((/* implicit */unsigned int) var_15);
        var_22 ^= ((/* implicit */short) arr_3 [i_1] [i_1]);
        arr_6 [i_1] = ((/* implicit */unsigned long long int) min((arr_3 [(unsigned short)6] [(unsigned char)7]), (((/* implicit */long long int) (unsigned short)65535))));
    }
    var_23 = ((/* implicit */unsigned char) var_4);
}
