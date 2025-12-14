/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222162
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
    for (signed char i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) (((((-(((/* implicit */int) var_2)))) + (2147483647))) << (((((((/* implicit */_Bool) 3507038099U)) ? (787929175U) : (3010684847U))) - (787929175U)))));
                    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (max((((/* implicit */unsigned int) arr_0 [i_0])), (787929190U)))))) ? (((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)10871))) <= (787929190U)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551603ULL))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((0LL) >= (((/* implicit */long long int) 3507038109U))))), (var_2)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 5954889635368543291LL))))) : (((/* implicit */int) var_1))));
}
