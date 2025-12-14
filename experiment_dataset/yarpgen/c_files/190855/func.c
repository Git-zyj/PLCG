/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190855
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
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) (-((-(max((((/* implicit */unsigned long long int) var_19)), (7834054502792692563ULL)))))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (13ULL) : (12622900745975921867ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18302563051723583159ULL)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))))) ? ((-(min((((/* implicit */unsigned long long int) arr_2 [i_0])), (var_16))))) : ((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_8 [i_0])) : (18446744073709551602ULL)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) (+((~((~(4501400604114944ULL)))))));
    var_23 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned long long int) var_14))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))) : ((~(((/* implicit */int) var_18))))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))))) : ((~(max((((/* implicit */unsigned long long int) var_4)), (0ULL)))))));
    var_24 = (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)10254))))) : (max((((/* implicit */unsigned long long int) var_12)), (16717942544714872515ULL))))));
    var_25 = ((/* implicit */unsigned long long int) min((var_25), ((((!(((/* implicit */_Bool) (-(18446744073709551615ULL)))))) ? (((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) var_17)), (var_12))), (max((((/* implicit */long long int) var_18)), (var_19)))))) : ((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (var_9)))))))));
}
