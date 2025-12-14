/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218167
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
    var_17 = (!(((/* implicit */_Bool) var_12)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) (!(var_6)));
        arr_2 [i_0] [i_0] = (-(arr_0 [i_0]));
    }
    for (unsigned char i_1 = 2; i_1 < 20; i_1 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) arr_1 [i_1] [i_1]);
        arr_5 [i_1] &= ((/* implicit */long long int) arr_4 [i_1]);
        var_20 = ((/* implicit */unsigned short) (~(max((min((14303771261422783012ULL), (4142972812286768574ULL))), (((/* implicit */unsigned long long int) arr_4 [i_1 + 2]))))));
        arr_6 [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1 + 1])) ^ (((/* implicit */int) var_1))))), (min((((var_2) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) var_1))))));
    }
}
