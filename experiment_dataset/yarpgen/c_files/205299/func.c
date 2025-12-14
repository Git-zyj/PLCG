/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205299
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
    for (long long int i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */long long int) max((var_17), (((long long int) arr_0 [10LL] [i_0 - 3]))));
                var_18 += ((/* implicit */long long int) ((arr_5 [14LL] [14LL]) != ((+(6728510348121264474LL)))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) min((var_19), ((+(var_8)))));
    var_20 += max((var_13), (var_5));
    var_21 = (-(((((/* implicit */_Bool) min((-9109832712658881229LL), (var_15)))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_8)))))))));
}
