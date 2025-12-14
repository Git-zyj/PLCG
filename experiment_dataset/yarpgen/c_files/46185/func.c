/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46185
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((6868936813155541093ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)20))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    var_14 = ((((/* implicit */_Bool) (signed char)61)) || (((/* implicit */_Bool) 18446744073709551615ULL)));
    var_15 |= ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)74)), (max((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)104)))), (((/* implicit */int) (unsigned char)212))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 7; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(((((((/* implicit */int) var_9)) < (((/* implicit */int) var_6)))) ? (((/* implicit */int) min(((signed char)50), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) arr_5 [i_0]))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11)))) <= (((/* implicit */int) max(((unsigned char)45), (((/* implicit */unsigned char) (signed char)54))))))))) >= ((-(((((/* implicit */_Bool) (unsigned char)168)) ? (2108900658U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)253)))))))));
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_4 [i_0 + 3]) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)3))) : (4294967295U)))) && (((/* implicit */_Bool) (~(1085961990U))))));
            }
        } 
    } 
}
