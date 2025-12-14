/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197063
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
    var_14 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1651998259186928697ULL)))))));
    var_15 = ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) (unsigned short)65535))) ? (((/* implicit */long long int) max((min((var_11), (((/* implicit */unsigned int) arr_2 [i_0] [i_0 + 1])))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-8258)) - (var_0))))))) : (((((/* implicit */_Bool) var_13)) ? (min((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_0] [i_0 - 1])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0 + 1]))))))))));
        arr_3 [i_0] |= ((((/* implicit */_Bool) min((((/* implicit */int) arr_2 [i_0 - 2] [i_0])), (((var_0) >> (((var_5) - (1899657309275963771ULL)))))))) ? (min((arr_1 [i_0 - 2]), (((/* implicit */long long int) var_7)))) : (arr_1 [i_0]));
        arr_4 [i_0] = ((/* implicit */unsigned char) (-(min((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_2)) : (var_9))), (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */unsigned int) (unsigned short)17164)))))))));
    }
}
