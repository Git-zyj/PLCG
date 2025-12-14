/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242210
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) var_1)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)118)) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))))))));
    var_19 += ((/* implicit */signed char) max((((/* implicit */unsigned int) var_5)), (((((/* implicit */_Bool) (unsigned short)45432)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) - (var_1)))) : (var_15)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_1] [(short)6] |= ((/* implicit */long long int) min((((int) (signed char)-11)), (((/* implicit */int) ((((/* implicit */int) ((arr_0 [(short)4]) <= (((/* implicit */int) var_13))))) != ((~(((/* implicit */int) var_6)))))))));
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) arr_0 [i_0]))));
            }
        } 
    } 
}
