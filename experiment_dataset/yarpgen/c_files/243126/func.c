/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243126
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
    var_18 = ((/* implicit */short) var_9);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) 3726996297U);
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4)))) ^ (((((/* implicit */_Bool) 1894595912)) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 3])))));
        arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)0)), ((short)-11937)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4777987500049017883LL)) ? (1894595912) : (1894595912)))) : (((((((/* implicit */_Bool) arr_0 [i_0 - 1])) && (((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_0 [i_0 + 1])))));
    }
    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 655514481U))));
}
