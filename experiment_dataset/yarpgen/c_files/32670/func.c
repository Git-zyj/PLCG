/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32670
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
    var_20 -= ((/* implicit */unsigned char) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)5)) ? (((/* implicit */int) (unsigned short)47667)) : (((/* implicit */int) var_11))))), (max((((/* implicit */long long int) (unsigned char)17)), (var_10))))), (((/* implicit */long long int) max((min((var_1), (((/* implicit */unsigned char) var_19)))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)203))))))))));
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_16))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)47675)) : (((/* implicit */int) ((((((/* implicit */int) var_5)) - (arr_3 [i_0] [i_1]))) == (((/* implicit */int) arr_0 [i_0] [i_0])))))));
                var_22 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)17868)) * (((((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) arr_0 [i_1] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) (_Bool)0))))) : (((/* implicit */int) (_Bool)1))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */unsigned char) arr_2 [i_0] [i_0])), ((unsigned char)0))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) ((unsigned char) max((((unsigned int) (unsigned short)17869)), (((/* implicit */unsigned int) min((((/* implicit */short) (_Bool)0)), ((short)-13665)))))));
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4138517755U)) ? (497577578U) : (((/* implicit */unsigned int) -1111892039))));
}
