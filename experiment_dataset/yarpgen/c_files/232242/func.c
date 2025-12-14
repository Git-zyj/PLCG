/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232242
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */_Bool) ((short) max((((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((((/* implicit */_Bool) (short)29418)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                    arr_8 [i_2] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (short)-31929)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (17498675931226433913ULL))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) ((((/* implicit */int) var_12)) >= (((/* implicit */int) (_Bool)1))));
}
