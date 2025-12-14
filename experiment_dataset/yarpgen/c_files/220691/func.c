/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220691
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
    var_11 = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2147483633))))), (((var_4) >> (((((/* implicit */int) var_10)) + (14215)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) ((var_1) > (var_4))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ ((-(2997045141U))))))));
                arr_5 [i_1] = ((/* implicit */int) var_9);
                var_12 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [i_1])) || (((((/* implicit */_Bool) arr_3 [i_1])) && (((/* implicit */_Bool) var_7)))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) >= (arr_1 [i_1])))))));
                var_13 *= max((((((/* implicit */_Bool) max((((/* implicit */int) var_0)), (var_7)))) ? ((~(8794530804880774400ULL))) : (((/* implicit */unsigned long long int) arr_3 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (749110969U) : (((/* implicit */unsigned int) 4194303)))) : (((/* implicit */unsigned int) arr_0 [i_0 + 3]))))));
            }
        } 
    } 
}
