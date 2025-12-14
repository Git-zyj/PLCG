/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192796
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
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            {
                arr_8 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0]);
                arr_9 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_2 [i_0]), ((_Bool)0)))) + (((/* implicit */int) max((((unsigned char) arr_1 [11ULL] [i_1 + 1])), (((/* implicit */unsigned char) arr_2 [i_0])))))));
                var_10 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)29429)) / ((+(((/* implicit */int) (short)-10))))));
                arr_10 [17LL] [i_1] [i_1] = ((/* implicit */int) 16244839419497932177ULL);
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) (~(var_7)))) & ((~(var_0)))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)45254)), (1162557508)))) ? (((/* implicit */unsigned long long int) var_4)) : (var_9))) : (((((/* implicit */_Bool) ((var_7) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((var_9) | (17172841088519614356ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_4)) ^ (var_7)))))))))));
}
