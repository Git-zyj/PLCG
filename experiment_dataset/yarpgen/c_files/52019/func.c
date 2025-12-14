/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52019
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
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (short)8908)) ? (205428650232807319ULL) : (((/* implicit */unsigned long long int) 336636008)))));
                arr_4 [i_1] = ((/* implicit */unsigned int) ((668001200) <= (((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_1] [5]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) max((((int) 2706668854U)), (((/* implicit */int) var_0))))), ((+(min((((/* implicit */unsigned int) (unsigned short)56599)), (2706668854U)))))));
    var_15 = ((/* implicit */int) min((((/* implicit */unsigned long long int) 2706668859U)), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))) % (var_9)))));
}
