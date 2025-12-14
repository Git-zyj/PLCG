/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233235
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
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_16 &= ((/* implicit */short) min(((+(max((((/* implicit */unsigned int) arr_3 [i_1])), (var_11))))), (((/* implicit */unsigned int) (signed char)63))));
                var_17 = ((/* implicit */unsigned long long int) var_13);
                arr_4 [i_0] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) min((-1397173582), (-1999352452)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967278U)) < (arr_0 [i_0])))))));
            }
        } 
    } 
    var_18 = max((((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-17706)), (-2585326446270581821LL)))) ? (((/* implicit */int) ((-4707576356316986751LL) != (((/* implicit */long long int) var_8))))) : (((/* implicit */int) (unsigned short)3)))), (((/* implicit */int) min((((var_12) < (var_12))), ((!(((/* implicit */_Bool) 140737488355327ULL))))))));
}
