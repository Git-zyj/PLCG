/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211689
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
    var_18 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) var_1)))), ((~(((((/* implicit */_Bool) (short)24871)) ? (((/* implicit */int) (signed char)-27)) : (((/* implicit */int) var_1))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)49))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_0]))))) : (((unsigned long long int) arr_3 [i_0]))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? ((~(((/* implicit */int) arr_0 [i_0])))) : ((~(((/* implicit */int) arr_0 [i_0]))))));
        arr_6 [i_0] [i_0] = (+(((/* implicit */int) arr_2 [i_0])));
    }
    var_19 = ((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (min((var_8), (((/* implicit */long long int) var_14)))) : ((~(var_12)))))));
}
