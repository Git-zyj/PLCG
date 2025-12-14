/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209174
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
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) -2147483632)) : (var_3)))) ? (((/* implicit */long long int) max((-2147483632), (-2147483616)))) : (var_6)))) ? (((/* implicit */unsigned long long int) min((((var_11) | (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((((/* implicit */_Bool) 2147483631)) ? (var_13) : (100663296U)))))) : (((((/* implicit */unsigned long long int) (~(100663298U)))) & (max((((/* implicit */unsigned long long int) -2147483632)), (9223372036854775808ULL))))))))));
    var_15 *= ((/* implicit */_Bool) var_11);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_16 ^= ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -2147483644)))) / (arr_3 [(short)8])))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (((long long int) arr_2 [i_0] [i_0] [i_1])) : (((/* implicit */long long int) 3388175571U)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) arr_4 [i_1]))))))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) max(((((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */unsigned int) -2147483606)), (arr_4 [i_1]))))), (((((/* implicit */_Bool) -2147483639)) ? ((((_Bool)1) ? (4194303972U) : (582944712U))) : (min((((/* implicit */unsigned int) var_2)), (100663299U)))))));
            }
        } 
    } 
}
