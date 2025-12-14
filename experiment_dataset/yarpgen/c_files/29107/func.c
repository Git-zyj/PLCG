/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29107
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (unsigned char)214)))));
                arr_4 [(unsigned char)11] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) var_13)))))) ? (((/* implicit */int) ((unsigned char) (short)-8192))) : ((-(max((-1597224770), (((/* implicit */int) var_5))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) var_14)) / (((/* implicit */int) var_5))))) & (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) min((var_12), (var_6))))) : (((((/* implicit */_Bool) var_11)) ? (5140069979031517096LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
    var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_15))))), (var_10)));
}
