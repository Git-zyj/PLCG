/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37106
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
    var_11 = var_10;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)31232)) && (((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)116))) == (-987446882160321641LL))))) : (max((((/* implicit */long long int) -710061298)), (-987446882160321641LL))))))));
                var_13 -= ((/* implicit */unsigned short) ((unsigned int) arr_1 [i_1]));
                arr_6 [i_1] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 - 1]))) : (var_9)))));
                var_14 = ((/* implicit */unsigned int) (short)-1);
            }
        } 
    } 
}
