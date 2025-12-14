/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48487
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
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_6 [i_0])) ? (2840983076192397887LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-18))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -926642783699454381LL)), (7749935657029697234ULL)))) ? (((/* implicit */int) ((unsigned short) arr_2 [i_0]))) : ((-(((/* implicit */int) arr_1 [i_0])))))))));
                    var_13 += ((((/* implicit */_Bool) (-(((926642783699454381LL) | (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2])) : ((+((+(7749935657029697244ULL))))));
                    var_14 = ((((/* implicit */_Bool) ((unsigned char) (-(arr_5 [i_0] [i_1] [i_2]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_10))))) : (1011264165)))) : (((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1LL))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_3))));
    var_16 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (926642783699454381LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))));
}
