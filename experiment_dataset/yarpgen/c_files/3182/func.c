/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3182
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
    var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (var_12)))) && (((/* implicit */_Bool) var_2))))) : (((((/* implicit */int) ((_Bool) var_10))) % (var_9)))));
    var_20 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_2] = ((/* implicit */unsigned short) (~((~((~(((/* implicit */int) var_16))))))));
                    arr_9 [i_2] [i_1] [i_1 + 1] [i_2] = ((/* implicit */int) ((((arr_2 [i_2 + 1]) << (((var_3) - (2648714066717037526ULL))))) % (((long long int) (~(var_17))))));
                    arr_10 [i_2] [i_2] = ((/* implicit */unsigned char) (~(min((((/* implicit */long long int) arr_0 [i_1])), (min((((/* implicit */long long int) arr_0 [i_0])), (var_13)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (((_Bool)0) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_17)) : (var_13))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))));
}
