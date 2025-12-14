/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50404
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_11)))) ? (((unsigned long long int) (signed char)-113)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10847)))));
        arr_5 [(unsigned short)4] |= ((/* implicit */_Bool) (~(((/* implicit */int) (short)-4096))));
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (arr_3 [(unsigned char)16]) : (arr_3 [(unsigned short)16]))))));
        arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) - (((/* implicit */int) (unsigned short)23512))))) + ((~(arr_3 [i_0])))));
    }
    var_20 = ((/* implicit */long long int) var_5);
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(max((((/* implicit */long long int) var_16)), (1232715266997476892LL)))))) ? ((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_15)))))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-4096)) : (((/* implicit */int) (unsigned char)151))))))));
}
