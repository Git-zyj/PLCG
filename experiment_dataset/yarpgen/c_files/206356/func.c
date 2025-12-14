/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206356
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
    var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) <= (((/* implicit */int) (unsigned short)0))))), (max((var_8), (var_3))))), (((/* implicit */long long int) var_2)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        arr_4 [3LL] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) -870950735)) && (((/* implicit */_Bool) (short)(-32767 - 1)))))), (var_7)))), (((((/* implicit */int) ((var_3) > (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ^ (((/* implicit */int) (unsigned short)65535))))));
        var_11 = ((/* implicit */signed char) var_3);
        var_12 = ((/* implicit */long long int) var_7);
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65532))))) ? (max((2147483647), (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (unsigned char)206)))))))))));
        var_14 = ((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) arr_3 [(unsigned char)5])))));
    }
    var_15 ^= ((/* implicit */unsigned int) var_8);
}
