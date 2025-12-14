/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212519
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */unsigned char) var_3)), (var_9)))) < (((((/* implicit */int) var_3)) - (((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) var_10))))))));
                    arr_8 [i_1] = ((/* implicit */int) arr_5 [20U] [i_1] [i_2 + 3]);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (short)-29099);
}
