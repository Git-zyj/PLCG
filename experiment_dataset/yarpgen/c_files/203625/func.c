/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203625
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_9 [(_Bool)1] [(_Bool)1] [i_0] [i_2] &= ((/* implicit */signed char) ((((((/* implicit */int) ((arr_1 [i_0]) > (((/* implicit */int) var_5))))) >= (((/* implicit */int) ((_Bool) arr_7 [i_0] [i_1] [i_2 - 1]))))) ? (arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) ((max((var_4), (((/* implicit */long long int) var_2)))) == (((/* implicit */long long int) arr_4 [i_1]))))))));
                    arr_10 [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((/* implicit */int) ((_Bool) arr_7 [i_0] [3U] [i_0]))), (((((((/* implicit */int) var_2)) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_0] [i_0])) - (51529)))))))), (((unsigned long long int) arr_7 [i_0] [i_1] [i_2 + 1]))));
                }
            } 
        } 
    } 
    var_10 *= ((/* implicit */unsigned long long int) var_1);
}
