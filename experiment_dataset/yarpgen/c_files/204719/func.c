/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204719
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [i_1] [(_Bool)1] = ((/* implicit */unsigned short) (+((((!(((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) (unsigned short)51187)) ? (var_2) : (var_2))) : ((-(2091682193441056564ULL)))))));
                arr_6 [i_1] = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned long long int) (+(-1951493723)))), (max((2091682193441056564ULL), (((/* implicit */unsigned long long int) var_6))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */long long int) (~(((/* implicit */int) ((((((/* implicit */int) var_1)) > (((/* implicit */int) var_1)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50395)) ? (16355061880268495056ULL) : (((/* implicit */unsigned long long int) -513788271))))))))));
}
