/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237852
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_14 ^= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */long long int) arr_1 [(short)22]))))) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) var_5))))))));
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_3 [i_0] [i_1] [i_1])))) ? (4294967294U) : (4294967294U))) << (((1918844968U) - (1918844951U)))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(0ULL)))) ? (((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11)))) : (((arr_0 [i_1]) | (arr_0 [(unsigned short)5])))))) - (min((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [(signed char)12] [i_1]))) | ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) var_5))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((18446744073709551615ULL) * (var_13)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
}
