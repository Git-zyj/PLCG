/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205476
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
    var_17 = ((/* implicit */_Bool) var_14);
    var_18 = ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_19 -= (((_Bool)1) ? (((/* implicit */unsigned long long int) min(((+(-178103731092678384LL))), (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0])))))))) : (max((((/* implicit */unsigned long long int) 0U)), (arr_2 [i_0]))));
        var_20 |= ((/* implicit */short) (((((-(min((arr_0 [i_0] [i_0]), (((/* implicit */long long int) var_16)))))) + (9223372036854775807LL))) << (((min((((/* implicit */unsigned int) (-(889389051)))), (min((var_4), (((/* implicit */unsigned int) var_2)))))) - (2694862863U)))));
        var_21 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) max((var_5), (((/* implicit */short) var_16))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))));
    }
    var_22 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)-19384))) + (((((/* implicit */_Bool) var_11)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60891)))))));
}
