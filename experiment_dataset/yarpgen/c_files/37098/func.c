/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37098
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
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) 7774100025481032352ULL)) ? (17683402939325138594ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62650))))))));
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) var_6))));
    var_15 = ((/* implicit */_Bool) ((13843219249069678854ULL) - (((((/* implicit */_Bool) (+(-3111289887376929003LL)))) ? (17683402939325138598ULL) : (17683402939325138594ULL)))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 6; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                arr_7 [i_0 + 4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (arr_0 [i_0 + 1])))) ? (((/* implicit */long long int) ((int) arr_0 [i_0 + 3]))) : (max((arr_0 [i_0 + 4]), (var_11)))));
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((short) arr_2 [1]));
            }
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
}
