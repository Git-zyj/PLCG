/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222337
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
    var_14 ^= ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (min((4924067352602580851LL), (((/* implicit */long long int) (unsigned short)65535)))))) : (((/* implicit */long long int) var_6)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */long long int) min((var_15), (((((arr_1 [i_0 - 2] [0ULL]) < (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) arr_1 [i_0 - 1] [2ULL])) ? (4924067352602580833LL) : (((/* implicit */long long int) arr_1 [i_0 + 1] [(unsigned char)10])))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0 + 1] [2U]) >= (arr_1 [i_0 - 1] [(unsigned char)10])))))))));
                arr_7 [i_0] [i_0] [i_1] = (~(4924067352602580851LL));
                var_16 ^= ((/* implicit */short) var_2);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-4924067352602580829LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) var_9)) ? (2516058758U) : (((/* implicit */unsigned int) 132120576))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : ((~(-4924067352602580813LL)))));
}
