/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52367
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 += ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)93))) : (2107506695U)))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (18446744073709551596ULL) : (((/* implicit */unsigned long long int) -1)))) : (min((((/* implicit */unsigned long long int) -1827493893)), (4735559980049696457ULL))))));
                arr_6 [i_1] = ((/* implicit */_Bool) 4735559980049696457ULL);
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (1826267215)))) + (((unsigned int) (unsigned short)32767))))) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) (signed char)34)))))));
                var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) ((long long int) arr_3 [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_5 [i_1]))))) ? (4294967295U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_1 [i_1] [i_0])) : (((/* implicit */int) arr_5 [i_0]))))))) : (arr_0 [i_0])));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) var_11);
}
