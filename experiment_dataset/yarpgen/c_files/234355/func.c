/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234355
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((_Bool) var_8))), ((+(9018362556597108753ULL)))))) ? ((~(-690556800114015583LL))) : (var_5)));
    var_13 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) >= (((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (var_4) : (var_1)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)2))));
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) arr_2 [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-21708)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_0]))) : (11ULL)))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((608690546) / (((/* implicit */int) arr_0 [i_0]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))));
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned short)27280)) : (((/* implicit */int) (unsigned short)3314))));
            }
        } 
    } 
}
