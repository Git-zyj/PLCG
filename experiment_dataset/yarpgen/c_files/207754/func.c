/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207754
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [13U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(9223372036854775799LL))) / (((/* implicit */long long int) ((/* implicit */int) var_2)))))) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775798LL)) ? (var_8) : (((/* implicit */long long int) arr_1 [i_0])))))))));
        var_10 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) arr_0 [i_0] [i_0])))))));
        arr_3 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_8) : (((/* implicit */long long int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775799LL)))))) : (arr_1 [i_0])))), (((((/* implicit */_Bool) 9223372036854775799LL)) ? (((/* implicit */unsigned long long int) ((unsigned int) (short)-20423))) : (var_7)))));
    }
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((max((((/* implicit */long long int) (signed char)16)), (max((((/* implicit */long long int) (signed char)-16)), (9223372036854775794LL))))) > (max((-5874001811759656404LL), (((/* implicit */long long int) (short)-32754)))))))));
    var_12 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_9)) != (((unsigned long long int) var_5))));
}
