/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215169
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
    var_11 = ((/* implicit */_Bool) var_2);
    var_12 = ((/* implicit */_Bool) min((((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))), (var_9)));
    var_13 ^= ((/* implicit */unsigned int) min((((/* implicit */int) ((((var_8) ? (var_3) : (var_2))) >= (max((var_2), (((/* implicit */unsigned long long int) var_7))))))), ((-(((/* implicit */int) (short)30367))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (~(((((-71481618) * (((/* implicit */int) arr_1 [4U] [10])))) ^ (((/* implicit */int) arr_1 [4LL] [i_1])))))))));
                arr_4 [i_0] = ((/* implicit */short) max((max((max((((/* implicit */int) (unsigned short)47917)), (var_4))), (((/* implicit */int) ((var_4) <= (((/* implicit */int) arr_3 [i_0]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_2 [i_1] [i_0] [i_0 - 1]) : (-71481622)))))))));
            }
        } 
    } 
}
