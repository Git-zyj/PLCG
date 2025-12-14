/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232000
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
    var_19 = ((/* implicit */signed char) max((var_19), (var_11)));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_1 [i_1]), (((/* implicit */long long int) (short)8525))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) : (((((/* implicit */unsigned int) -930934162)) & (arr_3 [i_0] [i_0] [i_1])))))) | (min((3024909934749153951LL), (((/* implicit */long long int) (signed char)-1)))))))));
                var_21 = var_14;
            }
        } 
    } 
    var_22 = 0U;
}
