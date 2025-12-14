/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33460
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
    var_14 = ((long long int) var_0);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) max((((unsigned int) ((short) var_11))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_0])) / (((/* implicit */int) var_4)))))));
                var_15 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) 1824834711)) ? (((((/* implicit */_Bool) 7787238126256705122ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4739))) : (7787238126256705122ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))))));
            }
        } 
    } 
}
