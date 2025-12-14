/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30764
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
    var_17 = 9980857929032735207ULL;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((unsigned long long int) 4294967292U));
                    arr_7 [i_0] = ((unsigned long long int) ((max((829346688U), (272424030U))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 3242678882U)) && (((/* implicit */_Bool) var_5))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_14))));
}
