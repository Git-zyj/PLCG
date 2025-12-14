/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239552
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (unsigned short)11366))))))) + (max((((2449963719382632257ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */unsigned long long int) arr_0 [9U] [i_1])))))))));
                arr_6 [(short)2] [i_1] [i_1] |= (((+(((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])))) + (((((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])) * (((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])))));
                arr_7 [i_1] = ((/* implicit */signed char) 2449963719382632257ULL);
                arr_8 [i_1] [6U] [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */long long int) 0U)) + (var_10)))) ? (((((/* implicit */_Bool) 8725724278030336LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)9)))) : (((/* implicit */int) var_17))))));
            }
        } 
    } 
    var_20 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12)))), (((((/* implicit */int) var_2)) & (((/* implicit */int) var_8)))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_18))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_9)), ((unsigned short)14)))) : (((/* implicit */int) var_17))))));
    var_21 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) var_14)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * (2449963719382632257ULL))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17007)))));
}
