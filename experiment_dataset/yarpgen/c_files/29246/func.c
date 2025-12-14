/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29246
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
    var_16 = ((/* implicit */signed char) (unsigned short)49373);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 3] [i_0 + 2])) ? (arr_2 [3] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)117)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_0 + 2] [i_0 - 1]))) : ((~(arr_2 [(short)3] [i_0 + 2]))))))));
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_3 [i_1]))));
                var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_6))));
            }
        } 
    } 
    var_20 += var_0;
}
