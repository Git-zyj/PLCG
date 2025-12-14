/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221464
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
    var_20 = ((/* implicit */signed char) var_0);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_4 [i_0 - 2] [i_0 + 1] [i_1] = ((/* implicit */_Bool) var_15);
                var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_1 [i_0]))) ? (((/* implicit */int) max(((unsigned short)65535), ((unsigned short)65516)))) : (((/* implicit */int) ((arr_1 [i_0 - 2]) < (((/* implicit */int) arr_0 [i_1])))))));
                var_22 -= max((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) min((0LL), (-1LL)))) ? (((/* implicit */long long int) arr_1 [i_0 + 1])) : (((4LL) | (1125899906842616LL))))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) var_7);
}
