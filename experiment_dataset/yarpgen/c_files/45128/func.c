/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45128
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_20 *= ((/* implicit */unsigned int) var_11);
                arr_6 [i_1] [14ULL] = ((/* implicit */unsigned int) var_8);
                arr_7 [8ULL] [2ULL] [i_1] = ((/* implicit */short) arr_4 [i_0]);
                var_21 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_1])))), (((/* implicit */int) max((((/* implicit */unsigned short) min((var_4), (((/* implicit */signed char) var_5))))), (var_2))))));
                arr_8 [i_1] [(unsigned short)12] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_5 [i_0] [8LL])), (arr_1 [(short)12])));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_17);
    var_23 = ((/* implicit */_Bool) var_2);
}
