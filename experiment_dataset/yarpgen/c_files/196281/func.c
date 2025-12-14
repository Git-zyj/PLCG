/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196281
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
    var_19 = (-(((/* implicit */int) var_12)));
    var_20 = ((((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) var_5)) : (min((var_10), (2551884394611910353ULL))))) != (((/* implicit */unsigned long long int) var_5)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0)) && (((/* implicit */_Bool) 15894859679097641262ULL))));
                arr_4 [i_0] = ((/* implicit */unsigned int) (((+(max((((/* implicit */unsigned long long int) var_11)), (15894859679097641271ULL))))) / (((((/* implicit */_Bool) var_11)) ? (((2551884394611910331ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) (-(var_4))))))));
                var_22 = ((/* implicit */unsigned int) ((2551884394611910331ULL) + (max(((-(var_18))), (((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_0] [i_0]) < (var_5))))))));
            }
        } 
    } 
}
