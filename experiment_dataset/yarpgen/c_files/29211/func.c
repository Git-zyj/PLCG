/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29211
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_13 |= ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) - (max((((/* implicit */long long int) arr_5 [i_1])), (arr_6 [i_1]))))) & (((/* implicit */long long int) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) >= (var_9)))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)186);
            }
        } 
    } 
    var_14 += ((/* implicit */signed char) ((short) (~((~(((/* implicit */int) (unsigned char)62)))))));
    var_15 = ((/* implicit */long long int) var_2);
    var_16 |= ((/* implicit */_Bool) var_0);
    var_17 ^= ((/* implicit */short) var_1);
}
