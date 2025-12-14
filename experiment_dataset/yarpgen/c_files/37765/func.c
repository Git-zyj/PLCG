/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37765
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) % (15123220415365129275ULL)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_3))));
    var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) 5267253340992133041LL)), (15123220415365129271ULL)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_0] [i_0] = ((/* implicit */int) ((max((arr_1 [i_0] [i_1]), (arr_1 [i_0] [i_1]))) <= (((/* implicit */int) ((short) arr_1 [i_1] [i_1])))));
                var_20 = ((/* implicit */unsigned int) var_11);
                var_21 = ((long long int) ((((int) var_13)) >> (((arr_3 [i_1] [i_1] [i_1]) - (532260135)))));
                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_2 [i_0] [i_1])))) ? (arr_1 [i_0] [i_0]) : (((((/* implicit */_Bool) arr_3 [i_1] [i_0] [i_0])) ? (arr_1 [i_0] [i_1]) : (((/* implicit */int) var_12))))))))));
            }
        } 
    } 
}
