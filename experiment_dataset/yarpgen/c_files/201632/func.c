/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201632
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) arr_3 [i_1] [4LL])) : (((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1871070704)) ? (((/* implicit */int) (short)-8178)) : (((/* implicit */int) arr_1 [i_0]))))) : (((long long int) 71965945))))));
                var_10 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((long long int) -5658798128919764555LL))), (var_1)));
            }
        } 
    } 
    var_11 = ((((/* implicit */_Bool) max((((var_8) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)25875)))), (((((/* implicit */_Bool) -6743313027349928285LL)) ? (((/* implicit */int) (short)-25861)) : (((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_5)))) : (var_3));
}
