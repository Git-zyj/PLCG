/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223874
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
    var_11 = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))) <= (min((var_1), (max((var_1), (((/* implicit */unsigned long long int) var_9)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))))) ? ((~(((/* implicit */int) var_4)))) : (var_6)));
                arr_6 [i_1] = ((/* implicit */signed char) ((_Bool) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [10ULL] [13U] [i_1]))) : (var_7)))));
                arr_7 [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((var_6), (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_1)))) : (((arr_1 [i_0] [i_1]) ? (var_8) : (((/* implicit */unsigned long long int) -8432904586545695137LL)))))), (((((/* implicit */_Bool) (short)-1)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_6)) : (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 4294967283U)) : (var_9))))))));
            }
        } 
    } 
}
