/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227581
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
    var_15 = ((/* implicit */unsigned short) ((long long int) (+(var_7))));
    var_16 ^= ((/* implicit */unsigned short) (~(-531692737)));
    var_17 = ((/* implicit */unsigned int) ((((((min((var_6), (((/* implicit */long long int) var_5)))) + (9223372036854775807LL))) >> (((max((((/* implicit */int) var_1)), (var_14))) + (123))))) % (((((/* implicit */_Bool) (~(var_12)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12522))) : (var_6)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_18 -= ((/* implicit */_Bool) var_11);
        arr_2 [i_0] [i_0] = ((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) != (((arr_0 [i_0]) ^ (arr_0 [i_0]))));
        var_19 *= ((/* implicit */_Bool) var_5);
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        arr_6 [i_1] [(signed char)11] |= ((/* implicit */unsigned int) min(((~(arr_4 [i_1] [(unsigned char)11]))), ((+(((((arr_4 [(signed char)2] [(signed char)2]) + (2147483647))) << (((arr_5 [i_1]) - (4513599866138284331ULL)))))))));
        var_20 -= ((/* implicit */_Bool) arr_5 [i_1]);
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */unsigned long long int) max((799241531U), (var_3)))) % ((+(arr_5 [(unsigned short)8]))))))))));
    }
}
