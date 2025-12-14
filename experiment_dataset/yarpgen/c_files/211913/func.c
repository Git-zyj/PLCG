/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211913
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
    var_13 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)21392)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */long long int) (-((-(var_9)))));
                    var_14 *= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_10)) ? (((arr_6 [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)7680))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)163)) && (((/* implicit */_Bool) (signed char)58)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_8 [i_0])), (3882399224U)))))))));
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) & (4294967292U)))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) ((var_9) <= (((/* implicit */int) (short)30335))))))))));
                }
            } 
        } 
    } 
}
