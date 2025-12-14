/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237637
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
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                var_16 *= ((/* implicit */short) min(((~(arr_2 [i_0]))), (((/* implicit */unsigned long long int) 2974886327U))));
                var_17 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) arr_3 [i_1 - 1])) : (((/* implicit */int) arr_3 [i_1 + 1]))))));
                var_18 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((int) var_12))) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((15U) << (((((/* implicit */int) (short)-2348)) + (2375)))))))));
                arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((arr_0 [i_1]) != (((/* implicit */unsigned long long int) 4294967282U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (4362467327874416873ULL)))) ? (((/* implicit */unsigned int) arr_1 [i_1])) : (4294967294U)));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_1);
    var_20 = ((/* implicit */_Bool) var_11);
}
