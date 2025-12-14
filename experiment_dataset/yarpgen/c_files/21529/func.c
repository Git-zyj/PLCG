/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21529
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
    var_13 = ((/* implicit */signed char) var_0);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_2 - 1])) < (((/* implicit */int) ((((/* implicit */int) (!((_Bool)1)))) <= ((+(((/* implicit */int) (unsigned short)32456)))))))));
                    var_14 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3264281129U)))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32456))) - (1ULL))))))));
                }
            } 
        } 
    } 
}
