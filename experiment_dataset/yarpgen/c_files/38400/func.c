/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38400
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
    var_16 += ((/* implicit */long long int) ((((/* implicit */_Bool) 1432930419)) ? (((((_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) -5952275209865546888LL)) : (min((((/* implicit */unsigned long long int) 0LL)), (var_14))))) : (((/* implicit */unsigned long long int) var_10))));
    var_17 = ((/* implicit */unsigned short) ((var_10) >> (((min((((/* implicit */int) var_2)), (var_12))) - (61516)))));
    var_18 = ((((/* implicit */int) var_0)) + (((((/* implicit */int) var_1)) + (((/* implicit */int) (short)1020)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)1029)) / (arr_1 [i_1]))))));
                var_19 += ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (arr_2 [i_1] [i_0] [i_0]) : (arr_2 [i_0] [i_1] [i_1]))));
                var_20 += ((/* implicit */unsigned long long int) var_7);
            }
        } 
    } 
}
