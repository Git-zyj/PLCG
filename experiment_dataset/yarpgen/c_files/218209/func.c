/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218209
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
    var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) max((((/* implicit */long long int) (short)8547)), (9223372036854775791LL))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)209)) || (((/* implicit */_Bool) 1561088510U))))) : (((/* implicit */int) arr_4 [i_0] [i_1]))))) ? (min((((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) : (6562765440561000776LL))), (((/* implicit */long long int) arr_4 [i_0] [i_0])))) : (((/* implicit */long long int) (+(max((arr_3 [i_0] [i_1]), (((/* implicit */int) (unsigned char)72)))))))));
                var_11 = ((/* implicit */unsigned short) ((35046933135360LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)64)))));
            }
        } 
    } 
}
