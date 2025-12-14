/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32434
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                arr_8 [i_1 + 1] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (short)5733)) ? (3445340702U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))) & (max((((unsigned int) var_3)), (((/* implicit */unsigned int) arr_5 [i_0])))));
                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (short)-6408)), (arr_3 [i_1 - 1])))) ? ((+((~(arr_2 [i_0]))))) : (arr_2 [i_1 - 1])));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((((1925891401) <= (((/* implicit */int) var_1)))) ? (min((((/* implicit */int) var_4)), (var_3))) : ((+(var_6))))) <= (((/* implicit */int) (unsigned char)81)))))));
}
