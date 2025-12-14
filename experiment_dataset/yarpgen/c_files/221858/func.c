/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221858
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
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)35673))))) ? (((((/* implicit */_Bool) (unsigned short)44410)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)11919), ((unsigned short)2)))))))))))));
                    var_19 &= (unsigned short)35673;
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_4))))));
}
