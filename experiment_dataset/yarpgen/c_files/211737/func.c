/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211737
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 8; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)29)), (18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_3 [i_2] [i_0]))))) : (((((/* implicit */_Bool) 9ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53139))) : (arr_5 [i_0] [4LL] [i_2])))))));
                    var_13 = ((/* implicit */short) (~(((/* implicit */int) arr_4 [i_0] [(_Bool)1] [7LL] [i_1]))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) & (var_8)))) ? (((9223372036854775807LL) | (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((1835738687U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((((/* implicit */_Bool) (short)27644)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)29))))))) : (((((/* implicit */long long int) ((-1954773695) ^ (((/* implicit */int) var_11))))) ^ (((long long int) var_6))))));
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)12396))))) % (min((var_6), (((/* implicit */long long int) var_8))))))))));
}
