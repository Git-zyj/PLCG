/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205869
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
    var_18 = ((/* implicit */int) min((var_13), (((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)10)) ? (11048545827064282264ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
    var_19 = ((/* implicit */long long int) var_9);
    var_20 -= ((/* implicit */int) var_7);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_21 = ((/* implicit */_Bool) ((int) (signed char)-11));
        arr_2 [i_0] [i_0] &= ((/* implicit */unsigned short) (((-(((/* implicit */int) (signed char)5)))) | (((/* implicit */int) var_14))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 1) 
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-22811)) ? (7398198246645269327ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-11)))));
        arr_7 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-10014))));
    }
    for (int i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        var_23 = ((/* implicit */int) arr_9 [i_2]);
        var_24 &= ((/* implicit */long long int) ((_Bool) (short)10040));
    }
}
