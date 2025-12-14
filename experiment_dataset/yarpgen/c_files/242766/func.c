/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242766
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
    for (long long int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                {
                    var_15 |= ((/* implicit */long long int) var_11);
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) arr_6 [i_0] [i_1 - 2] [i_2 - 1] [i_0 + 1]))));
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) max((arr_3 [i_1 + 1] [i_2 + 1]), (arr_3 [i_1 - 2] [i_2 + 1]))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) 18446744073709551596ULL);
    var_18 = ((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((12828414933534237923ULL) | (16801950087199336590ULL)))))))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 531368821535659570ULL)) ? (((/* implicit */unsigned long long int) 4251100311U)) : (5618329140175313714ULL)))) ? (((/* implicit */int) max(((signed char)-22), (((/* implicit */signed char) (_Bool)1))))) : (((/* implicit */int) var_1))));
}
