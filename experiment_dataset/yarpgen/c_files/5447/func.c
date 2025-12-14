/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5447
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(var_11)))) ^ (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14))))), ((-(var_1)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */long long int) var_4);
                var_19 = (+(3467994972U));
                var_20 = (+((~(((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & (arr_3 [16LL] [i_1]))))));
            }
        } 
    } 
}
