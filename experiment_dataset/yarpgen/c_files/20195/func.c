/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20195
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (~(min((arr_3 [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)59))))))))))));
                var_17 = (!(((0LL) < (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)2815)), (arr_3 [i_0])))) ? (arr_1 [i_0]) : (((long long int) (-(((/* implicit */int) (short)(-32767 - 1))))))));
            }
        } 
    } 
    var_19 += ((/* implicit */unsigned short) var_0);
    var_20 = ((/* implicit */short) var_6);
}
