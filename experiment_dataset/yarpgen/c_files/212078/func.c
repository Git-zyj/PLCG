/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212078
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
    var_10 = ((/* implicit */long long int) ((unsigned int) min((((/* implicit */long long int) min((((/* implicit */int) (unsigned short)26473)), (var_1)))), (((var_8) + (((/* implicit */long long int) ((/* implicit */int) (signed char)119))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) 1623977473612835410LL))) ? (18446744073709551594ULL) : (((/* implicit */unsigned long long int) (~(arr_1 [i_1 + 1])))))))));
                var_12 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_1 [i_1 + 1])))) ? (((var_1) / (((/* implicit */int) var_3)))) : (arr_1 [i_1 - 1])));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_6)) & (((/* implicit */int) (unsigned short)64061))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (max((var_9), (((/* implicit */unsigned long long int) -1LL)))))) | (var_4)));
}
