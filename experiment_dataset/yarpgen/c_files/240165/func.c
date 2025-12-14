/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240165
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
    var_14 = ((/* implicit */_Bool) (short)22022);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_15 = ((/* implicit */signed char) ((long long int) (short)-22026));
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 4294967295U)) : (var_3))))));
        var_17 = ((/* implicit */unsigned short) (-(((arr_2 [i_0] [i_0]) ^ (arr_2 [i_0] [i_0])))));
        var_18 = ((/* implicit */int) var_12);
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((var_12), (((/* implicit */long long int) arr_6 [i_1]))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])), (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_9)))) : ((-(10073951323705525506ULL)))))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) ((unsigned long long int) (unsigned short)29674)))) ? (((var_1) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))))) : (max((((/* implicit */long long int) (short)30777)), (-6265399373761745222LL))))) : (((/* implicit */long long int) ((((((int) arr_5 [i_1] [i_1])) + (2147483647))) << (((((/* implicit */int) arr_3 [i_1])) - (20549))))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_2])) / (((/* implicit */int) var_8))))) <= (var_2)));
        var_20 = ((/* implicit */long long int) arr_3 [i_2]);
    }
    var_21 = ((/* implicit */_Bool) ((unsigned int) (~(var_12))));
}
