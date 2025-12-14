/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46729
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
    var_14 += ((/* implicit */signed char) var_11);
    var_15 -= ((/* implicit */unsigned char) (~((~(min((1859466613U), (var_8)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 11; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) (short)9534)), (arr_0 [i_1]))), (((/* implicit */unsigned int) (unsigned char)146))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (unsigned char)146))))) ? (-1286896814938816951LL) : (-1286896814938816951LL))) : (-1286896814938816951LL)));
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) min((arr_2 [i_1]), (var_1)))) ? (4294967276U) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-30361)), (arr_4 [i_1 - 4]))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 18U)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-1286896814938816951LL))) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) var_3))));
}
