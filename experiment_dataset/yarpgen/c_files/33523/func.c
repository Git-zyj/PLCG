/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33523
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
    var_20 = (short)(-32767 - 1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-33)) ^ (((/* implicit */int) ((((/* implicit */int) arr_0 [(unsigned char)2] [i_0])) <= (((/* implicit */int) (short)(-32767 - 1))))))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)(-32767 - 1))) + (((/* implicit */int) (unsigned char)1))))) && (((/* implicit */_Bool) var_14))));
        var_22 = ((/* implicit */long long int) ((1688417246) != (((/* implicit */int) (unsigned char)245))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) min((((((((/* implicit */int) (short)32764)) << (((((/* implicit */int) (short)-10880)) + (10890))))) + (arr_4 [i_1]))), (-9709770)));
        var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)254)) || (((/* implicit */_Bool) 1892892411369231198LL))))))))));
    }
    var_24 = max((255LL), (((/* implicit */long long int) (short)12003)));
    var_25 *= (short)(-32767 - 1);
}
