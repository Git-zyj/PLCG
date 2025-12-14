/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231938
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_5), (arr_0 [i_1])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)25045))) - (966973154U))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-25046))) / (966973154U)))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */short) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-25045)) : (((/* implicit */int) (short)482))))), (((arr_3 [(_Bool)1] [i_1]) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) ^ (((arr_2 [i_1] [i_0]) ? (arr_3 [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((3327994142U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)18614)))))))))));
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */short) ((min((((/* implicit */long long int) var_2)), (4086096210140218996LL))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)-483))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned int) var_7);
}
