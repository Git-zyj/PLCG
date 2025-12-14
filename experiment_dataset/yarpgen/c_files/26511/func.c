/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26511
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) -7944055632613869828LL)) ? (-4778874716868664385LL) : (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) ((7944055632613869838LL) >= (1839815881559077024LL))))))) ? (((/* implicit */int) ((unsigned short) var_5))) : (((/* implicit */int) (((~(7944055632613869837LL))) < (((((/* implicit */_Bool) var_13)) ? (-7944055632613869839LL) : (var_10))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [i_0] [6] = ((/* implicit */unsigned int) arr_1 [i_0]);
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)28672)), (-7944055632613869849LL)))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_3)))))))), (arr_2 [i_0 + 1] [i_1]))))));
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */short) arr_3 [i_0] [3LL]);
                var_16 += ((/* implicit */int) arr_3 [i_0] [i_1]);
            }
        } 
    } 
}
