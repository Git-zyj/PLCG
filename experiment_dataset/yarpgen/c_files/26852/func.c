/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26852
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
    var_18 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) -3508200247703996587LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)56))) : (2147481600U))))) * (((/* implicit */unsigned int) ((((/* implicit */int) ((var_10) <= (((/* implicit */long long int) var_14))))) << (((var_13) - (17766351161976034685ULL))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_19 = ((/* implicit */long long int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) 552526965225925144LL)) ? (237285129U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)92)))))) <= (((((/* implicit */_Bool) arr_1 [7LL])) ? (var_11) : (((/* implicit */long long int) var_16)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0]))))) : (22126022012423664ULL)));
        arr_2 [i_0] = max((max((((/* implicit */long long int) arr_0 [i_0])), (var_10))), (((/* implicit */long long int) arr_1 [i_0])));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_20 += 552526965225925144LL;
        var_21 &= ((/* implicit */unsigned int) var_2);
    }
}
