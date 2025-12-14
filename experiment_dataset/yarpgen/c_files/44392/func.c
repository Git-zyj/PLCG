/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44392
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
    for (signed char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */_Bool) (signed char)-62);
                var_21 = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))))), (max((arr_2 [i_0] [i_0]), (arr_1 [i_0])))))) & (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (13529693161292002689ULL)))))) ? (4917050912417548927ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
}
