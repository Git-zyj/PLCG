/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215795
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
    var_20 = ((/* implicit */short) var_19);
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */int) (unsigned short)52943)) : (((/* implicit */int) (short)-1))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1])) ? (arr_3 [i_0 + 3] [i_1] [i_0 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)12590))))) : (((arr_1 [i_0 + 2]) << (((max((((/* implicit */long long int) (short)25)), (var_14))) - (7337844449461331675LL)))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((long long int) 2147483647));
            }
        } 
    } 
}
