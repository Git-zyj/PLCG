/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2494
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    var_15 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_4))))))));
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((unsigned int) ((unsigned long long int) var_5))))));
                    var_17 += ((/* implicit */signed char) ((min(((-(4503599627370495ULL))), (((/* implicit */unsigned long long int) var_2)))) >= (((/* implicit */unsigned long long int) ((unsigned int) var_0)))));
                }
            } 
        } 
        arr_7 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)196))))) ? (arr_2 [3U]) : (((((/* implicit */_Bool) (-(18446744073709551601ULL)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (16338334290558452463ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) var_12)) : (var_0))))))));
        var_18 = (!(((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_6 [12U] [i_0] [i_0])))));
    }
    var_19 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)184))))) ? (((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_7), ((_Bool)0))))) : (((unsigned long long int) (unsigned char)103)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    var_20 = ((/* implicit */int) (~(var_11)));
    var_21 = ((/* implicit */_Bool) var_1);
}
