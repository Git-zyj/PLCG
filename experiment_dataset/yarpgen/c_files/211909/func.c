/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211909
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
    var_11 &= ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_3)))) || (((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_0)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */int) var_7))))) && (((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_2)))))))));
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) var_7))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = (+(((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */int) ((unsigned char) (short)-32411))) : (-1616579982))));
                var_14 = ((/* implicit */_Bool) max((var_14), (((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)255)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (short)27))))), (((/* implicit */long long int) ((var_1) << (((((/* implicit */int) var_2)) - (206))))))))) && ((!(((/* implicit */_Bool) ((long long int) arr_2 [i_1])))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((unsigned long long int) (short)-29)) : (min((((/* implicit */unsigned long long int) 262143U)), (18446744073709551610ULL))))));
    var_16 = ((/* implicit */int) var_4);
}
