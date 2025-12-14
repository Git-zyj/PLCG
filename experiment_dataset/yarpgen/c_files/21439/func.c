/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21439
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
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_13)) ? (min((var_16), (((/* implicit */int) var_5)))) : ((~(((/* implicit */int) var_17)))))))))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_15)) ? (627233146U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18029))) % (3667734149U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_2 [i_1] [12LL] [12LL]) || (((/* implicit */_Bool) 627233144U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 3ULL)) ? (627233144U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17897)))))))))) : (((((/* implicit */_Bool) max((arr_0 [i_1]), (((/* implicit */long long int) arr_3 [i_0]))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_3 [i_1])), (arr_0 [i_1])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) - (arr_4 [i_0]))))))))));
                var_22 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0])))));
                var_23 = ((/* implicit */short) (-(((/* implicit */int) var_1))));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned long long int) (short)19076)) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))))) <= (((((/* implicit */_Bool) ((var_7) - (((/* implicit */long long int) ((/* implicit */int) (signed char)125)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_11)), (var_16)))) : (18446744073709551612ULL)))));
}
