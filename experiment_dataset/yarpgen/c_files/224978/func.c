/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224978
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
    var_10 = ((/* implicit */short) min((((/* implicit */long long int) min(((signed char)31), ((signed char)37)))), (((min((((/* implicit */long long int) var_2)), (var_3))) & (var_3)))));
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) >> (((var_9) - (1591832416324408890LL)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned int) (short)-24370);
                arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 + 1] [i_0 - 1])) ? (min((((/* implicit */long long int) (signed char)46)), (-1LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-45)))));
                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (_Bool)1)))))))))));
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) arr_0 [i_0 + 1])) : (var_4)))) ? (arr_0 [i_0 + 1]) : ((-(arr_0 [21])))));
            }
        } 
    } 
    var_15 *= ((/* implicit */signed char) min(((unsigned char)54), ((unsigned char)255)));
}
